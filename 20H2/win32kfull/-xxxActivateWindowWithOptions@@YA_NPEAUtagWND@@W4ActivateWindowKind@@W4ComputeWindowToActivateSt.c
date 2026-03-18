/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0012724 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C002B484 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002B5A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1420 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223854 (xxxHandleNCMouseGuys.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C001432C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002B96C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C002BBDC (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_SF_s @ 0x1C003AD34 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall xxxActivateWindowWithOptions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const struct tagWND *v4; // r13
  bool v5; // r14
  int v6; // ebp
  int v7; // r15d
  char v8; // r12
  int v9; // ebx
  const struct tagWND *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // bl
  int v15; // ebx
  unsigned int v16; // r15d
  const char *v17; // rax
  int v18; // eax
  int v19; // r9d
  int v20; // r9d
  bool v21; // [rsp+30h] [rbp-68h]
  char v22; // [rsp+31h] [rbp-67h]
  bool v23; // [rsp+32h] [rbp-66h]
  __int128 v24; // [rsp+38h] [rbp-60h] BYREF
  __int128 v25; // [rsp+48h] [rbp-50h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h]
  bool v27; // [rsp+A0h] [rbp+8h]

  v4 = (const struct tagWND *)a1;
  v5 = 0;
  v25 = 0LL;
  v6 = a4;
  v23 = 0;
  v26 = 0LL;
  v22 = 0;
  v27 = 0;
  v7 = 2;
  v21 = 0;
  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0;
  if ( (_BYTE)a1 == 64 )
    return 0;
  v8 = 1;
  if ( (_DWORD)a2 )
  {
    v24 = 0LL;
    if ( !(unsigned __int8)anonymous_namespace_::ComputeWindowToActivate(v4, a2, a3, &v24) )
    {
LABEL_45:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(a1, a2, 2, 45, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
      return 0;
    }
    v10 = (const struct tagWND *)v24;
    if ( !(_QWORD)v24 || (v9 = DWORD2(v24)) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      v9 = DWORD2(v24);
      v10 = (const struct tagWND *)v24;
    }
    v5 = v4 != v10;
    v23 = v4 != v10;
  }
  else
  {
    if ( (_DWORD)a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v9 = 1;
    v10 = v4;
    v21 = v6 == 1;
  }
  if ( !v10 )
    goto LABEL_45;
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v5 )
  {
    *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v25;
    *((_QWORD *)&v25 + 1) = v10;
    HMLockObject(v10);
  }
  v11 = *((_QWORD *)v10 + 2);
  if ( *(_QWORD *)(v11 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    v8 = anonymous_namespace_::FAllowForegroundActivate(v10);
    if ( v8 )
      v27 = *(_DWORD *)(gptiCurrent + 900LL) == 0;
    else
      v22 = anonymous_namespace_::xxxLocalActivateWindow(v10);
  }
  else
  {
    if ( v11 == gptiCurrent )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2, a3, a4);
    if ( v9 != 5 )
    {
      if ( v9 == 6 )
      {
        v7 = 31;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v20 = 46;
      }
      else
      {
        if ( v9 != 7 )
        {
          v12 = gpqForeground;
          if ( gpqForeground != *(_QWORD *)(gptiCurrent + 432LL) && gpqForeground )
            goto LABEL_15;
          if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 900LL) || (v27 = 0, v21) )
            v27 = 1;
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
        v20 = 48;
      }
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(v9 - 6, a2, 2, v20, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
LABEL_34:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(v12, a2, 2, 49, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
LABEL_36:
      v16 = v7 | 4;
      if ( *(_QWORD *)(*((_QWORD *)v10 + 2) + 432LL) == gpqForeground
        && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(gpqForeground, a2, a3, a4);
      }
      v13 = xxxSetForegroundWindowWithOptions(v10, v16, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = "Success";
        if ( !v13 )
          v17 = "Failure";
        WPP_RECORDER_SF_s(
          (unsigned int)"Failure",
          a2,
          2,
          50,
          (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
          (__int64)v17);
      }
      v18 = *(_DWORD *)(gptiCurrent + 488LL);
      if ( v27 )
      {
        *(_DWORD *)(gptiCurrent + 488LL) = v18 | 0x20;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v19 = 51;
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 488LL) = v18 & 0xFFFFFFDF;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v19 = 52;
      }
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(v12, a2, 2, v19, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, gptiCurrent);
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
  v13 = v22;
LABEL_16:
  if ( v23 )
    ThreadUnlock1(v12, a2, a3);
  return v13;
}
