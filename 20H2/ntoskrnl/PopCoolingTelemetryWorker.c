/*
 * XREFs of PopCoolingTelemetryWorker @ 0x140566C10
 * Callers:
 *     PopThermalTelemetryWorker @ 0x14056DEF0 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038A138 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038A324 (PopTraceThermalRequestActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407746C8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x14078A140 (PopThermalUpdateActiveTimeTracking.c)
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
