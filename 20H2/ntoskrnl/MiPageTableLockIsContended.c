/*
 * XREFs of MiPageTableLockIsContended @ 0x1402CFD90
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiProbePacketContended @ 0x1402D138C (MiProbePacketContended.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C63D8 (MiInsertViewOfPhysicalSection.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140547C84 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetPageTableLockBuffer @ 0x14035BB38 (MiGetPageTableLockBuffer.c)
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
