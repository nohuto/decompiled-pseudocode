/*
 * XREFs of PopBatteryWakeDpc @ 0x1403A4E00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x140396C68 (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C23220 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C23208, 0, 0);
  _InterlockedExchange(&dword_140C23180, 0);
  PopBatteryQueueWork(v0);
}
