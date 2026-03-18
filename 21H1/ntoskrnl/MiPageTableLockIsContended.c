/*
 * XREFs of MiPageTableLockIsContended @ 0x1402B32C0
 * Callers:
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MiProbePacketContended @ 0x1402A8EF8 (MiProbePacketContended.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C2DA8 (MiInsertViewOfPhysicalSection.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140543C64 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetPageTableLockBuffer @ 0x1402DBA88 (MiGetPageTableLockBuffer.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  char v3; // al
  unsigned __int64 v4; // rbx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  bool v8; // zf
  __int64 v9; // rdx
  _DWORD *PageTableLockBuffer; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a1 + 184) & 7;
  v14 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v3 )
    {
      if ( v3 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = v3 == 5;
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        if ( !v8 )
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    return SelfmapLockHandle->LockQueue.Next != 0;
  }
  if ( !v3 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v9 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
      if ( v9 )
        return (*(_DWORD *)(v9 + 4 * ((a2 >> 3) & 0x1FF)) >> 30) & 1;
    }
    goto LABEL_4;
  }
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(a1, a2, &v14);
    return ((*PageTableLockBuffer >> v14) & 2) != 0;
  }
LABEL_4:
  v4 = *(_QWORD *)a2;
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = v4 | 0x20;
      v13 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v13 & 0x20) == 0 )
        v12 = v4;
      v4 = v12;
      if ( (v13 & 0x42) != 0 )
        v4 = v12 | 0x42;
    }
  }
  return (v4 >> 60) & 2;
}
