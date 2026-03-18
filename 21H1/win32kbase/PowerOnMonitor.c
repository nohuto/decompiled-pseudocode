/*
 * XREFs of PowerOnMonitor @ 0x1C0053850
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8888 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00520FC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00523F4 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C0053B50 (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C0053B70 (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0053ED8 (EtwTracPowerOnMonitoreBegin.c)
 *     SqmPowerState @ 0x1C0054580 (SqmPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0054924 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00599B8 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C005B9E0 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00C82D0 (DrvSetMonitorPowerState.c)
 *     DrvChangeD3RequestsState @ 0x1C00CB680 (DrvChangeD3RequestsState.c)
 *     DCompositionForceRender @ 0x1C00CB6F0 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00CBD7C (IsSetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // edi
  int v8; // ebx
  int v9; // r15d
  int v10; // esi
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16[4]; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  result = gpbInHiberBoot;
  v6 = gPowerTransitionsState == 0;
  v8 = 0;
  v9 = 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    v10 = -1073741637;
    if ( v6 )
    {
      if ( !gProtocolType )
      {
        if ( !gPowerTransitionsState && !qword_1C02531AC )
        {
          v17 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v17, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v12 = *((_QWORD *)gptiCurrent + 56);
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 8);
            if ( v13 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v13 + 64LL) & 1) != 0 )
                DCompositionForceRender(1LL, 0LL, 0LL, 0LL);
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 && qword_1C0258498 )
          qword_1C0258498(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog(gpRequestWorkerWatchdog, 80LL);
        DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 1LL, 0LL, a2);
        DisarmPowerWatchdog(gpRequestWorkerWatchdog, 80LL);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( qword_1C02584B0 )
          v14 = qword_1C02584B0();
        else
          v14 = -1073741637;
        if ( v14 >= 0 && qword_1C02584B8 )
          qword_1C02584B8();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 && qword_1C0258498 )
          qword_1C0258498(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v15) = 1;
        DrvChangeD3RequestsState(v15);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C0253150 == 2 )
      v8 = 1;
    if ( v8 )
      UpdateDisplayState(PowerMonitorOn, a1, v6, v11);
    if ( v6 && grpdeskRitInput )
    {
      if ( qword_1C02584A0 )
        v10 = qword_1C02584A0();
      if ( v10 >= 0 && qword_1C02584A8 )
        qword_1C02584A8();
    }
    if ( v9 )
    {
      v16[0] = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, v16, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
