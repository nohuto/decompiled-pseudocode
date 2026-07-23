/*
 * XREFs of MiInsertPteTracker @ 0x14055F020
 * Callers:
 *     MiMapContiguousMemory @ 0x1402174E4 (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapMdl @ 0x1405377F0 (MmMapMdl.c)
 *     MmAllocateMappingAddressEx @ 0x14060CD40 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140407B90 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, char a4)
{
  PSLIST_ENTRY v8; // rdi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  _SLIST_ENTRY *v20; // rdx
  __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v28; // zf
  ULONG BackTraceHash; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-30h] BYREF

  BackTraceHash = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( LOWORD(stru_140C4EB00.Alignment) < 0xAu )
  {
    v8 = RtlpInterlockedPopEntrySList(&stru_140C4EB00);
    goto LABEL_6;
  }
  v9 = RtlpInterlockedFlushSList(&stru_140C4EB00);
  v8 = v9;
  if ( v9 )
  {
    Next = v9->Next;
    if ( v9->Next )
    {
      do
      {
        v11 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v11;
      }
      while ( v11 );
    }
LABEL_6:
    if ( v8 )
      goto LABEL_9;
  }
  result = (__int64)MiAllocatePool(64, 0x80uLL, 0x79536D4Du);
  v8 = (PSLIST_ENTRY)result;
  if ( !result )
  {
    byte_140C4EBFD = 1;
    return result;
  }
LABEL_9:
  if ( !a2 )
  {
    v17 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v18 = *(unsigned int *)(a1 + 40) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)a1;
    v16 = v18 + v17;
    *((_QWORD *)&v8[2].Next + 1) = *(_QWORD *)(a1 + 32);
    LODWORD(v8[3].Next) = *(_DWORD *)(a1 + 44);
    HIDWORD(v8[3].Next) = *(_DWORD *)(a1 + 40);
    goto LABEL_14;
  }
  if ( a2 == 1 )
  {
    v14 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v15 = *(_QWORD *)(a1 + 16) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)1;
    v16 = v15 + v14;
LABEL_14:
    v13 = v16 >> 12;
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(a1 + 16) >> 12;
  v8[1].Next = 0LL;
LABEL_15:
  v19 = v13 + 1;
  if ( (a3 & 2) == 0 )
    v19 = v13;
  *((_QWORD *)&v8[1].Next + 1) = v19;
  RtlCaptureStackBackTrace(1u, 7u, (PVOID *)&v8[4].Next + 1, &BackTraceHash);
  v20 = *(_SLIST_ENTRY **)(a1 + 24);
  v8[2].Next = v20;
  *((_QWORD *)&v8[3].Next + 1) = *(_QWORD *)(a1 + 48);
  LODWORD(v8[4].Next) = (4 * (a4 & 3)) | a3 & 1 | (__int64)v8[4].Next & 0xFFFFFFE0 | ((a3 & 2) != 0 ? 0x10 : 0);
  v21 = 40543LL * (unsigned int)((unsigned __int64)v20 >> 12);
  KeAcquireInStackQueuedSpinLock(&qword_140C4EB10, &LockHandle);
  v22 = (char *)&unk_140C4F870 + 16 * (((unsigned __int8)v21 ^ BYTE4(v21)) & 0xF);
  v23 = *(_QWORD *)v22;
  if ( *(char **)(*(_QWORD *)v22 + 8LL) != v22 )
    __fastfail(3u);
  *((_QWORD *)&v8->Next + 1) = v22;
  v8->Next = (_SLIST_ENTRY *)v23;
  *(_QWORD *)(v23 + 8) = v8;
  *(_QWORD *)v22 = v8;
  qword_140C4F970 += v19;
  v24 = ++qword_140C4F978;
  if ( qword_140C4F978 > (unsigned __int64)qword_140C4F980 )
    qword_140C4F980 = v24;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v28 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v28 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
