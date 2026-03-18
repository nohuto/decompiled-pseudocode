/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D3030 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003277C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00328D0 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0032AA8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C0032E34 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C0032EC8 (--0-$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0032F04 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C003366C (GetNonChildAncestor.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00336A4 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034844 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     IsVisible @ 0x1C0069C04 (IsVisible.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     SetForegroundPriority @ 0x1C02240B0 (SetForegroundPriority.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  int v5; // r12d
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  struct tagWND *v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 i; // r9
  int v20; // ebx
  int v21; // ecx
  char v22; // r12
  unsigned int v23; // r14d
  __int64 v24; // rcx
  struct tagWND *j; // rdx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int ThreadId; // [rsp+48h] [rbp-B8h]
  unsigned int v43; // [rsp+4Ch] [rbp-B4h]
  __int64 v44[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int128 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+88h] [rbp-78h]
  __int128 v49; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-60h]
  _QWORD v51[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v52[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v53[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v54; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-10h]
  _QWORD v56[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v57; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v58[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v59[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v60[80]; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v61; // [rsp+1A0h] [rbp+A0h]
  int v63; // [rsp+1B0h] [rbp+B0h]
  int v64; // [rsp+1B8h] [rbp+B8h]

  v3 = *(_QWORD *)a1;
  v48 = 0LL;
  v50 = 0LL;
  v46 = 0LL;
  v61 = a3 & 1;
  v47 = 0LL;
  v64 = a3 & 0x80;
  v5 = a3 & 2;
  v63 = a3 & 4;
  v49 = 0LL;
  v45 = 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow(a1) )
    return 0;
  v7 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v7 + 19) < 0 )
    return 0;
  v8 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != v8 )
    return 0;
  v9 = *(struct tagWND **)(v8 + 120);
  if ( a1 == v9 || (*(_BYTE *)(v7 + 18) & 0x10) != 0 )
  {
    *(_DWORD *)(v8 + 388) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
    {
      if ( !v3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
    }
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) == (_QWORD)a1;
  }
  v10 = *(_QWORD *)(gptiCurrent + 456LL);
  v44[0] = v6;
  v44[1] = v3;
  if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(*(_QWORD *)v10 + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v3, (__int64)v44, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x8000u;
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 && *(char *)(*(_QWORD *)(v12 + 40) + 19LL) < 0 )
  {
    CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(v58);
    v39 = *(_QWORD *)(gptiCurrent + 424LL);
    v13 = v51;
    v51[1] = 0LL;
    v51[0] = v39 + 120;
  }
  else
  {
    v52[1] = *(_QWORD *)(v11 + 120);
    v52[0] = v11 + 128;
    v13 = v52;
  }
  HMAssignmentLock(v13);
  v14 = *(_QWORD *)(gptiCurrent + 424LL);
  v15 = *(_QWORD *)(v14 + 120);
  if ( v15 )
  {
    if ( v14 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 424LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v47 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v47;
    *((_QWORD *)&v47 + 1) = v15;
    HMLockObject(v15);
    v35 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x20) << 16;
    if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v15) )
    {
      ThreadUnlock1();
      return 0;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v3, &v45, (__int64)lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxSendMessage(v15, 6LL, v35, v3);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    v36 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v36 + 16) = v45;
    ThreadUnlock1();
    v14 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  v16 = *(struct tagWND **)(v14 + 120);
  if ( *(struct tagWND **)(v14 + 128) == v16
    && v9 == v16
    && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == v14 )
  {
    if ( !v16 )
      *(_DWORD *)(v14 + 388) &= ~0x800u;
    CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(v59);
    v17 = *(_QWORD *)(gptiCurrent + 424LL) + 120LL;
    v53[1] = a1;
    v53[0] = v17;
    HMAssignmentLock(v53);
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v3, &v45, (__int64)lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxWindowEvent(3u, 1u);
    anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 424LL), 6LL, 5LL);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v18 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
    *(_QWORD *)&v49 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v49;
    *((_QWORD *)&v49 + 1) = v18;
    if ( v18 )
      HMLockObject(v18);
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
    if ( !v5 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow(a1) + 112);
            i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x10) == 0;
            i = *(_QWORD *)(i + 88) )
      {
        ;
      }
      if ( (a1 != (struct tagWND *)i || v18 && !(unsigned int)IsVisible(v18))
        && (!v63 || gpqForeground == *(_QWORD *)(gptiCurrent + 424LL)) )
      {
        v20 = 19;
        if ( a1 != (struct tagWND *)i )
          v20 = 3;
        xxxSetWindowPos(a1, 0, 0, v20);
        if ( (v20 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v21 = *(_DWORD *)(gptiCurrent + 480LL);
    v22 = 0;
    if ( (v21 & 0x200) == 0 && (!v18 || v18[2] != *((_QWORD *)a1 + 2)) )
    {
      v23 = 0;
      if ( v18 )
      {
        v38 = v18[2];
        v41 = v38;
        v54 = 0LL;
        v55 = 0LL;
        *(_DWORD *)(v38 + 480) |= 0x200u;
        ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
        v43 = 0;
        LockW32Thread(v38, &v54);
        xxxSendActivateAppMessage((const struct tagAAS *)&v41);
        *(_DWORD *)(v38 + 480) &= ~0x200u;
        PopAndFreeW32ThreadLock(&v54);
        v21 = *(_DWORD *)(gptiCurrent + 480LL);
        v23 = v43;
      }
      *(_DWORD *)(gptiCurrent + 480LL) = v21 | 0x200;
      v41 = *((_QWORD *)a1 + 2);
      v22 = 1;
      ThreadId = a2;
      v43 = v23 & 0xFFFFFFFC | 1;
      xxxSendActivateAppMessage((const struct tagAAS *)&v41);
    }
    v24 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v24 + 16) & 0x40) != 0 )
    {
      SetOrClrWF(1LL, a1, 257LL, 1LL);
      v24 = *((_QWORD *)a1 + 5);
    }
    if ( *(char *)(v24 + 19) >= 0 )
    {
      for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
        ;
      v57 = *(_OWORD *)LockPointer(v60, (char *)j + 200, a1);
      HMAssignmentLock(&v57);
    }
    v26 = 0LL;
    if ( v18 )
      v26 = *v18;
    anonymous_namespace_::xxxSendNCActivateMessage(a1);
    v27 = v61 + 1LL;
    v28 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
    if ( v28 )
      v27 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v28 + 40) + 31LL) & 0x20) << 16;
    xxxSendMessage(a1, 6LL, v27, v26);
    xxxUpdateTray(a1);
    ThreadUnlock1();
    SetOrClrWF(0LL, a1, 257LL, 1LL);
    if ( v64 )
    {
      v29 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( (*(_DWORD *)(v29 + 388) & 0x800) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v29 + 112));
        if ( v31 != NonChildAncestor )
        {
          v37 = 0LL;
          if ( v31 && (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL) & 0x20) == 0 )
            v37 = v31;
          v56[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v56;
          v56[2] = 0LL;
          v56[1] = v31;
          if ( v31 )
            HMLockObject(v31);
          anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v37);
          ThreadUnlock1();
        }
      }
    }
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) |= 0x40u;
    if ( gppiScreenSaver )
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) != gppiScreenSaver )
      {
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          8LL);
        *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
        v40 = *(_QWORD *)(gppiScreenSaver + 328LL);
        if ( v40 )
          SetForegroundPriority(v40, 1LL);
      }
    }
    else if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput && !gbBlockSendInputResets )
    {
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        8LL);
    }
    if ( v22 )
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x200u;
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    v32 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v32 + 16) = v45;
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) == (_QWORD)a1;
  }
  return 0;
}
