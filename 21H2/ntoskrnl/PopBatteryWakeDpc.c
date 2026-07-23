/*
 * XREFs of PopBatteryWakeDpc @ 0x1403A7C10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x14039AC0C (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C23D60 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C23D48, 0, 0);
  _InterlockedExchange(&dword_140C23CC0, 0);
  PopBatteryQueueWork(v0);
}
