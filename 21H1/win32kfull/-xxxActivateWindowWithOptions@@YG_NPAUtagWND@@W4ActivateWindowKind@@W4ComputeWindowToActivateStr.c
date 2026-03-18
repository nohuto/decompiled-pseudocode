/*
 * XREFs of ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8
 * Callers:
 *     ?xxxActivateWindow@@YG_NPAUtagWND@@@Z @ 0x1A2B0 (-xxxActivateWindow@@YG_NPAUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 * Callees:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _WPP_RECORDER_SF_s@24 @ 0x195D4 (_WPP_RECORDER_SF_s@24.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0xA948A (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

char __fastcall xxxActivateWindowWithOptions(int *a1, int a2, int a3, int a4)
{
  bool v5; // cl
  int v6; // edi
  int v7; // ecx
  char v8; // bl
  char v10; // al
  int v11; // edi
  int v12; // edi
  int v13; // edi
  const char *v14; // eax
  int v15; // eax
  int v16; // [esp-4h] [ebp-34h]
  const struct tagWND *v17; // [esp+0h] [ebp-30h]
  const struct tagWND *v18; // [esp+0h] [ebp-30h]
  bool v19; // [esp+10h] [ebp-20h]
  bool v20; // [esp+11h] [ebp-1Fh]
  char v21; // [esp+12h] [ebp-1Eh]
  bool v22; // [esp+13h] [ebp-1Dh]
  int *v23; // [esp+14h] [ebp-1Ch]
  int *v24; // [esp+1Ch] [ebp-14h] BYREF
  int v25; // [esp+20h] [ebp-10h]
  int v26; // [esp+24h] [ebp-Ch] BYREF
  int *v27; // [esp+28h] [ebp-8h]
  int v28; // [esp+2Ch] [ebp-4h]

  v26 = 0;
  v5 = 0;
  v23 = a1;
  v20 = 0;
  v27 = 0;
  v28 = 0;
  v22 = 0;
  v19 = 0;
  v21 = 0;
  if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) == 0x40 )
    return 0;
  if ( a2 )
  {
    v24 = 0;
    v25 = 0;
    if ( !(unsigned __int8)anonymous_namespace_::ComputeWindowToActivate(a1, a3, &v24) )
    {
LABEL_48:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(2, 45, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      return 0;
    }
    a1 = v24;
    if ( !v24 || (v6 = v25) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v6 = v25;
      a1 = v24;
    }
    v5 = v23 != a1;
    v20 = v23 != a1;
  }
  else
  {
    if ( a3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v5 = 0;
    }
    v6 = 1;
    v21 = a4 == 1;
  }
  if ( !a1 )
    goto LABEL_48;
  if ( !v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v5 = v20;
  }
  if ( v5 )
  {
    v26 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v26;
    v27 = a1;
    HMLockObject(a1);
  }
  v7 = a1[2];
  if ( *(_DWORD *)(v7 + 236) == *(_DWORD *)(_gptiCurrent + 236) )
  {
    v10 = anonymous_namespace_::FAllowForegroundActivate(a1);
    v11 = 2;
    if ( v10 )
    {
      v19 = *(_DWORD *)(_gptiCurrent + 508) == 0;
    }
    else
    {
      v22 = anonymous_namespace_::xxxLocalActivateWindow(a1, 0, -127 - (a4 != 0));
      v10 = 0;
    }
  }
  else
  {
    if ( v7 == _gptiCurrent )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( v6 != 5 )
    {
      if ( v6 == 6 )
      {
        v11 = 31;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(2, 46, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
          goto LABEL_38;
        }
      }
      else
      {
        if ( v6 != 7 )
        {
          if ( _gpqForeground != *(_DWORD *)(_gptiCurrent + 236) && _gpqForeground )
            goto LABEL_19;
          if ( (*(_BYTE *)(_gptiCurrent + 264) & 0x20) != 0 || *(_DWORD *)(_gptiCurrent + 508) || (v19 = 0, v21) )
            v19 = 1;
          v12 = v6 - 3;
          if ( v12 )
          {
            if ( v12 == 1 )
            {
              v16 = 3;
LABEL_36:
              v11 = v16;
              goto LABEL_38;
            }
            v11 = 2;
          }
          else
          {
            v11 = 3;
            if ( CoreWindowProp::IsComponent(v17) && !CoreWindowProp::GetHost(v18) )
            {
              v16 = 11;
              goto LABEL_36;
            }
          }
LABEL_38:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(2, 49, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
          goto LABEL_40;
        }
        v11 = 31;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(2, 48, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
          goto LABEL_38;
        }
      }
LABEL_40:
      v13 = v11 | 4;
      if ( *(_DWORD *)(a1[2] + 236) == _gpqForeground && _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v8 = xxxSetForegroundWindowWithOptions((unsigned int *)a1, v13, 0, v21);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = "Success";
        if ( !v8 )
          v14 = "Failure";
        WPP_RECORDER_SF_s(2u, 50, (int)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v14);
      }
      v15 = *(_DWORD *)(_gptiCurrent + 264);
      if ( v19 )
      {
        *(_DWORD *)(_gptiCurrent + 264) = v15 | 0x20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(2, 51, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, _gptiCurrent);
      }
      else
      {
        *(_DWORD *)(_gptiCurrent + 264) = v15 & 0xFFFFFFDF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(2, 52, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, _gptiCurrent);
      }
      goto LABEL_20;
    }
    v11 = 31;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    WPP_RECORDER_SF_(2, 47, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    v10 = 1;
  }
  if ( v10 )
    goto LABEL_38;
LABEL_19:
  v8 = v22;
LABEL_20:
  if ( v20 )
    ThreadUnlock1();
  return v8;
}
