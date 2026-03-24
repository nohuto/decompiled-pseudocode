/*
 * XREFs of PopBatteryWakeDpc @ 0x1403A7AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x14039AABC (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C23740 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C23728, 0, 0);
  _InterlockedExchange(&dword_140C236A0, 0);
  PopBatteryQueueWork(v0);
}
