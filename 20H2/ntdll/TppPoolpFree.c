/*
 * XREFs of TppPoolpFree @ 0x180054EDC
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 *     TpReleasePool @ 0x180054CB0 (TpReleasePool.c)
 *     TpUnreserveTaskPost @ 0x18006FEC0 (TpUnreserveTaskPost.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppDestroyTimerSubQueue @ 0x180054FEC (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 */

__int64 __fastcall TppPoolpFree(__int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  TppDestroyTimerSubQueue(a1 + 120);
  TppDestroyTimerSubQueue(a1 + 240);
  NtClose(*(HANDLE *)(a1 + 64));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 16));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 40));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 48));
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, v3, v4, v5);
  v6 = *(_QWORD *)(a1 + 384);
  v7 = *(_QWORD **)(a1 + 392);
  if ( *(_QWORD *)(v6 + 8) != a1 + 384 || *v7 != a1 + 384 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, a1);
}
