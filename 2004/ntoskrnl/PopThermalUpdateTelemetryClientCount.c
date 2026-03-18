/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1403ABA48
 * Callers:
 *     PopThermalZoneAdd @ 0x140783680 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x1407838C0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408DF5A8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408DF858 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408E4970 (PopThermalZoneRemove.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1402754B0 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
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
