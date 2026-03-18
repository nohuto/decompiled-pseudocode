/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     ?xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z @ 0x141930 (-xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YGXQAUtagWND@@@Z @ 0x190C2 (-TraceLoggingProcessUsageDataAggregationHelper@@YGXQAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6 (-xxxUpdateTray@@YGXPAUtagWND@@@Z.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PAX@Z @ 0x1A038 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagW.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     ?xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z @ 0x3C394 (-xxxSendActivateAppMessage@@YGXABUtagAAS@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0xEFA58 (_anonymous_namespace_--RemoveEventMessage.c)
 *     _SetForegroundPriority@8 @ 0x18543F (_SetForegroundPriority@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(int *a1, int a2, char a3)
{
  int *v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  _DWORD *v18; // edi
  int *i; // edi
  int v20; // edx
  unsigned int v21; // ecx
  int v22; // eax
  int *j; // ecx
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  _DWORD *v29; // ecx
  int v30; // edi
  unsigned int v31; // ecx
  unsigned __int64 v32; // kr00_8
  PKTHREAD v33; // eax
  int v34; // eax
  _DWORD *v36; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v39; // eax
  int v40; // eax
  _DWORD *v41; // ecx
  int DLT; // eax
  int *v43; // esi
  unsigned int v44; // ecx
  unsigned __int64 v45; // kr08_8
  int v46; // eax
  __int64 v47; // [esp-6h] [ebp-A4h]
  const struct tagAAS *v48; // [esp+2h] [ebp-9Ch]
  int *v49; // [esp+Ah] [ebp-94h]
  int v50; // [esp+Eh] [ebp-90h]
  int v51; // [esp+12h] [ebp-8Ch]
  int v52; // [esp+12h] [ebp-8Ch]
  int v53; // [esp+16h] [ebp-88h]
  _DWORD *v54; // [esp+16h] [ebp-88h]
  int v55; // [esp+1Ah] [ebp-84h]
  unsigned int v56; // [esp+1Ah] [ebp-84h]
  int v57; // [esp+1Ah] [ebp-84h]
  unsigned int v58; // [esp+1Ah] [ebp-84h]
  int *v59; // [esp+1Eh] [ebp-80h]
  _DWORD *v60; // [esp+22h] [ebp-7Ch]
  unsigned int v61; // [esp+32h] [ebp-6Ch]
  int v62; // [esp+36h] [ebp-68h]
  int v63[2]; // [esp+3Ah] [ebp-64h] BYREF
  int *v64; // [esp+42h] [ebp-5Ch]
  HANDLE ThreadId; // [esp+46h] [ebp-58h]
  unsigned int v66; // [esp+4Ah] [ebp-54h]
  _DWORD v67[3]; // [esp+4Eh] [ebp-50h] BYREF
  _DWORD v68[3]; // [esp+5Ah] [ebp-44h] BYREF
  int v69; // [esp+66h] [ebp-38h] BYREF
  _DWORD *v70; // [esp+6Ah] [ebp-34h] BYREF
  int v71; // [esp+6Eh] [ebp-30h]
  int v72; // [esp+72h] [ebp-2Ch]
  int v73; // [esp+76h] [ebp-28h]
  int v74; // [esp+7Ah] [ebp-24h]
  int v75; // [esp+7Eh] [ebp-20h] BYREF
  int v76; // [esp+82h] [ebp-1Ch]
  int v77; // [esp+86h] [ebp-18h]
  int v78; // [esp+A6h] [ebp+8h]

  v67[0] = a2;
  v3 = a1;
  v71 = 0;
  v61 = (unsigned int)a1;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v68[2] = 0;
  v69 = 0;
  v70 = 0;
  v4 = *a1;
  ThreadId = (HANDLE)*a1;
  v5 = _gptiCurrent;
  v62 = a3 & 1;
  v67[1] = a3 & 0x80;
  v66 = a3 & 4;
  v78 = a3 & 2;
  if ( a1 == (int *)_GetDesktopWindow(a1) )
    return 0;
  v6 = v3[5];
  if ( *(char *)(v6 + 11) < 0 )
    return 0;
  v7 = *(_DWORD *)(_gptiCurrent + 236);
  if ( *(_DWORD *)(v3[2] + 236) != v7 )
    return 0;
  v64 = *(int **)(v7 + 64);
  if ( v3 == v64 || (*(_BYTE *)(v6 + 10) & 0x10) != 0 )
  {
    *(_DWORD *)(v7 + 284) &= ~0x8000u;
    if ( (*(_BYTE *)(_gpsi + 6248) & 1) != 0 && xxxSendMessage(0, 0) )
    {
      if ( !v4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      xxxSendNotifyMessage(-1, 784, v4, 0, 1);
    }
    return *(_DWORD *)(*(_DWORD *)(v5 + 236) + 64) == (_DWORD)v3;
  }
  v63[0] = v62;
  v8 = *(_DWORD *)(_gptiCurrent + 252);
  v63[1] = v4;
  if ( ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(*(_DWORD *)v8 + 8)) & 0x40) != 0
    && xxxCallHook((int)v63, 5u, v53, v55) )
  {
    return 0;
  }
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) &= ~0x8000u;
  v9 = *(_DWORD *)(_gptiCurrent + 236);
  v10 = *(_DWORD *)(v9 + 64);
  if ( v10 && *(char *)(*(_DWORD *)(v10 + 20) + 11) < 0 )
  {
    DLT = DLT_ACTIVE::getDLT(v53, v55);
    GetDomainLockRef(DLT);
    v11 = *(_DWORD *)(_gptiCurrent + 236) + 64;
  }
  else
  {
    v11 = v9 + 68;
    v51 = *(_DWORD *)(v9 + 64);
  }
  v50 = v11;
  HMAssignmentLock(v10, v9);
  v12 = *(_DWORD **)(_gptiCurrent + 236);
  v60 = (_DWORD *)v12[16];
  if ( v60 )
  {
    if ( v12 == (_DWORD *)_gpqForeground )
      _gpqForegroundPrev = *(_DWORD *)(_gptiCurrent + 236);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v69 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v69;
    v70 = v60;
    HMLockObject(v60);
    v61 = (*(_BYTE *)(v60[5] + 23) & 0x20) << 16;
    if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage(v60, v61, v4) )
    {
      ThreadUnlock1();
      return 0;
    }
    SetOrClrWF(528, 1);
    PushW32ThreadLock(v4, v68, lambda_c6c683bb3ef0b8db0ab8f2e512d84d3d_::_lambda_invoker_stdcall_);
    xxxSendMessage(v61, v4);
    SetOrClrWF(528, 1);
    v39 = KeGetCurrentThread();
    v40 = W32GetThreadWin32Thread(v39);
    *(_DWORD *)(v40 + 8) = v68[0];
    ThreadUnlock1();
    v12 = *(_DWORD **)(_gptiCurrent + 236);
  }
  v13 = v12[16];
  if ( v12[17] == v13 && v63[0] == v13 && *(char *)(v3[5] + 11) >= 0 && *(_DWORD **)(v3[2] + 236) == v12 )
  {
    if ( !v13 )
      v12[71] &= ~0x800u;
    v14 = DLT_ACTIVE::getDLT(v50, v51);
    GetDomainLockRef(v14);
    v48 = (const struct tagAAS *)(*(_DWORD *)(_gptiCurrent + 236) + 64);
    HMAssignmentLock(v16, v15);
    SetOrClrWF(528, 1);
    PushW32ThreadLock(v4, v67, lambda_c6c683bb3ef0b8db0ab8f2e512d84d3d_::_lambda_invoker_stdcall_);
    xxxWindowEvent(3, v3, 0, 0, 1);
    anonymous_namespace_::RemoveEventMessage(5);
    LOBYTE(v17) = 0;
    xxxMakeWindowForegroundWithState(0, v17);
    v18 = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 68);
    v69 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v69;
    v54 = v18;
    v70 = v18;
    if ( v18 )
      HMLockObject(v18);
    if ( (*(_BYTE *)(_gpsi + 6248) & 1) != 0 && xxxSendMessage(0, 0) )
      xxxSendNotifyMessage(-1, 784, v61, 0, 1);
    if ( !v78 && (*(_BYTE *)(v3[5] + 23) & 0x40) == 0 )
    {
      for ( i = *(int **)(_GetDesktopWindow(v3) + 60); i && (*(_BYTE *)(i[5] + 23) & 0x10) == 0; i = (int *)i[12] )
        ;
      if ( v3 == i && ((v41 = v54) == 0 || IsVisible(v48, v3)) )
      {
        v18 = v41;
      }
      else
      {
        if ( !v62 || _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
        {
          xxxSetWindowPos(v3, 0, 0, 0, 0, 0, v3 == i ? 19 : 3);
          if ( ((v3 == i ? 19 : 3) & 0x10) == 0 )
            TraceLoggingProcessUsageDataAggregationHelper();
          v5 = v55;
        }
        v18 = v54;
      }
    }
    v20 = *(_DWORD *)(v5 + 264);
    HIBYTE(v52) = 0;
    if ( (v20 & 0x200) == 0 && (!v18 || v18[2] != v3[2]) )
    {
      v21 = 0;
      if ( v18 )
      {
        v64 = (int *)v18[2];
        v43 = v64;
        v75 = 0;
        v76 = 0;
        v77 = 0;
        v64[66] |= 0x200u;
        ThreadId = PsGetThreadId(*(PETHREAD *)v5);
        v66 = 0;
        LockW32Thread(v43, &v75);
        xxxSendActivateAppMessage(v48);
        v43[66] &= ~0x200u;
        PopAndFreeW32ThreadLock(&v75);
        v20 = *(_DWORD *)(v5 + 264);
        v21 = v66;
        v3 = v59;
        v18 = v54;
      }
      HIBYTE(v52) = 1;
      *(_DWORD *)(v5 + 264) = v20 | 0x200;
      v64 = (int *)v3[2];
      v66 = v21 & 0xFFFFFFFC | 1;
      ThreadId = (HANDLE)v63[0];
      xxxSendActivateAppMessage(v48);
    }
    v22 = v3[5];
    if ( (*(_BYTE *)(v22 + 8) & 0x40) != 0 )
    {
      SetOrClrWF(257, 1);
      v22 = v3[5];
    }
    if ( *(char *)(v22 + 11) >= 0 )
    {
      for ( j = v3; j[16]; j = (int *)j[16] )
        ;
      v47 = LockPointer(j + 27, v3);
      HMAssignmentLock(v24, HIDWORD(v47));
    }
    if ( v18 )
      v18 = (_DWORD *)*v18;
    v25 = _gpqForeground == *(_DWORD *)(v3[2] + 236);
    v26 = *(_DWORD *)(*(_DWORD *)(v5 + 236) + 64);
    if ( v26 )
      v25 |= (*(_BYTE *)(*(_DWORD *)(v26 + 20) + 23) & 0x20) << 16;
    anonymous_namespace_::xxxSendNCActivateMessage(v3, v25, v18);
    v27 = v55 + 1;
    v28 = *(_DWORD *)(*(_DWORD *)(v5 + 236) + 64);
    if ( v28 )
      v27 |= (*(_BYTE *)(*(_DWORD *)(v28 + 20) + 23) & 0x20) << 16;
    xxxSendMessage(v27, v18);
    xxxUpdateTray((struct tagWND *)v47);
    ThreadUnlock1();
    SetOrClrWF(257, 1);
    if ( v62 )
    {
      v29 = *(_DWORD **)(v5 + 236);
      if ( (v29[71] & 0x800) == 0 )
      {
        v30 = v29[16];
        if ( v30 != GetNonChildAncestor(v29[15]) )
        {
          v57 = 0;
          if ( v30 && (*(_BYTE *)(*(_DWORD *)(v30 + 20) + 23) & 0x20) == 0 )
            v57 = v30;
          v36 = *(_DWORD **)(v5 + 228);
          v72 = 0;
          v70 = v36;
          *(_DWORD *)(v5 + 228) = &v70;
          v71 = v30;
          if ( v30 )
            HMLockObject(v30);
          anonymous_namespace_::xxxSendFocusMessages(v5, v57);
          ThreadUnlock1();
        }
      }
    }
    *(_DWORD *)(*(_DWORD *)(v5 + 236) + 284) |= 0x40u;
    if ( _gppiScreenSaver )
    {
      if ( *(_DWORD *)(v3[2] + 232) == _gppiScreenSaver )
        goto LABEL_57;
      v44 = MEMORY[0xFFDF0324];
      v58 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v58 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v5 = v52;
        v44 = MEMORY[0xFFDF0324];
      }
      v45 = (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v58) >> 24)
          + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v44) << 8);
      CInputGlobals::UpdateLastInputTime(_gpInputGlobals, v45, HIDWORD(v45), 8);
      *(_DWORD *)(_gppiScreenSaver + 8) &= ~0x400000u;
      v46 = *(_DWORD *)(_gppiScreenSaver + 184);
      if ( v46 )
        SetForegroundPriority(v46, 1);
    }
    else
    {
      if ( *(_DWORD *)(v5 + 248) != _grpdeskRitInput || _gbBlockSendInputResets )
      {
LABEL_57:
        if ( HIBYTE(v47) )
          *(_DWORD *)(v5 + 264) &= ~0x200u;
        SetOrClrWF(528, 1);
        v33 = KeGetCurrentThread();
        v34 = W32GetThreadWin32Thread(v33);
        *(_DWORD *)(v34 + 8) = v63[0];
        return *(_DWORD *)(*(_DWORD *)(v5 + 236) + 64) == (_DWORD)v3;
      }
      v31 = MEMORY[0xFFDF0324];
      v56 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v56 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v5 = v52;
        v31 = MEMORY[0xFFDF0324];
      }
      v32 = (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v56) >> 24)
          + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v31) << 8);
      CInputGlobals::UpdateLastInputTime(_gpInputGlobals, v32, HIDWORD(v32), 8);
    }
    v3 = v49;
    goto LABEL_57;
  }
  return 0;
}
