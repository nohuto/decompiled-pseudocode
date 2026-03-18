/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0021EFC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     NtUserSetFocus @ 0x1C0034410 (NtUserSetFocus.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C008A640 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0241E10 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C0022F60 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034844 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0118510 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C01270FC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  struct tagWND *v7; // rsi
  char v8; // cl
  __int64 v9; // rax
  struct tagWND *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v20; // r8
  __int64 *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *i; // rsi
  const struct tagWND *v29; // rcx
  __int64 v30; // rcx
  __int128 v31; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+40h] [rbp-28h]
  __int64 v33; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0 )
    {
      v23 = 0LL;
      v24 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
      if ( v24 )
        v23 = *v24;
      if ( (unsigned int)xxxCallHook(9, 0LL, v23, 5) )
        return 0LL;
    }
    v21 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
    if ( v21 )
      v4 = *v21;
    anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
LABEL_25:
    LOBYTE(v18) = 1;
    return (struct tagWND *)HMValidateHandleNoSecure(v4, v18);
  }
  v6 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v6 + 424) != *(_QWORD *)(gptiCurrent + 424LL) && !CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
  {
    v33 = 0LL;
    if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v33) )
    {
      for ( i = *(_QWORD **)(v33 + 32); i; i = (_QWORD *)*i )
      {
        v29 = (const struct tagWND *)i[1];
        if ( v29 && (unsigned int)CoreWindowProp::IsComponent(v29) && gptiCurrent == *(_QWORD *)(i[1] + 16LL) )
          goto LABEL_3;
      }
    }
    v22 = 5LL;
LABEL_41:
    UserSetLastError(v22);
    return 0LL;
  }
LABEL_3:
  v7 = a1;
  do
  {
    v8 = *(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL);
    if ( (v8 & 0x20) != 0 || (v8 & 8) != 0 )
    {
      v22 = 87LL;
      goto LABEL_41;
    }
    LOBYTE(v6) = v8 & 0xC0;
    if ( (_BYTE)v6 != 64 )
      break;
    v7 = (struct tagWND *)*((_QWORD *)v7 + 13);
  }
  while ( v7 );
  *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v31;
  *((_QWORD *)&v31 + 1) = v7;
  if ( v7 )
    HMLockObject(v7);
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  v10 = *(struct tagWND **)(v9 + 112);
  if ( a1 == v10 )
  {
LABEL_16:
    v14 = *(_QWORD *)(v9 + 112);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 16);
    else
      v15 = gptiCurrent;
    v16 = *(_QWORD *)(v15 + 432);
    if ( v16 )
    {
      v16 = *(_QWORD *)(v16 + 40);
      if ( gLCIDSentToShell != v16 )
      {
        v17 = *(__int64 **)(gptiCurrent + 456LL);
        a2 = *v17;
        if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*v17 + 16)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v16;
          xxxCallHook(8, 0LL, v16, 10);
        }
      }
    }
    if ( v10 )
      v4 = *(_QWORD *)v10;
    ThreadUnlock1(v6, a2, v16);
    goto LABEL_25;
  }
  v11 = *(_QWORD *)(gptiCurrent + 456LL);
  v12 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(*(_QWORD *)v11 + 16LL));
  if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*(_QWORD *)v11 + 16LL)) & 0x40) == 0 )
    goto LABEL_12;
  v20 = 0LL;
  if ( v10 )
    v20 = *(_QWORD *)v10;
  if ( !(unsigned int)xxxCallHook(9, *(_QWORD *)a1, v20, 5) )
  {
LABEL_12:
    v13 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( v7 == *(struct tagWND **)(v13 + 120) )
    {
LABEL_13:
      v10 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
      ThreadUnlock1(v13, v12, a3);
      *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v31;
      *((_QWORD *)&v31 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
      v9 = *(_QWORD *)(gptiCurrent + 424LL);
      goto LABEL_16;
    }
    if ( v13 == gpqForeground )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_(v13, v12, 2, 44, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      }
    }
    else if ( anonymous_namespace_::FAllowForegroundActivate((__int64)v7, v12, a3, a4) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 31LL) & 0x10) == 0 )
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) |= 0x100u;
      if ( !(unsigned __int8)xxxForceForegroundWindowNoRestoreFocus(v7, 8LL) )
        goto LABEL_51;
    }
    if ( v7 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)
      || anonymous_namespace_::xxxLocalActivateWindow(v7, 0, 0) )
    {
      goto LABEL_13;
    }
LABEL_51:
    v30 = 87LL;
    goto LABEL_52;
  }
  v30 = 5LL;
LABEL_52:
  UserSetLastError(v30);
  ThreadUnlock1(v26, v25, v27);
  return 0LL;
}
