/*
 * XREFs of EtwGetKernelTraceTimestampSilo @ 0x1402D1218
 * Callers:
 *     PfHardFaultRecord @ 0x1402D1190 (PfHardFaultRecord.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402D6A90 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwGetKernelTraceTimestampSilo(LARGE_INTEGER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 v5; // r11
  LARGE_INTEGER *v6; // rdi
  _QWORD *v7; // r8
  __int64 v8; // r8
  __int64 v10; // r10
  __int64 v11; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  v6 = a1;
  if ( a3 )
    v7 = *(_QWORD **)(a3 + 1272);
  else
    v7 = &PspHostSiloGlobals;
  v8 = v7[108];
  if ( v8 )
  {
    a4 = *(unsigned int *)(v8 + 4224);
    while ( _BitScanForward((unsigned int *)&a1, a4) )
    {
      v10 = (unsigned int)a1;
      a4 = ((_DWORD)a4 - 1) & (unsigned int)a4;
      v11 = 32LL * (unsigned int)a1 + v8 + 4260;
      if ( v11 )
      {
        a2 = (unsigned int)v5 & *(_DWORD *)(v11 + 4 * (v5 >> 29));
        if ( (a2 & 0x1FFFFFFF) != 0 )
          v4 |= 1 << *(_BYTE *)(v8 + 2 * v10 + 4209);
      }
    }
  }
  else
  {
    LOBYTE(v4) = 30;
  }
  if ( (v4 & 2) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  *v6 = PerformanceCounter;
  if ( (v4 & 4) != 0 )
    result = RtlGetSystemTimePrecise(a1, a2, v8, a4);
  else
    result = 0LL;
  v6[1].QuadPart = result;
  if ( (v4 & 8) != 0 )
  {
    result = __rdtsc();
    v6[2].QuadPart = result;
  }
  else
  {
    v6[2].QuadPart = 0LL;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 *))off_140C009E0[0])(&v14);
    result = v14;
    v6[3].QuadPart = v14;
  }
  else
  {
    v6[3].QuadPart = 0LL;
  }
  return result;
}
