/*
 * XREFs of ?InitTimerPowerSaving@@YGXXZ @ 0xD5632
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     <none>
 */

void __stdcall InitTimerPowerSaving()
{
  FastGetProfileDword(0, 2, L"RITdemonTimerPowerSaveElapse", 43200000, &gdwRITdemonTimerPowerSaveElapse);
  FastGetProfileDword(0, 2, L"RITdemonTimerPowerSaveCoalescing", 43200000, &gdwRITdemonTimerPowerSaveCoalescing);
}
