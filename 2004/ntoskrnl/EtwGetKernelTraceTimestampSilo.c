/*
 * XREFs of EtwGetKernelTraceTimestampSilo @ 0x14025AEB4
 * Callers:
 *     PfHardFaultRecord @ 0x14025AE2C (PfHardFaultRecord.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestampSilo(LARGE_INTEGER *a1, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  LARGE_INTEGER *v4; // rdi
  _QWORD *v5; // r8
  __int64 v6; // r8
  unsigned int v7; // r9d
  __int64 v9; // r10
  __int64 v10; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a1;
  if ( a3 )
    v5 = *(_QWORD **)(a3 + 1272);
  else
    v5 = &PspHostSiloGlobals;
  v6 = v5[108];
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4224);
    while ( _BitScanForward((unsigned int *)&a1, v7) )
    {
      v9 = (unsigned int)a1;
      v7 &= v7 - 1;
      v10 = 32LL * (unsigned int)a1 + v6 + 4260;
      if ( v10 )
      {
        if ( (a2 & *(_DWORD *)(v10 + 4 * ((unsigned __int64)a2 >> 29)) & 0x1FFFFFFF) != 0 )
          v3 |= 1 << *(_BYTE *)(v6 + 2 * v9 + 4209);
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
  *v4 = PerformanceCounter;
  if ( (v3 & 4) != 0 )
    result = RtlGetSystemTimePrecise(a1);
  else
    result = 0LL;
  v4[1].QuadPart = result;
  if ( (v3 & 8) != 0 )
  {
    result = __rdtsc();
    v4[2].QuadPart = result;
  }
  else
  {
    v4[2].QuadPart = 0LL;
  }
  if ( (v3 & 0x10) != 0 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 *))off_140C009E0[0])(&v13);
    result = v13;
    v4[3].QuadPart = v13;
  }
  else
  {
    v4[3].QuadPart = 0LL;
  }
  return result;
}
