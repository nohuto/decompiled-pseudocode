/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800F7E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtQuerySystemInformation @ 0x18009D770 (NtQuerySystemInformation.c)
 */

NTSTATUS __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Heap; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  __int64 *v8; // rax

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 32LL);
    v7 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 16) = 1;
      *(_QWORD *)(Heap + 24) = a1;
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpSecMemLock, v4, v5, v6);
      v8 = (__int64 *)off_180166A88;
      if ( *off_180166A88 != (_UNKNOWN *)&RtlpSecMemListHead )
        __fastfail(3u);
      *(_QWORD *)v7 = &RtlpSecMemListHead;
      *(_QWORD *)(v7 + 8) = v8;
      *v8 = v7;
      off_180166A88 = (_UNKNOWN **)v7;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
