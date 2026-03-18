/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14022D770
 * Callers:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     HalEfiSetTime @ 0x1405101D0 (HalEfiSetTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x140850F5C (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085EDEC (CmpUpdateReorganizeRegistryValues.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1409082EC (HalpUtcTimeToAcpiRealTime.c)
 *     PopDiagTracePassiveCooling @ 0x140992918 (PopDiagTracePassiveCooling.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409986C4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140A52E00 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140B2EBF4 (GetBootSystemTime.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v5 = *(_QWORD **)(ThreadServerSilo + 1464);
  else
    v5 = &PspHostSiloGlobals;
  LocalTime->QuadPart = SystemTime->QuadPart - *(_QWORD *)(v5[157] + 440LL);
}
