/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0116BF4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D2220 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     IsVisible @ 0x1C0041324 (IsVisible.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00BAF00 (LockW32Thread.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00BB764 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00BCA54 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00BCC2C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00BCFB8 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ??0?$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ @ 0x1C00BD04C (--0-$CLockDomainExclusive@VDLT_ACTIVE@@@@QEAA@XZ.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00BD1B0 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00C0738 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00C1CB4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     GetNonChildAncestor @ 0x1C00C5584 (GetNonChildAncestor.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     SetForegroundPriority @ 0x1C0223220 (SetForegroundPriority.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, unsigned int a2, char a3)
{
  struct _LARGE_STRING *v3; // rbx
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
  unsigned __int64 v15; // r14
  struct tagWND *v16; // rdx
  __int64 v17; // rax
  struct _LARGE_STRING **v18; // r15
  __int64 i; // r9
  int v20; // ebx
  int v21; // ecx
  char v22; // r12
  unsigned int v23; // r14d
  __int64 v24; // rcx
  struct tagWND *j; // rdx
  struct _LARGE_STRING *v26; // rbx
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int ThreadId; // [rsp+48h] [rbp-B8h]
  unsigned int v60; // [rsp+4Ch] [rbp-B4h]
  __int64 v61[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int128 v64; // [rsp+78h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int128 v66; // [rsp+90h] [rbp-70h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h]
  _QWORD v68[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v69[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v70[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v71; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-10h]
  _QWORD v73[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v74; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v75[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v76[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v77[80]; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v78; // [rsp+1A0h] [rbp+A0h]
  int v80; // [rsp+1B0h] [rbp+B0h]
  int v81; // [rsp+1B8h] [rbp+B8h]

  v3 = *(struct _LARGE_STRING **)a1;
  v65 = 0LL;
  v67 = 0LL;
  v63 = 0LL;
  v78 = a3 & 1;
  v64 = 0LL;
  v81 = a3 & 0x80;
  v5 = a3 & 2;
  v80 = a3 & 4;
  v66 = 0LL;
  v62 = 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0;
  v7 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v7 + 19) < 0 )
    return 0;
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v8 )
    return 0;
  v9 = *(struct tagWND **)(v8 + 120);
  if ( a1 == v9 || (*(_BYTE *)(v7 + 18) & 0x10) != 0 )
  {
    *(_DWORD *)(v8 + 388) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    {
      if ( xxxSendMessage((unsigned __int64)a1, 0x30Fu, 0LL, 0LL) )
      {
        if ( !v3 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v56, v57);
        xxxSendNotifyMessage(-1LL, 0x310u, (__int64)v3, 0LL, 1);
      }
    }
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == (_QWORD)a1;
  }
  v10 = *(_QWORD *)(gptiCurrent + 464LL);
  v61[0] = v6;
  v61[1] = (__int64)v3;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v10 + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, (unsigned __int64)v3, (__int64)v61, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x8000u;
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 && *(char *)(*(_QWORD *)(v12 + 40) + 19LL) < 0 )
  {
    CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(v75);
    v51 = *(_QWORD *)(gptiCurrent + 432LL);
    v13 = v68;
    v68[1] = 0LL;
    v68[0] = v51 + 120;
  }
  else
  {
    v69[1] = *(_QWORD *)(v11 + 120);
    v69[0] = v11 + 128;
    v13 = v69;
  }
  HMAssignmentLock(v13);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v15 = *(_QWORD *)(v14 + 120);
  if ( v15 )
  {
    if ( v14 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 432LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v64 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v64;
    *((_QWORD *)&v64 + 1) = v15;
    HMLockObject(v15);
    v38 = (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x20) << 16;
    if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v15) )
    {
      ThreadUnlock1(v40, v39, v41);
      return 0;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock((__int64)v3, &v62, (__int64)lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxSendMessage(v15, 6u, v38, v3);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v43 = v62;
    *(_QWORD *)(v42 + 16) = v62;
    ThreadUnlock1(v43, v44, v45);
    v14 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v16 = *(struct tagWND **)(v14 + 120);
  if ( *(struct tagWND **)(v14 + 128) == v16
    && v9 == v16
    && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == v14 )
  {
    if ( !v16 )
      *(_DWORD *)(v14 + 388) &= ~0x800u;
    CLockDomainExclusive<DLT_ACTIVE>::CLockDomainExclusive<DLT_ACTIVE>(v76);
    v17 = *(_QWORD *)(gptiCurrent + 432LL) + 120LL;
    v70[1] = a1;
    v70[0] = v17;
    HMAssignmentLock(v70);
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock((__int64)v3, &v62, (__int64)lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxWindowEvent(3u, 1u);
    anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 432LL), 6LL, 5LL);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v18 = *(struct _LARGE_STRING ***)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
    *(_QWORD *)&v66 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v66;
    *((_QWORD *)&v66 + 1) = v18;
    if ( v18 )
      HMLockObject(v18);
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage((unsigned __int64)a1, 0x30Fu, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 0x310u, (__int64)v3, 0LL, 1);
    if ( !v5 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow((__int64)a1) + 112);
            i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x10) == 0;
            i = *(_QWORD *)(i + 88) )
      {
        ;
      }
      if ( (a1 != (struct tagWND *)i || v18 && !(unsigned int)IsVisible((__int64)v18))
        && (!v80 || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)) )
      {
        v20 = 19;
        if ( a1 != (struct tagWND *)i )
          v20 = 3;
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v20);
        if ( (v20 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v21 = *(_DWORD *)(gptiCurrent + 488LL);
    v22 = 0;
    if ( (v21 & 0x200) == 0 && (!v18 || v18[2] != *((struct _LARGE_STRING **)a1 + 2)) )
    {
      v23 = 0;
      if ( v18 )
      {
        v50 = (__int64)v18[2];
        v58 = v50;
        v71 = 0LL;
        v72 = 0LL;
        *(_DWORD *)(v50 + 488) |= 0x200u;
        ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
        v60 = 0;
        LockW32Thread(v50, &v71);
        xxxSendActivateAppMessage((const struct tagAAS *)&v58);
        *(_DWORD *)(v50 + 488) &= ~0x200u;
        PopAndFreeW32ThreadLock(&v71);
        v21 = *(_DWORD *)(gptiCurrent + 488LL);
        v23 = v60;
      }
      *(_DWORD *)(gptiCurrent + 488LL) = v21 | 0x200;
      v58 = *((_QWORD *)a1 + 2);
      v22 = 1;
      ThreadId = a2;
      v60 = v23 & 0xFFFFFFFC | 1;
      xxxSendActivateAppMessage((const struct tagAAS *)&v58);
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
      v74 = *(_OWORD *)LockPointer(v77, (char *)j + 200, a1);
      HMAssignmentLock(&v74);
    }
    v26 = 0LL;
    if ( v18 )
      v26 = *v18;
    anonymous_namespace_::xxxSendNCActivateMessage(a1);
    v27 = v78 + 1LL;
    v28 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
    if ( v28 )
      v27 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v28 + 40) + 31LL) & 0x20) << 16;
    xxxSendMessage((unsigned __int64)a1, 6u, v27, v26);
    xxxUpdateTray(a1);
    ThreadUnlock1(v30, v29, v31);
    SetOrClrWF(0LL, a1, 257LL, 1LL);
    if ( v81 )
    {
      v32 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( (*(_DWORD *)(v32 + 388) & 0x800) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v32 + 112));
        if ( v34 != NonChildAncestor )
        {
          v46 = 0LL;
          if ( v34 && (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 31LL) & 0x20) == 0 )
            v46 = v34;
          v73[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v73;
          v73[2] = 0LL;
          v73[1] = v34;
          if ( v34 )
            HMLockObject(v34);
          anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v46);
          ThreadUnlock1(v48, v47, v49);
        }
      }
    }
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x40u;
    if ( gppiScreenSaver )
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gppiScreenSaver )
      {
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          8LL);
        *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
        v52 = *(_QWORD *)(gppiScreenSaver + 328LL);
        if ( v52 )
          SetForegroundPriority(v52, 1LL);
      }
    }
    else if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && !gbBlockSendInputResets )
    {
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        8LL);
    }
    if ( v22 )
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200u;
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v35 + 16) = v62;
    return *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) == (_QWORD)a1;
  }
  return 0;
}
