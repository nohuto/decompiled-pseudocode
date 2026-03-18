/*
 * XREFs of Phase1Initialization @ 0x140786180
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x1403B0840 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407861E8 (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     IoInitSystem @ 0x140A426FC (IoInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140D567A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
