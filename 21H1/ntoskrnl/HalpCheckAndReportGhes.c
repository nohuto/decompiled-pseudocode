/*
 * XREFs of HalpCheckAndReportGhes @ 0x1404CA568
 * Callers:
 *     HalHandleNMI @ 0x1404B8180 (HalHandleNMI.c)
 *     HalpGenericPolledWorkerRoutine @ 0x1404CA680 (HalpGenericPolledWorkerRoutine.c)
 *     HalpPeiInterruptHandler @ 0x1404CA6F0 (HalpPeiInterruptHandler.c)
 *     HalpGenInitialRead @ 0x1409A39DC (HalpGenInitialRead.c)
 * Callees:
 *     HalpReadGenericErrorInfo @ 0x1404CA718 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x1404CA848 (HalpSignalRAS.c)
 *     WheaReportHwError @ 0x1405B5450 (WheaReportHwError.c)
 */

char __fastcall HalpCheckAndReportGhes(__int64 a1)
{
  char v2; // di

  v2 = 0;
  if ( (int)HalpReadGenericErrorInfo() >= 0 )
  {
    PshedRetrieveErrorInfo(*(_QWORD *)(a1 + 24), a1 + 88);
    if ( *(_DWORD *)(a1 + 96) == 12 )
      HalpSignalRAS(a1);
    WheaReportHwError(*(_QWORD *)(a1 + 24));
    return 1;
  }
  return v2;
}
