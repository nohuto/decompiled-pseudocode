/*
 * XREFs of CrmStateMonitorCleanup @ 0x180036360
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002AE58 (CrmRegisterToStateMonitor.c)
 *     CrmActivityCleanup @ 0x18002F330 (CrmActivityCleanup.c)
 *     CrmActivityStart @ 0x180030020 (CrmActivityStart.c)
 *     CrmStateMonitorListenerRemove @ 0x1800364BC (CrmStateMonitorListenerRemove.c)
 * Callees:
 *     CrmStateMonitorGPUUsageCleanup @ 0x180036448 (CrmStateMonitorGPUUsageCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x1800849A0 (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x180084A44 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x180084A94 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDelayedCsCleanup @ 0x180084B3C (CrmStateMonitorDelayedCsCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x180084BDC (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x180084C2C (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x180084CE4 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x180084D9C (CrmStateMonitorPowerConstrainedCleanup.c)
 *     CrmStateMonitorTestCleanup @ 0x180084DEC (CrmStateMonitorTestCleanup.c)
 *     CrmStateMonitorTimeSinceBootCleanup @ 0x180084F20 (CrmStateMonitorTimeSinceBootCleanup.c)
 */

__int64 __fastcall CrmStateMonitorCleanup(__int64 a1)
{
  int v1; // edx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v1 = *(_DWORD *)a1;
  if ( *(int *)a1 <= 23 )
  {
    if ( v1 < 22 )
    {
      if ( v1 > 12 )
      {
        if ( v1 > 17 )
        {
          switch ( v1 )
          {
            case 18:
              v5 = *(void **)(a1 + 64);
              if ( v5 )
                CancelMibChangeNotify2(v5);
              v6 = *(void **)(a1 + 72);
              if ( v6 )
                CancelMibChangeNotify2(v6);
              break;
            case 19:
              CrmStateMonitorPostShellReadyCleanup();
              break;
            case 20:
              CrmStateMonitorPostResumeCleanup();
              break;
            default:
              CrmStateMonitorPowerConstrainedCleanup();
              break;
          }
          return CrmLogStateMonitorStop(a1);
        }
      }
      else
      {
        if ( v1 == 12 )
          goto LABEL_15;
        if ( v1 < 0 )
          return CrmLogStateMonitorStop(a1);
        if ( v1 <= 1 )
        {
          CrmStateMonitorTestCleanup();
          return CrmLogStateMonitorStop(a1);
        }
        if ( v1 == 2 )
        {
          CrmStateMonitorCompositeTestCleanup();
          return CrmLogStateMonitorStop(a1);
        }
        if ( v1 <= 8 )
        {
          v4 = *(void **)(a1 + 64);
          if ( v4 )
            PowerSettingUnregisterNotification(v4);
          return CrmLogStateMonitorStop(a1);
        }
        if ( v1 != 9 )
        {
          if ( v1 == 10 )
            return CrmLogStateMonitorStop(a1);
LABEL_15:
          CrmStateMonitorTimeSinceBootCleanup();
          return CrmLogStateMonitorStop(a1);
        }
      }
    }
LABEL_45:
    if ( *(_QWORD *)(a1 + 72) )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v1 <= 29 )
  {
    if ( v1 != 29 && (v7 = v1 - 24) != 0 && (v8 = v7 - 1) != 0 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          CrmStateMonitorDelayedAcCleanup();
      }
      else
      {
        CrmStateMonitorCsAcDcCleanup();
      }
    }
    else
    {
      CrmStateMonitorGPUUsageCleanup();
    }
    return CrmLogStateMonitorStop(a1);
  }
  v10 = v1 - 30;
  if ( !v10 )
    goto LABEL_45;
  v11 = v10 - 1;
  if ( !v11 )
  {
    CrmStateMonitorDisconnectedStandbyCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_45;
  v13 = v12 - 1;
  if ( !v13 )
  {
    CrmStateMonitorDelayedCsCleanup();
    return CrmLogStateMonitorStop(a1);
  }
  if ( v13 == 1 )
    goto LABEL_45;
  return CrmLogStateMonitorStop(a1);
}
