/*
 * XREFs of MiPageTableLockIsContended @ 0x140308460
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MiDispatchFault @ 0x14020EF00 (MiDispatchFault.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402980D4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140299824 (MiReplaceRotateWithDemandZero.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiProbePacketContended @ 0x140308408 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     NtUnlockVirtualMemory @ 0x14032DF30 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6DC8 (MiInsertViewOfPhysicalSection.c)
 *     MiAddPagesToEnclave @ 0x140549104 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140549784 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AB30 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054BF44 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x140563A88 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x140285818 (MiGetPageTableLockBuffer.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  char v3; // al
  unsigned __int64 v4; // rbx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  bool v8; // zf
  char *PageTableLockBuffer; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  v3 = *(_BYTE *)(a1 + 184) & 7;
  v13 = 0;
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
      a2 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
      if ( a2 )
        return (*(_DWORD *)(a2 + 4 * ((v2 >> 3) & 0x1FF)) >> 30) & 1;
    }
    goto LABEL_4;
  }
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    PageTableLockBuffer = MiGetPageTableLockBuffer(a1, a2, &v13);
    return ((*(_DWORD *)PageTableLockBuffer >> v13) & 2) != 0;
  }
LABEL_4:
  v4 = *(_QWORD *)v2;
  if ( (unsigned int)MiPteInShadowRange(v2, a2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = v4 | 0x20;
      v12 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      if ( (v12 & 0x20) == 0 )
        v11 = v4;
      v4 = v11;
      if ( (v12 & 0x42) != 0 )
        v4 = v11 | 0x42;
    }
  }
  return (v4 >> 60) & 2;
}
