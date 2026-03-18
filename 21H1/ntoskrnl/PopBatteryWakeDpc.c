/*
 * XREFs of PopBatteryWakeDpc @ 0x1403A4680
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x140397AC8 (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C237E0 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C237C8, 0, 0);
  _InterlockedExchange(&dword_140C23740, 0);
  PopBatteryQueueWork(v0);
}
