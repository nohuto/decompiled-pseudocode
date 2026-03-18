/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x1408E8AAC
 * Callers:
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x1408E93D4 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 */

char PopBatteryEstimatesSpoiled()
{
  char v0; // bl

  if ( (unsigned __int64)PopEstimateSpoiledUntilTime < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
