/*
 * XREFs of CcSerializeWithLazyWriter @ 0x1403F0534
 * Callers:
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D1370 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 */

char __fastcall CcSerializeWithLazyWriter(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rbx
  _SLIST_ENTRY *v6; // rbx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 1;
  if ( (*(_DWORD *)(a2 + 152) & 0x20) != 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    v4 = *(_QWORD *)(a2 + 496);
    if ( v4 )
    {
      v6 = (_SLIST_ENTRY *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
      Next = v6->Next;
      if ( *(&v6->Next->Next + 1) != v6 || (v8 = (_SLIST_ENTRY **)*((_QWORD *)&v6->Next + 1), *v8 != v6) )
        __fastfail(3u);
      *v8 = Next;
      *((_QWORD *)&Next->Next + 1) = v8;
      *((_QWORD *)&v6->Next + 1) = 0LL;
      v6->Next = 0LL;
      *(_QWORD *)(a2 + 496) = 0LL;
      *(_DWORD *)(a2 + 152) &= ~0x20u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      CcFreeWorkQueueEntry(v6);
    }
    else
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return 0;
    }
  }
  return v3;
}
