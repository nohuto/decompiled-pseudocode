/*
 * XREFs of _TppPoolpFree@4 @ 0x4B2AB6C5
 * Callers:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlpTpWorkUnposted@8 @ 0x4B2E9550 (_RtlpTpWorkUnposted@8.c)
 * Callees:
 *     _TppPoolpFree@4 @ 0x4B2AB6C5 (_TppPoolpFree@4.c)
 *     _TppDestroyTimerSubQueue@4 @ 0x4B2AB7C4 (_TppDestroyTimerSubQueue@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

LOGICAL __thiscall TppPoolpFree(int this)
{
  int v2; // edx
  _DWORD *v3; // ecx

  if ( *(_DWORD *)(this + 36) )
  {
    NtClose(*(HANDLE *)(this + 36));
    *(_DWORD *)(this + 36) = 0;
  }
  TppDestroyTimerSubQueue(this + 72);
  TppDestroyTimerSubQueue(this + 144);
  NtClose(*(HANDLE *)(this + 40));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(PVOID *)(this + 16));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(PVOID *)(this + 28));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(PVOID *)(this + 32));
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v2 = *(_DWORD *)(this + 232);
  v3 = *(_DWORD **)(this + 236);
  if ( *(_DWORD *)(v2 + 4) != this + 232 || *v3 != this + 232 )
    __fastfail(3u);
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (PVOID)this);
}
