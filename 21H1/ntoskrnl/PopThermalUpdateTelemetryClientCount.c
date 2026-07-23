/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1403A4980
 * Callers:
 *     PopThermalZoneAdd @ 0x14077AC80 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x14077AEC0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408DE348 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408DE5F8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408E36F0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14035B660 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v2);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
