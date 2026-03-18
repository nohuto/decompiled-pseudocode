/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00225CC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01087D4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C011ABE4 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2090 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02246E4 (xxxHandleNCMouseGuys.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_s @ 0x1C002A128 (WPP_RECORDER_SF_s.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00F5850 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0118568 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall xxxActivateWindowWithOptions(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  const struct tagWND *v4; // r13
  bool v5; // r14
  int v7; // r15d
  char v8; // r12
  int v9; // ebx
  const struct tagWND *v10; // rsi
  __int64 v11; // rcx
  int v12; // ecx
  char v13; // bl
  int v15; // ebx
  unsigned int v16; // r15d
  int v17; // edx
  int v18; // ecx
  const char *v19; // rax
  int v20; // eax
  int v21; // r9d
  int v22; // r9d
  bool v23; // [rsp+30h] [rbp-68h]
  char v24; // [rsp+31h] [rbp-67h]
  bool v25; // [rsp+32h] [rbp-66h]
  __int128 v26; // [rsp+38h] [rbp-60h] BYREF
  __int128 v27; // [rsp+48h] [rbp-50h] BYREF
  __int64 v28; // [rsp+58h] [rbp-40h]
  bool v29; // [rsp+A0h] [rbp+8h]

  v4 = (const struct tagWND *)a1;
  v5 = 0;
  v27 = 0LL;
  v25 = 0;
  v28 = 0LL;
  v24 = 0;
  v29 = 0;
  v7 = 2;
  v23 = 0;
  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0;
  if ( (_BYTE)a1 == 64 )
    return 0;
  v8 = 1;
  if ( (_DWORD)a2 )
  {
    v26 = 0LL;
    if ( !(unsigned __int8)anonymous_namespace_::ComputeWindowToActivate(v4, a2, a3, &v26) )
    {
LABEL_45:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(a1, a2, 2, 45, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
      return 0;
    }
    v10 = (const struct tagWND *)v26;
    if ( !(_QWORD)v26 || (v9 = DWORD2(v26)) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v9 = DWORD2(v26);
      v10 = (const struct tagWND *)v26;
    }
    v5 = v4 != v10;
    v25 = v4 != v10;
  }
  else
  {
    if ( (_DWORD)a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v9 = 1;
    v10 = v4;
    v23 = a4 == 1;
  }
  if ( !v10 )
    goto LABEL_45;
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( v5 )
  {
    *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v27;
    *((_QWORD *)&v27 + 1) = v10;
    HMLockObject(v10);
  }
  v11 = *((_QWORD *)v10 + 2);
  if ( *(_QWORD *)(v11 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
  {
    v8 = anonymous_namespace_::FAllowForegroundActivate(v10);
    if ( v8 )
      v29 = *(_DWORD *)(gptiCurrent + 892LL) == 0;
    else
      v24 = anonymous_namespace_::xxxLocalActivateWindow(v10);
  }
  else
  {
    if ( v11 == gptiCurrent )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( v9 != 5 )
    {
      if ( v9 == 6 )
      {
        v7 = 31;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v22 = 46;
      }
      else
      {
        if ( v9 != 7 )
        {
          v12 = gpqForeground;
          if ( gpqForeground != *(_QWORD *)(gptiCurrent + 424LL) && gpqForeground )
            goto LABEL_15;
          if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 892LL) || (v29 = 0, v23) )
            v29 = 1;
          v15 = v9 - 3;
          if ( v15 )
          {
            if ( v15 == 1 )
              v7 = 3;
          }
          else
          {
            v7 = 3;
            if ( (unsigned int)CoreWindowProp::IsComponent(v4) && !CoreWindowProp::GetHost(v4) )
              v7 = 11;
          }
          goto LABEL_34;
        }
        v7 = 31;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v22 = 48;
      }
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(v9 - 6, a2, 2, v22, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
LABEL_34:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(v12, a2, 2, 49, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
LABEL_36:
      v16 = v7 | 4;
      if ( *(_QWORD *)(*((_QWORD *)v10 + 2) + 424LL) == gpqForeground
        && gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v13 = xxxSetForegroundWindowWithOptions(v10, v16, 0LL, v23);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = "Success";
        if ( !v13 )
          v19 = "Failure";
        WPP_RECORDER_SF_s(
          (unsigned int)"Failure",
          v17,
          2,
          50,
          (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
          (__int64)v19);
      }
      v20 = *(_DWORD *)(gptiCurrent + 480LL);
      if ( v29 )
      {
        *(_DWORD *)(gptiCurrent + 480LL) = v20 | 0x20;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v21 = 51;
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 480LL) = v20 & 0xFFFFFFDF;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v21 = 52;
      }
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_q(v18, v17, 2, v21, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, gptiCurrent);
      goto LABEL_16;
    }
    v7 = 31;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_36;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(v9 - 5, a2, 2, 47, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
  }
  if ( v8 )
    goto LABEL_34;
LABEL_15:
  v13 = v24;
LABEL_16:
  if ( v25 )
    ThreadUnlock1();
  return v13;
}
