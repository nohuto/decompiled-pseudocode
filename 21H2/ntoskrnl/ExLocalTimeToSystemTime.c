/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14022D7D0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     HalpSetResumeTime @ 0x14039157C (HalpSetResumeTime.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 *     HalEfiGetTime @ 0x14050FD3C (HalEfiGetTime.c)
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     HalpAcpiRealTimeToUtcTime @ 0x14090805C (HalpAcpiRealTimeToUtcTime.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409986C4 (PopNetGetNextDueRefreshTime.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A47884 (ExUpdateSystemTimeFromCmos.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     GetBootSystemTime @ 0x140B2EBF4 (GetBootSystemTime.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v5 = *(_QWORD **)(ThreadServerSilo + 1464);
  else
    v5 = &PspHostSiloGlobals;
  SystemTime->QuadPart = LocalTime->QuadPart + *(_QWORD *)(v5[157] + 440LL);
}
