/*
 * XREFs of HalpAcpiPmRegisterAvailable @ 0x14037C790
 * Callers:
 *     HalpAcpiPostSleep @ 0x14099833C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099870C (HalpAcpiPreSleep.c)
 *     HalpCheckFixedWakeSources @ 0x1409988C0 (HalpCheckFixedWakeSources.c)
 *     HalpDpPostReplace @ 0x1409AB49C (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x1409AB78C (HalpDpPreReplace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterAvailable(int a1)
{
  return PmRegisters[48 * a1] == 0 ? 0xC00000BB : 0;
}
