/*
 * XREFs of Phase1Initialization @ 0x140793E90
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x1403B31B0 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x140793EF8 (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     IoInitSystem @ 0x140A4899C (IoInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140D587A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
