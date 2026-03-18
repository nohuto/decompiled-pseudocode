/*
 * XREFs of PopQueryPowerSettingUlong @ 0x1407651C4
 * Callers:
 *     PopDeferDoze @ 0x1408EBDB8 (PopDeferDoze.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409AE840 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x14070F4B8 (PopFindPowerSettingConfiguration.c)
 */

char __fastcall PopQueryPowerSettingUlong(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  __int64 *PowerSettingConfiguration; // rax
  __int64 *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax

  v6 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, -1);
  v8 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v9 = PowerSettingConfiguration[8];
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 4) >= 4u )
      {
        *a2 = *(_DWORD *)(v9 + 12);
        v10 = v8[9];
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 4) >= 4u )
          {
            v6 = 1;
            *a3 = *(_DWORD *)(v10 + 12);
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v6;
}
