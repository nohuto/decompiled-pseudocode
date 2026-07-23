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

LOGICAL __fastcall TppPoolpFree(char *BaseAddress)
{
  void *v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx

  v2 = (void *)*((_QWORD *)BaseAddress + 7);
  if ( v2 )
  {
    NtClose(v2);
    *((_QWORD *)BaseAddress + 7) = 0LL;
  }
  TppDestroyTimerSubQueue(BaseAddress + 120);
  TppDestroyTimerSubQueue(BaseAddress + 240);
  NtClose(*((HANDLE *)BaseAddress + 8));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 2));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 5));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 6));
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v3 = (char **)*((_QWORD *)BaseAddress + 48);
  v4 = (PVOID *)*((_QWORD *)BaseAddress + 49);
  if ( v3[1] != BaseAddress + 384 || *v4 != BaseAddress + 384 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
}
