/*
 * XREFs of HalpApicHvUpdateCallback @ 0x1404D1D80
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicSetupRegisterAccess @ 0x1403A1EA4 (HalpApicSetupRegisterAccess.c)
 */

__int64 HalpApicHvUpdateCallback()
{
  return HalpApicSetupRegisterAccess();
}
