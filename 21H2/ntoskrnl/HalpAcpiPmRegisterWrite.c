/*
 * XREFs of HalpAcpiPmRegisterWrite @ 0x14037C2B0
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE54C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404BE6D0 (HalpShutdown.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404D2AC8 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140996EFC (HalpAcpiPreSleep.c)
 *     HalpDpPostReplace @ 0x1409A929C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A958C (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcpiPmRegisterWrite(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = 6LL * a1;
  if ( *(_DWORD *)&PmRegisters[48 * a1 + 24] > a4 )
    return 3221225507LL;
  (*(void (__fastcall **)(_QWORD))&PmRegisters[48 * a1 + 40])(*(_QWORD *)&PmRegisters[48 * a1 + 8] + a2);
  if ( a5 )
    *a5 = *(_DWORD *)&PmRegisters[8 * v5 + 24];
  return 0LL;
}
