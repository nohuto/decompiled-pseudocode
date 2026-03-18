/*
 * XREFs of HalpAcpiPmRegisterRead @ 0x140396D50
 * Callers:
 *     HaliAcpiSleep @ 0x140383470 (HaliAcpiSleep.c)
 *     HalpCheckPowerButton @ 0x1403ECA10 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404B9360 (HaliHaltSystem.c)
 *     HalpShutdown @ 0x1404B95AC (HalpShutdown.c)
 *     HalpAcpiPostSleep @ 0x1409922CC (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099269C (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140992850 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A553C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A582C (HalpDpPreReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpAcpiPmRegisterRead(int a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = 6LL * a1;
  if ( *(_DWORD *)&PmRegisters[48 * a1 + 24] > a4 )
    return 3221225507LL;
  (*(void (__fastcall **)(_QWORD))&PmRegisters[48 * a1 + 32])(*(_QWORD *)&PmRegisters[48 * a1 + 8] + a2);
  if ( a5 )
    *a5 = *(_DWORD *)&PmRegisters[8 * v5 + 24];
  return 0LL;
}
