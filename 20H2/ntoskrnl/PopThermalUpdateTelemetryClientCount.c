/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x1403AE018
 * Callers:
 *     PopThermalZoneAdd @ 0x140791070 (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x1407912B0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408E53E8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408E5698 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408EA580 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalTelemetryLock);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v4[0] = 0LL;
      v4[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v4);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer, 0LL, v2, v3);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalTelemetryLock);
}
