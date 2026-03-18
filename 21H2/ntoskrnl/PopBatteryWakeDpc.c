/*
 * XREFs of PopBatteryWakeDpc @ 0x1403B6C90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x14036972C (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C22AC0 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C22AA8, 0, 0);
  _InterlockedExchange(&dword_140C22A20, 0);
  PopBatteryQueueWork(v0);
}
