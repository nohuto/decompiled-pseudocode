/*
 * XREFs of MiRemovePteTracker @ 0x140559570
 * Callers:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     MmFreeMappingAddress @ 0x1407521C0 (MmFreeMappingAddress.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiRemovePteTracker(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, ULONG_PTR a3)
{
  _SLIST_ENTRY *v5; // rdi
  __int64 v6; // rbx
  ULONG_PTR v7; // r14
  _SLIST_ENTRY *v8; // rdx
  _SLIST_ENTRY *Next; // r8
  ULONG_PTR v10; // r9
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // r9
  _SLIST_ENTRY *v13; // rcx
  _SLIST_ENTRY **v14; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  v6 = 40543LL * (unsigned int)(a2 >> 12);
  v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
  KeAcquireInStackQueuedSpinLock(&qword_140C4EA10, &LockHandle);
  v8 = (_SLIST_ENTRY *)((char *)&unk_140C4F770 + 16 * (((unsigned __int8)v6 ^ BYTE4(v6)) & 0xF));
  Next = v8->Next;
  if ( v8->Next == v8 )
    goto LABEL_16;
  do
  {
    v10 = (ULONG_PTR)Next[2].Next;
    if ( v7 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( v5 )
        KeBugCheckEx(0xDAu, 1uLL, (ULONG_PTR)Next, BugCheckParameter3, (ULONG_PTR)v5);
      if ( *((_QWORD *)&Next[1].Next + 1) != a3 )
        KeBugCheckEx(0xDAu, 2uLL, (ULONG_PTR)Next, *((_QWORD *)&Next[1].Next + 1), a3);
      if ( BugCheckParameter3 && (*(_WORD *)(BugCheckParameter3 + 10) & 0x200) == 0 )
      {
        v11 = *((_QWORD *)&Next[3].Next + 1);
        if ( v11 != *(_QWORD *)(BugCheckParameter3 + 48) )
          KeBugCheckEx(0xDAu, 4uLL, (ULONG_PTR)Next, v11, *(_QWORD *)(BugCheckParameter3 + 48));
        if ( !byte_140C4EC94 )
        {
          if ( v10 != *(_QWORD *)(BugCheckParameter3 + 24) )
            KeBugCheckEx(0xDAu, 3uLL, (ULONG_PTR)Next, v10, *(_QWORD *)(BugCheckParameter3 + 24));
          v12 = *((_QWORD *)&Next[2].Next + 1);
          if ( v12 != *(_QWORD *)(BugCheckParameter3 + 32) )
            KeBugCheckEx(0xDAu, 5uLL, (ULONG_PTR)Next, v12, *(_QWORD *)(BugCheckParameter3 + 32));
        }
      }
      v13 = Next->Next;
      v14 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
      if ( *(&Next->Next->Next + 1) != Next || *v14 != Next )
        __fastfail(3u);
      *v14 = v13;
      v5 = Next;
      *((_QWORD *)&v13->Next + 1) = v14;
    }
    Next = Next->Next;
  }
  while ( Next != v8 );
  if ( !v5 )
  {
LABEL_16:
    if ( !byte_140C4EAFD )
      KeBugCheckEx(0xDAu, 6uLL, BugCheckParameter3, v7, a3);
  }
  qword_140C4F870 -= a3;
  --qword_140C4F878;
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
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v5 )
    return (__int64)RtlpInterlockedPushEntrySList(&stru_140C4EA00, v5);
  return result;
}
