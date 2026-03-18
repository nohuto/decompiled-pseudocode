/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     NtUserSetFocus @ 0x1C00C1880 (NtUserSetFocus.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00C9A9C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C00CEE10 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0240B70 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002B96C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C004C7A4 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00C1CB4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0128F9C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C012B64C (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  char v7; // cl
  __int64 v8; // rax
  struct tagWND *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v18; // r8
  unsigned __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *i; // rsi
  const struct tagWND *v27; // rcx
  __int64 v28; // rcx
  __int128 v29; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-28h]
  __int64 v31; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
    {
      v21 = 0LL;
      v22 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      if ( v22 )
        v21 = *v22;
      if ( (unsigned int)xxxCallHook(9, 0LL, v21, 5) )
        return 0LL;
    }
    v19 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    if ( v19 )
      v3 = *v19;
    anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
    return (struct tagWND *)HMValidateHandleNoSecure(v3, 1);
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v5 + 432) != *(_QWORD *)(gptiCurrent + 432LL) && !CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
  {
    v31 = 0LL;
    if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v31) )
    {
      for ( i = *(_QWORD **)(v31 + 32); i; i = (_QWORD *)*i )
      {
        v27 = (const struct tagWND *)i[1];
        if ( v27 && (unsigned int)CoreWindowProp::IsComponent(v27) && gptiCurrent == *(_QWORD *)(i[1] + 16LL) )
          goto LABEL_3;
      }
    }
    v20 = 5LL;
LABEL_41:
    UserSetLastError(v20);
    return 0LL;
  }
LABEL_3:
  v6 = a1;
  do
  {
    v7 = *(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL);
    if ( (v7 & 0x20) != 0 || (v7 & 8) != 0 )
    {
      v20 = 87LL;
      goto LABEL_41;
    }
    LOBYTE(v5) = v7 & 0xC0;
    if ( (_BYTE)v5 != 64 )
      break;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
  }
  while ( v6 );
  *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v29;
  *((_QWORD *)&v29 + 1) = v6;
  if ( v6 )
    HMLockObject(v6);
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  v9 = *(struct tagWND **)(v8 + 112);
  if ( a1 == v9 )
  {
LABEL_16:
    v13 = *(_QWORD *)(v8 + 112);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 16);
    else
      v14 = gptiCurrent;
    v15 = *(_QWORD *)(v14 + 440);
    if ( v15 )
    {
      v15 = *(_QWORD *)(v15 + 40);
      if ( gLCIDSentToShell != v15 )
      {
        v16 = *(__int64 **)(gptiCurrent + 464LL);
        a2 = *v16;
        if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*v16 + 16)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v15;
          xxxCallHook(8, 0LL, v15, 10);
        }
      }
    }
    if ( v9 )
      v3 = *(_QWORD *)v9;
    ThreadUnlock1(v5, a2, v15);
    return (struct tagWND *)HMValidateHandleNoSecure(v3, 1);
  }
  v10 = *(_QWORD *)(gptiCurrent + 464LL);
  v11 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*(_QWORD *)v10 + 16LL));
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v10 + 16LL)) & 0x40) == 0 )
    goto LABEL_12;
  v18 = 0LL;
  if ( v9 )
    v18 = *(_QWORD *)v9;
  if ( !(unsigned int)xxxCallHook(9, *(_QWORD *)a1, v18, 5) )
  {
LABEL_12:
    v12 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v6 == *(struct tagWND **)(v12 + 120) )
    {
LABEL_13:
      v9 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      ThreadUnlock1(v12, v11, a3);
      *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v29;
      *((_QWORD *)&v29 + 1) = v9;
      if ( v9 )
        HMLockObject(v9);
      anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
      v8 = *(_QWORD *)(gptiCurrent + 432LL);
      goto LABEL_16;
    }
    if ( v12 == gpqForeground )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_(v12, v11, 2, 44, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
    }
    else if ( anonymous_namespace_::FAllowForegroundActivate((__int64)v6) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x100u;
      if ( !(unsigned __int8)xxxForceForegroundWindowNoRestoreFocus(v6, 8LL) )
        goto LABEL_51;
    }
    if ( v6 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)
      || anonymous_namespace_::xxxLocalActivateWindow(v6, 0, 0) )
    {
      goto LABEL_13;
    }
LABEL_51:
    v28 = 87LL;
    goto LABEL_52;
  }
  v28 = 5LL;
LABEL_52:
  UserSetLastError(v28);
  ThreadUnlock1(v24, v23, v25);
  return 0LL;
}
