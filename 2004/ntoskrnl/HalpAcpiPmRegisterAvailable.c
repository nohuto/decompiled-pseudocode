/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x14037AA60
 * Callers:
 *     HalpAcpiPostSleep @ 0x1409922CC (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099269C (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140992850 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409A553C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409A582C (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
