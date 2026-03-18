/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00B2490
 * Callers:
 *     xxxDCEWindowHitTestIndirect @ 0x1C00B2200 (xxxDCEWindowHitTestIndirect.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0217344 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0022594 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     DCELayerHitTest @ 0x1C002D038 (DCELayerHitTest.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00B2200 (xxxDCEWindowHitTestIndirect.c)
 *     IsWindowHolographicForHitTest @ 0x1C00B2A20 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00B2BA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     DwmSyncHitTestQuery @ 0x1C00BAB30 (DwmSyncHitTestQuery.c)
 *     IsMessageOnlyWindow @ 0x1C00BF910 (IsMessageOnlyWindow.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01E5184 (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C025E57C (SizeBoxHwnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v3; // r13
  struct tagWND *v4; // rsi
  __int64 v5; // rbx
  int v6; // r15d
  int v7; // r14d
  __int64 Prop; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rdx
  _DWORD *v13; // rax
  LONG y; // r12d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r14
  struct _KTHREAD *CurrentThread; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *ThreadWin32Thread; // rax
  HWND v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // r8d
  int *v34; // rax
  _BYTE *v35; // rcx
  int v36; // eax
  void *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v44; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+50h] [rbp-39h] BYREF
  struct tagPOINT v48; // [rsp+58h] [rbp-31h] BYREF
  __int64 v49; // [rsp+60h] [rbp-29h] BYREF
  __int64 v50; // [rsp+68h] [rbp-21h] BYREF
  int v51[2]; // [rsp+70h] [rbp-19h]
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v52; // [rsp+78h] [rbp-11h]
  __int64 v53; // [rsp+80h] [rbp-9h]
  __int128 v54; // [rsp+88h] [rbp-1h] BYREF
  __int64 v55; // [rsp+98h] [rbp+Fh]

  v52 = a3;
  *(_QWORD *)v51 = 4294967294LL;
  LODWORD(v49) = -2;
  v48 = a2;
  v55 = 0LL;
  v3 = a3;
  LODWORD(v47) = 0;
  v4 = a1;
  v5 = (__int64)a2;
  v6 = 1;
  v53 = *((_QWORD *)a3 + 2);
  v54 = 0LL;
  if ( !a1 )
    return 0LL;
  v7 = 0;
  Prop = RealGetProp(*((_QWORD *)a1 + 18), CInputQueueProp::s_atom, 1LL);
  if ( Prop )
  {
    if ( !*(_DWORD *)(Prop + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
    v7 = 1;
  }
  if ( (unsigned int)IsWindowHolographicForHitTest(v4) )
    goto LABEL_66;
  if ( !v7 )
    goto LABEL_5;
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 235LL) & 1) != 0 )
  {
    v30 = RealGetProp(*((_QWORD *)v4 + 18), CoreWindowProp::s_atom, 1LL);
    if ( v30 )
    {
      if ( *(_DWORD *)(v30 + 20) )
      {
LABEL_66:
        v7 = 1;
        goto LABEL_67;
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 235LL) & 1) == 0 )
  {
    v50 = 0LL;
    if ( !CWindowProp::GetProp<CInputQueueProp>((__int64)v4, &v50) || (*(_DWORD *)(v50 + 44) & 2) == 0 )
    {
LABEL_67:
      if ( (*((_DWORD *)v3 + 8) & 8) == 0
        || !(unsigned int)IsMessageOnlyWindow(v4) && (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0x10) == 0 )
      {
        return 0LL;
      }
      goto LABEL_9;
    }
  }
  v7 = 0;
LABEL_5:
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
LABEL_9:
  if ( (unsigned int)GetWindowCloakState(v4) )
  {
    if ( ((*(_BYTE *)(*((_QWORD *)v4 + 5) + 235LL) & 1) == 0
       || (v31 = RealGetProp(*((_QWORD *)v4 + 18), CoreWindowProp::s_atom, 1LL)) == 0
       || !*(_DWORD *)(v31 + 20))
      && !(unsigned int)IsWindowHolographicForHitTest(v4) )
    {
      return 0LL;
    }
  }
  if ( v7 )
  {
LABEL_84:
    y = v48.y;
    goto LABEL_16;
  }
  v12 = *((_QWORD *)v4 + 27);
  if ( v12 && (*((_DWORD *)v3 + 8) & 4) == 0 )
  {
    v41 = *((_QWORD *)v3 + 5);
    v48 = (struct tagPOINT)**((_QWORD **)v3 + 7);
    if ( !(unsigned int)DCEHitTestWindow(*((_QWORD *)v4 + 5) + 88LL, v12, &v48, v41) )
      return 0LL;
    v5 = (__int64)v48;
    goto LABEL_84;
  }
  v13 = (_DWORD *)*((_QWORD *)v4 + 5);
  if ( (int)v5 < v13[22] )
    return 0LL;
  if ( (int)v5 >= v13[24] )
    return 0LL;
  y = v48.y;
  if ( v48.y < v13[23] || v48.y >= v13[25] )
    return 0LL;
LABEL_16:
  v15 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL);
  if ( v15 && !(unsigned int)GrePtInRegion(v15, (unsigned int)v5, (unsigned int)y) )
    return 0LL;
  v16 = *((_QWORD *)v4 + 5);
  if ( (*(_BYTE *)(v16 + 26) & 8) != 0 && (*(_DWORD *)(v16 + 232) & 0x20) == 0 && !DCELayerHitTest((__int64)v4, v5) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v4) && (*((_DWORD *)v3 + 8) & 1) != 0 )
  {
    if ( !v7 && (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0xC0) == 0x40 )
      return 0LL;
    v17 = 1;
  }
  else
  {
    v17 = v47;
  }
  if ( *((_QWORD *)v4 + 27) )
  {
    *((_DWORD *)v3 + 12) = 1;
    *((_QWORD *)v3 + 2) = ((unsigned __int16)y << 16) | (unsigned __int16)v5;
  }
  if ( v17 )
  {
    v33 = v51[0];
  }
  else
  {
    if ( v7 )
      goto LABEL_83;
    v18 = *((_QWORD *)v4 + 5);
    if ( (*(_BYTE *)(v18 + 31) & 0x20) != 0
      || (int)v5 < *(_DWORD *)(v18 + 104)
      || (int)v5 >= *(_DWORD *)(v18 + 112)
      || y < *(_DWORD *)(v18 + 108)
      || y >= *(_DWORD *)(v18 + 116) )
    {
      LODWORD(v26) = 1;
    }
    else
    {
      v19 = *((_QWORD *)v4 + 14);
      v20 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v18)
        || (CurrentProcess = PsGetCurrentProcess(v23, v22, v24),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v44),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v20 = *ThreadWin32Thread;
      }
      *(_QWORD *)&v54 = *(_QWORD *)(v20 + 408);
      *(_QWORD *)(v20 + 408) = &v54;
      *((_QWORD *)&v54 + 1) = v19;
      if ( v19 )
        HMLockObject(v19);
      v3 = v52;
      v26 = xxxDCEWindowHitTestIndirect(*((struct tagWND **)v4 + 14), v48, (__int64)v52);
      ThreadUnlock1(v28, v27, v29);
      if ( v26 )
        return v26;
    }
    if ( *((_QWORD *)v4 + 2) != gptiCurrent )
    {
LABEL_83:
      v33 = 1;
    }
    else
    {
      if ( !(unsigned int)IsToplevelWindowDesktopComposed(v4)
        || (*(_BYTE *)(*((_QWORD *)v4 + 5) + 26LL) & 8) == 0
        || !(_DWORD)v26 )
      {
        goto LABEL_53;
      }
      if ( gdwInAtomicOperation )
      {
        v32 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v37 = (void *)ReferenceDwmApiPort(v32);
      LODWORD(v47) = 1;
      UserSessionSwitchLeaveCrit(v39, v38, v40);
      DwmSyncHitTestQuery(v37, *((_QWORD *)v3 + 1), *((_QWORD *)v3 + 2), v51[0], (__int64)&v49, (__int64)&v47);
      EnterCrit(0LL, 1LL);
      if ( (_DWORD)v47 )
      {
        v33 = v49;
      }
      else
      {
LABEL_53:
        _InterlockedIncrement(&glSendMessage);
        v33 = xxxSendTransformableMessageTimeout(
                (unsigned __int64)v4,
                0x84u,
                0LL,
                (struct _LARGE_STRING *)(LOWORD(v48.x) | (LOWORD(v48.y) << 16)),
                0,
                0,
                0LL,
                1,
                0);
      }
      if ( v33 == -1 )
      {
        *((_QWORD *)v3 + 2) = v53;
        *((_DWORD *)v3 + 12) = 0;
        return 0LL;
      }
    }
  }
  v34 = (int *)*((_QWORD *)v3 + 3);
  if ( v34 )
  {
    *v34 = v33;
    *((_DWORD *)v3 + 9) = 1;
  }
  v35 = (_BYTE *)*((_QWORD *)v4 + 5);
  if ( (v35[25] & 0x40) == 0 )
    v6 = 0;
  if ( v6 == ((v35[26] & 0x40) != 0) )
    v36 = 17;
  else
    v36 = 16;
  if ( v33 == v36 && (v35[30] & 4) == 0 )
  {
    v46 = SizeBoxHwnd(v4);
    if ( v46 )
      v4 = (struct tagWND *)v46;
  }
  return *(HWND *)v4;
}
