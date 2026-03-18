/*
 * XREFs of PopCoolingTelemetryWorker @ 0x140562BE0
 * Callers:
 *     PopThermalTelemetryWorker @ 0x140569E70 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140387008 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1403871F4 (PopTraceThermalRequestActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140763C78 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140779730 (PopThermalUpdateActiveTimeTracking.c)
 */

void PopCoolingTelemetryWorker()
{
  __int64 i; // rbx
  __int64 v1; // rdx
  __int64 j; // rdi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 18) )
        {
          if ( *(_QWORD *)(i + 136) )
          {
            LOBYTE(v1) = *(_BYTE *)(j + 16);
            PopThermalUpdatePassiveTimeTracking(j + 40, v1);
            PopTraceThermalRequestPassiveHistogram(j);
          }
          if ( *(_QWORD *)(i + 128) )
          {
            LOBYTE(v1) = *(_BYTE *)(j + 17) == 0;
            PopThermalUpdateActiveTimeTracking(j + 40, v1);
            PopTraceThermalRequestActiveActivity(j);
          }
        }
      }
      PopReleaseRwLock(i + 32);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
}
