/*
 * XREFs of CarInitLogging @ 0x140602EB8
 * Callers:
 *     CarInit @ 0x140603974 (CarInit.c)
 *     CarReportUnusualShutdown @ 0x140604224 (CarReportUnusualShutdown.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     CarEtwRegister @ 0x140602644 (CarEtwRegister.c)
 *     DifiDbgPrint @ 0x140605160 (DifiDbgPrint.c)
 */

__int64 CarInitLogging()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax

  v0 = 0;
  if ( _InterlockedCompareExchange(&CarLogInitialized, 1, 0) != 1
    && (!dword_140C090C0 || !tlgKeywordOn((__int64)&dword_140C090C0, 0x800000000000LL)) )
  {
    CarEtwRandomSeed = KeQueryPerformanceCounter(0LL).QuadPart;
    v1 = CarEtwRegister();
    v0 = v1;
    if ( v1 < 0 )
      DifiDbgPrint("Driver Verifier: CarLogging failed to initialize with %08lx\n", v1);
  }
  return v0;
}
