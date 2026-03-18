/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x1C00097A4
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void InitTimerPowerSaving(void)
{
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse");
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing");
}
