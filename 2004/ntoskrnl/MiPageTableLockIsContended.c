/*
 * XREFs of MiPageTableLockIsContended @ 0x14025A290
 * Callers:
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MiProbePacketContended @ 0x14024FEC8 (MiProbePacketContended.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140337F84 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C3C68 (MiInsertViewOfPhysicalSection.c)
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405442B4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetPageTableLockBuffer @ 0x140278D38 (MiGetPageTableLockBuffer.c)
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
