/*
 * XREFs of PopBatteryRefreshStatus @ 0x1403A4FB0
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     PopBatteryQueueWork @ 0x140396C68 (PopBatteryQueueWork.c)
 */

void PopBatteryRefreshStatus()
{
  PopBatteryQueueWork(1u);
}
