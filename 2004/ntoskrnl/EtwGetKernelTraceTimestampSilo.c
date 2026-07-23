/*
 * XREFs of EtwGetKernelTraceTimestampSilo @ 0x14025AEB4
 * Callers:
 *     PfHardFaultRecord @ 0x14025AE2C (PfHardFaultRecord.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwGetKernelTraceTimestampSilo(LARGE_INTEGER *a1, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  _QWORD *v5; // r8
  __int64 v6; // r8
  unsigned int v7; // r9d
  unsigned int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v14; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  if ( a3 )
    v5 = *(_QWORD **)(a3 + 1272);
  else
    v5 = &PspHostSiloGlobals;
  v6 = v5[108];
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4224);
    while ( _BitScanForward(&v9, v7) )
    {
      v10 = v9;
      v7 &= v7 - 1;
      v11 = 32LL * v9 + v6 + 4260;
      if ( v11 )
      {
        if ( (a2 & *(_DWORD *)(v11 + 4 * ((unsigned __int64)a2 >> 29)) & 0x1FFFFFFF) != 0 )
          v3 |= 1 << *(_BYTE *)(v6 + 2 * v10 + 4209);
      }
    }
  }
  else
  {
    LOBYTE(v3) = 30;
  }
  if ( (v3 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *a1 = PerformanceCounter;
  if ( (v3 & 4) != 0 )
    result = RtlGetSystemTimePrecise();
  else
    result.QuadPart = 0LL;
  a1[1] = result;
  if ( (v3 & 8) != 0 )
  {
    result.QuadPart = __rdtsc();
    a1[2] = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v14.QuadPart = 0LL;
    ((void (__fastcall *)(LARGE_INTEGER *))off_140C009E0[0])(&v14);
    result = v14;
    a1[3] = v14;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
