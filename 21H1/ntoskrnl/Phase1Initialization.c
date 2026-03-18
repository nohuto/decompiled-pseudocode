/*
 * XREFs of Phase1Initialization @ 0x14079B780
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x1403B9820 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x14079B7E8 (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140A5F46C (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140D557A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
