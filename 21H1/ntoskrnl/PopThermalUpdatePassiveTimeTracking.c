/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x140763C78
 * Callers:
 *     PopThermalSxEntry @ 0x1403869D8 (PopThermalSxEntry.c)
 *     PopCoolingSxTransition @ 0x140386F04 (PopCoolingSxTransition.c)
 *     PopCoolingTelemetryWorker @ 0x140562BE0 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x140569E70 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x1407AADD0 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x1408DE170 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1408DE348 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1408DE5F8 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1408E36F0 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= PopThermalTrackingThresholds[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 24) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
