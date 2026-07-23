/*
 * XREFs of MiPageTableLockIsContended @ 0x1403131B0
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140218B54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiProbePacketContended @ 0x140313158 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6F68 (MiInsertViewOfPhysicalSection.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405499C4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x1402029B8 (MiGetPageTableLockBuffer.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  char v3; // al
  unsigned __int64 v4; // rbx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  bool v8; // zf
  __int64 v9; // rdx
  char *PageTableLockBuffer; // rax
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
    PageTableLockBuffer = MiGetPageTableLockBuffer(a1, a2, &v14);
    return ((*(_DWORD *)PageTableLockBuffer >> v14) & 2) != 0;
  }
LABEL_4:
  v4 = *(_QWORD *)a2;
  if ( (unsigned int)MiPteInShadowRange(a2)
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
