/*
 * XREFs of HalpAcpiPmRegisterWrite @ 0x14037A7A0
 * Callers:
 *     HaliAcpiSleep @ 0x140383470 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x1404B942C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404B95AC (HalpShutdown.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404CD918 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpAcpiPostSleep @ 0x1409922CC (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099269C (HalpAcpiPreSleep.c)
 *     HalpDpPostReplace @ 0x1409A553C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A582C (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
