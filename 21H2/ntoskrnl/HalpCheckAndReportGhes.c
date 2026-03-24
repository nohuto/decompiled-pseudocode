/*
 * XREFs of HalpCheckAndReportGhes @ 0x1404CF948
 * Callers:
 *     HalHandleNMI @ 0x1404BD740 (HalHandleNMI.c)
 *     HalpGenericPolledWorkerRoutine @ 0x1404CFA60 (HalpGenericPolledWorkerRoutine.c)
 *     HalpPeiInterruptHandler @ 0x1404CFAD0 (HalpPeiInterruptHandler.c)
 *     HalpGenInitialRead @ 0x1409A764C (HalpGenInitialRead.c)
 * Callees:
 *     HalpReadGenericErrorInfo @ 0x1404CFAF8 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x1404CFC28 (HalpSignalRAS.c)
 *     WheaReportHwError @ 0x1405BB130 (WheaReportHwError.c)
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
