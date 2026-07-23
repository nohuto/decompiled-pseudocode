/*
 * XREFs of HalpTimerRestorePerformanceCounter @ 0x140386E28
 * Callers:
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A5DB4 (HalpTimerCalibratePerformanceCounter.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpTimerSetProblemEx @ 0x1404C065C (HalpTimerSetProblemEx.c)
 */

LARGE_INTEGER HalpTimerRestorePerformanceCounter()
{
  __int64 *v0; // rsi
  unsigned int Number; // ebp
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx
  __int64 InternalData; // rax
  int v5; // r8d
  LARGE_INTEGER result; // rax
  unsigned int v7; // r10d
  ULONG_PTR BugCheckParameter4; // r8
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v0 = v9;
  Number = KeGetPcr()->Prcb.Number;
  v2 = 0;
  v9[0] = HalpPerformanceCounter;
  v9[1] = HalpAlwaysOnCounter;
  do
  {
    v3 = *v0;
    if ( *v0 )
    {
      InternalData = HalpTimerGetInternalData(*v0);
      v5 = (*(__int64 (__fastcall **)(__int64))(v3 + 104))(InternalData);
      if ( v5 < 0 )
      {
        HalpTimerSetProblemEx(v3, 15, v5, (unsigned int)"minkernel\\hals\\lib\\timers\\common\\timer.c", 2246);
        KeBugCheckEx(v7 + 77, 0x110uLL, v3, v7, BugCheckParameter4);
      }
      if ( *(_DWORD *)(v3 + 228) != 5 && !Number )
        HalpTimerCalibratePerformanceCounter(v3, *(_QWORD *)(v3 + 16));
    }
    ++v2;
    ++v0;
  }
  while ( v2 < 2 );
  result = KeQueryPerformanceCounter(0LL);
  HalpTimerEarliestQpcAllowedToConvert = result.QuadPart;
  return result;
}
