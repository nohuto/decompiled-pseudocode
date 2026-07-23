/*
 * XREFs of NtQueryPerformanceCounter @ 0x1405F2490
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  LARGE_INTEGER PerformanceFrequencya; // [rsp+40h] [rbp+18h] BYREF

  PerformanceFrequencya.QuadPart = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)PerformanceCounter & 3) == 0 )
    {
      v4 = 0x7FFFFFFF0000LL;
      v5 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)PerformanceCounter < 0x7FFFFFFF0000LL )
        v5 = (__int64)PerformanceCounter;
      *(_BYTE *)v5 = *(_BYTE *)v5;
      *(_BYTE *)(v5 + 7) = *(_BYTE *)(v5 + 7);
      if ( !PerformanceFrequency )
        goto LABEL_6;
      if ( ((unsigned __int8)PerformanceFrequency & 3) == 0 )
      {
        if ( (unsigned __int64)PerformanceFrequency < 0x7FFFFFFF0000LL )
          v4 = (__int64)PerformanceFrequency;
        *(_BYTE *)v4 = *(_BYTE *)v4;
        *(_BYTE *)(v4 + 7) = *(_BYTE *)(v4 + 7);
LABEL_6:
        *PerformanceCounter = KeQueryPerformanceCounter(&PerformanceFrequencya);
        if ( PerformanceFrequency )
          *PerformanceFrequency = PerformanceFrequencya;
        return 0;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  *PerformanceCounter = KeQueryPerformanceCounter(&PerformanceFrequencya);
  if ( PerformanceFrequency )
    *PerformanceFrequency = PerformanceFrequencya;
  return 0;
}
