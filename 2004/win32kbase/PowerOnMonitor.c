/*
 * XREFs of PowerOnMonitor @ 0x1C00636E0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00608E8 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     SqmPowerState @ 0x1C00611A0 (SqmPowerState.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00630F0 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00633E8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C00639E0 (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C0063A00 (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0063D68 (EtwTracPowerOnMonitoreBegin.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0063DF4 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00643C0 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8880 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00C8900 (DrvSetMonitorPowerState.c)
 *     DrvChangeD3RequestsState @ 0x1C00CBF14 (DrvChangeD3RequestsState.c)
 *     DCompositionForceRender @ 0x1C00CBF84 (DCompositionForceRender.c)
 *     IsSetPointerSupported @ 0x1C00CC62C (IsSetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // edi
  int v8; // ebx
  int v9; // r15d
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15[4]; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

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
        if ( !gPowerTransitionsState && !qword_1C024D19C )
        {
          v16 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v16, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v11 = *((_QWORD *)gptiCurrent + 56);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 8);
            if ( v12 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v12 + 64LL) & 1) != 0 )
                DCompositionForceRender(1LL, 0LL, 0LL, 0LL);
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 && qword_1C02524D8 )
          qword_1C02524D8(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog(gpRequestWorkerWatchdog, 80LL);
        DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 1LL, 0LL, a2);
        DisarmPowerWatchdog(gpRequestWorkerWatchdog, 80LL);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( qword_1C02524F0 )
          v13 = qword_1C02524F0();
        else
          v13 = -1073741637;
        if ( v13 >= 0 && qword_1C02524F8 )
          qword_1C02524F8();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 && qword_1C02524D8 )
          qword_1C02524D8(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v14) = 1;
        DrvChangeD3RequestsState(v14);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C024D140 == 2 )
      v8 = 1;
    if ( v8 )
      UpdateDisplayState(1, a1, v6);
    if ( v6 && grpdeskRitInput )
    {
      if ( qword_1C02524E0 )
        v10 = qword_1C02524E0();
      if ( v10 >= 0 && qword_1C02524E8 )
        qword_1C02524E8();
    }
    if ( v9 )
    {
      v15[0] = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, v15, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
