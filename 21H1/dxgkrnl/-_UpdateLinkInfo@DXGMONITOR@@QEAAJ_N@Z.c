/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0168140
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0167C8C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016CC0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorSetAppOverride @ 0x1C02EFF38 (MonitorSetAppOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C021BF28 (-DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C02D456C (DpiGetIntegratedMonitorLinkInfo.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(DXGMONITOR *this, __int64 a2)
{
  __int64 v2; // r8
  DXGK_MONITORLINKINFO_USAGEHINTS v3; // ebx
  char v5; // r15
  ADAPTER_DISPLAY *v6; // r14
  __int64 Value; // rcx
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  int updated; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // eax
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  DXGK_MONITORLINKINFO_USAGEHINTS v23; // eax
  char v24; // al
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _DXGKARG_UPDATEMONITORLINKINFO v27; // [rsp+20h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3.Value = (unsigned __int8)a2;
  v5 = 1;
  v27 = 0LL;
  if ( !v2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v2 = *((_QWORD *)this + 4);
  }
  v6 = *(ADAPTER_DISPLAY **)(v2 + 8);
  if ( !v6 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
    v2 = *((_QWORD *)this + 4);
  }
  *((_DWORD *)this + 10) &= ~0x400u;
  Value = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 216LL) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(Value + 40) + 28LL) < 0x7000u )
  {
    LODWORD(v8) = -1073741637;
    goto LABEL_7;
  }
  v27.MonitorLinkInfo.Capabilities.Value = 0;
  v27.MonitorLinkInfo.DitheringSupport.Value = 0;
  v27.VideoPresentTargetId = *((_DWORD *)this + 11);
  v27.MonitorLinkInfo.UsageHints = v3;
  LODWORD(v8) = DpiGetIntegratedMonitorLinkInfo(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 216LL),
                  v27.VideoPresentTargetId,
                  &v27.MonitorLinkInfo);
  if ( (int)v8 < 0 )
  {
    v5 = 0;
    updated = ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo(v6, &v27);
    v8 = updated;
    if ( updated < 0 )
    {
      if ( updated != -1073741637 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2);
        v13[3] = this;
        v13[4] = *((unsigned int *)this + 11);
        v13[5] = *((_QWORD *)v6 + 2);
        v13[6] = v8;
        WdLogEvent5_WdError(v13);
      }
      goto LABEL_43;
    }
  }
  v14 = *((_QWORD *)v6 + 2);
  v15 = (*(_DWORD *)(v14 + 348) & 0x200) != 0 ? 1663 : 127;
  if ( *(int *)(v14 + 2572) >= 2600 )
  {
    if ( *(_BYTE *)&v27.MonitorLinkInfo.Capabilities.0 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v14, a2);
      *(_QWORD *)(v16 + 24) = *((unsigned int *)this + 11);
      *(_QWORD *)(v16 + 32) = *((_QWORD *)v6 + 2);
      WdLogEvent5_WdError(v16);
    }
    v15 |= 0x800u;
  }
  Value = v27.MonitorLinkInfo.Capabilities.Value;
  LODWORD(Value) = v27.MonitorLinkInfo.Capabilities.Value & 0xFFFFFF7F;
  v27.MonitorLinkInfo.Capabilities.Value &= ~0x80u;
  v17 = *((_QWORD *)v6 + 2);
  a2 = *(unsigned int *)(v17 + 2572);
  if ( (int)a2 < 2400 )
  {
    if ( (~v15 & (unsigned int)Value) != 0 )
    {
      v21 = WdLogNewEntry5_WdError(Value, a2);
      *(_QWORD *)(v21 + 24) = *((unsigned int *)this + 11);
      *(_QWORD *)(v21 + 32) = *((_QWORD *)v6 + 2);
      WdLogEvent5_WdError(v21);
      Value = v15 & v27.MonitorLinkInfo.Capabilities.Value;
      v27.MonitorLinkInfo.Capabilities.Value &= v15;
    }
    v22 = *((_QWORD *)v6 + 2);
    if ( *(_DWORD *)(v22 + 2572) == 2300 && *(_DWORD *)(v22 + 324) == 1297040209 && v5 && byte_1C00AFA19 )
    {
      LODWORD(Value) = Value | 0x100;
      v27.MonitorLinkInfo.Capabilities.Value = Value;
    }
    goto LABEL_39;
  }
  v18 = 1792;
  if ( (int)a2 < 2500 )
    v18 = 768;
  if ( (~(v15 | v18) & (unsigned int)Value) == 0 && ((int)a2 > 2400 || v5 || (Value & 0x100) == 0) )
  {
    if ( (Value & 0x200) != 0 || (Value & 0x400) != 0 )
    {
      v20 = *(_DWORD *)(v17 + 348);
      if ( (v20 & 0x200) == 0 && (v20 & 8) == 0 )
      {
        LODWORD(v8) = -1073741823;
        v19 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2);
        v19[3] = this;
        v19[4] = *((unsigned int *)this + 11);
        v19[5] = *((_QWORD *)v6 + 2);
        goto LABEL_26;
      }
    }
LABEL_39:
    v23.0 = (struct _DXGK_MONITORLINKINFO_USAGEHINTS::$93BFB232C2354556C10F40D8A24AA81F)v27.MonitorLinkInfo.UsageHints;
    *((_DWORD *)this + 10) |= 0x400u;
    *((DXGK_MONITORLINKINFO_USAGEHINTS *)this + 117) = v23;
    *((_DWORD *)this + 118) = Value;
    if ( *(int *)(*((_QWORD *)v6 + 2) + 2304LL) >= 9216 )
    {
      v24 = (char)v27.MonitorLinkInfo.DitheringSupport.0;
      *((_DWORD *)this + 119) = v27.MonitorLinkInfo.DitheringSupport.Value;
      if ( (v24 & 3) == 0 )
        goto LABEL_43;
      v25 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2);
      v25[3] = *((unsigned int *)this + 119);
      v25[4] = this;
      v25[5] = *((unsigned int *)this + 11);
      v25[6] = *((_QWORD *)v6 + 2);
      WdLogEvent5_WdError(v25);
    }
    *((_DWORD *)this + 119) = 0;
LABEL_43:
    if ( (int)v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_7;
  }
  LODWORD(v8) = -1073741823;
  v19 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2);
  v19[3] = *((unsigned int *)this + 11);
  v19[4] = *((_QWORD *)v6 + 2);
  v19[5] = -1073741823LL;
LABEL_26:
  WdLogEvent5_WdError(v19);
LABEL_7:
  *(_QWORD *)((char *)this + 468) = 0LL;
  *((_DWORD *)this + 119) = 0;
  if ( *(int *)(*((_QWORD *)v6 + 2) + 2572LL) >= 2400 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2);
    v26[3] = *((_QWORD *)v6 + 2);
    v26[4] = *((unsigned int *)this + 11);
    v26[5] = (int)v8;
    WdLogEvent5_WdError(v26);
  }
  else
  {
    LODWORD(v8) = 0;
  }
  return (unsigned int)v8;
}
