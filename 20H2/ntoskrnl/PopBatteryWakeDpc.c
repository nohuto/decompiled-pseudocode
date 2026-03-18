/*
 * XREFs of PopBatteryWakeDpc @ 0x1403A7200
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x14039A64C (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C236E0 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C236C8, 0, 0);
  _InterlockedExchange(&dword_140C23640, 0);
  PopBatteryQueueWork(v0);
}
