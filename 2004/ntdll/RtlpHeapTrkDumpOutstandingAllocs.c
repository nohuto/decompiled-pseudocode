/*
 * XREFs of RtlpHeapTrkDumpOutstandingAllocs @ 0x1800FDCF8
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800FE330 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlpHeapTrkReportResult @ 0x1800FE534 (RtlpHeapTrkReportResult.c)
 */

char RtlpHeapTrkDumpOutstandingAllocs()
{
  unsigned int v0; // edi
  __int64 i; // r14
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // r9
  unsigned int v6; // r8d
  unsigned int NumberOfHeaps; // r10d
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 Src; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  for ( i = 0LL; ; i += 16LL )
  {
    v2 = v0 & 0xF;
    if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_18016BBB0 + 8 * v2), 0LL) )
      break;
    v3 = 16LL * v0;
    v4 = *(__int64 **)(i + qword_18016BA40);
    if ( v4 != (__int64 *)(v3 + qword_18016BA40) )
    {
      while ( 1 )
      {
        v5 = v4[3];
        if ( v5 )
        {
          v6 = 0;
          NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
          if ( NumberOfHeaps )
          {
            v8 = 0LL;
            while ( (void *)v4[2] != NtCurrentPeb()->ProcessHeaps[v8] )
            {
              ++v6;
              ++v8;
              if ( v6 >= NumberOfHeaps )
                goto LABEL_12;
            }
            v9 = (void *)v4[2];
            Src = 8 * v5;
            if ( RtlSizeHeap(v9, 0, (PVOID)(8 * v5)) != -1LL
              && !(unsigned __int8)RtlpHeapTrkReportResult(0x20uLL, &Src, 8uLL) )
            {
              break;
            }
          }
        }
LABEL_12:
        v4 = (__int64 *)*v4;
        if ( v4 == (__int64 *)(v3 + qword_18016BA40) )
          goto LABEL_13;
      }
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18016BBB0 + 8LL * (v0 & 0xF)));
      return 0;
    }
LABEL_13:
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18016BBB0 + 8 * v2));
    if ( ++v0 >= 0x1EEF )
      return 1;
  }
  return 0;
}
