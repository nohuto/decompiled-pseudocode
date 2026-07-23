/*
 * XREFs of Phase1Initialization @ 0x1407B3C40
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x1403B4894 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407B3CA8 (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140A67E8C (IoInitSystem.c)
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
