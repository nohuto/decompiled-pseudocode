/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0012724
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0012B08 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1E08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01DFC0C (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01E22BC (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        const struct tagQMSG *a3,
        unsigned int a4)
{
  __int64 v5; // rbx
  unsigned int v7; // esi
  __int64 v8; // rax
  int v9; // r13d
  int v10; // r12d
  int active; // edi
  struct tagWND *v12; // rsi
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagWND *v17; // rax
  bool v18; // zf
  __int64 v19; // rcx
  unsigned int v20; // r12d
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  __int64 v25; // r8
  int v26; // eax
  int v27; // ecx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  bool v30; // cf
  __int64 v32; // [rsp+58h] [rbp-11h]
  __int64 v33; // [rsp+70h] [rbp+7h] BYREF
  struct tagWND *v34; // [rsp+78h] [rbp+Fh]
  __int64 v35; // [rsp+80h] [rbp+17h]
  unsigned int v36; // [rsp+D0h] [rbp+67h]
  unsigned int v37; // [rsp+E0h] [rbp+77h]

  v5 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((_DWORD *)a3 + 6);
  v32 = *((_QWORD *)a3 + 4);
  v8 = *((_QWORD *)a1 + 54);
  v9 = -__CFSHR__(*((_DWORD *)a3 + 25), 23);
  v36 = v7;
  v10 = -__CFSHR__(*((_DWORD *)a3 + 25), 26);
  v35 = 0LL;
  if ( *(_QWORD *)(v8 + 104) )
    return 0LL;
  active = 0;
  if ( !v9 && (unsigned int)IsIndependentInputWindow(a2) )
  {
    if ( v7 - 513 <= 0xA )
    {
      v27 = 1097;
      if ( _bittest(&v27, v7 - 513) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow(CompositionInputWindowUIOwner);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(struct tagQ **)(*(_QWORD *)(TopLevelWindow + 16) + 432LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v12 = a2;
  v33 = *((_QWORD *)a1 + 52);
  *((_QWORD *)a1 + 52) = &v33;
  v34 = a2;
  if ( a2 )
    HMLockObject(a2);
  v13 = (_BYTE *)*((_QWORD *)a2 + 5);
  v14 = 1LL;
  if ( (v13[21] & 2) != 0 )
    v14 = (v13[24] & 4) == 0;
  v37 = v14;
  if ( v36 == 513 || v36 == 516 || v36 == 519 || v36 == 523 )
  {
    if ( (v13[31] & 0xC0) == 0x40 )
    {
      do
      {
        v12 = (struct tagWND *)*((_QWORD *)v12 + 13);
        if ( (_DWORD)v14 )
        {
          ThreadUnlock1(v13, v14, a3);
          v33 = *((_QWORD *)a1 + 52);
          *((_QWORD *)a1 + 52) = &v33;
          v34 = v12;
          if ( v12 )
            HMLockObject(v12);
          v22 = *((_QWORD *)v12 + 5);
          v23 = *(_DWORD *)(v22 + 104);
          v24 = *(_DWORD *)(v22 + 108);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (int)v12,
            528,
            v32 | v36,
            (unsigned __int16)(v5 - v23) | ((unsigned __int16)(WORD2(v5) - v24) << 16),
            0,
            0,
            0LL,
            1,
            0);
          v14 = v37;
        }
        LOBYTE(v13) = *(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0xC0;
      }
      while ( (_BYTE)v13 == 64 );
      active = 0;
    }
    if ( !(_DWORD)v14 )
    {
      ThreadUnlock1(v13, v14, a3);
      v33 = *((_QWORD *)a1 + 52);
      *((_QWORD *)a1 + 52) = &v33;
      v34 = v12;
      HMLockObject(v12);
    }
  }
  v15 = *((_QWORD *)a1 + 54);
  v16 = 0LL;
  v17 = *(struct tagWND **)(v15 + 120);
  if ( v10 )
    v18 = v17 == v12;
  else
    v18 = v17 == a2;
  LOBYTE(v16) = !v18;
  if ( !v9 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && v36 == 512 )
  {
    LOWORD(v20) = a4;
    active = xxxActiveWindowTracking(a2, 512LL, a4);
    goto LABEL_23;
  }
  if ( !(_DWORD)v16 && (*(_DWORD *)(v15 + 388) & 0x8000) == 0 || v12 == (struct tagWND *)GetDesktopWindow(v12) )
  {
    v20 = a4;
    goto LABEL_28;
  }
  if ( v36 == 513 || v36 == 516 || v36 == 519 || v36 == 523 )
  {
    if ( v9 )
    {
      v30 = v10 != 0;
      v20 = a4;
      active = v30 + 3;
    }
    else
    {
      if ( v10 )
      {
        v20 = a4;
        active = 2;
LABEL_47:
        if ( (v12 != *(struct tagWND **)(v15 + 120) || (*(_DWORD *)(v15 + 388) & 0x8000) != 0)
          && !(unsigned __int8)xxxActivateWindowWithOptions(v12, 3LL, 49LL, *(_DWORD *)(v15 + 148) != 0)
          || (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 8) != 0
          || active == 2 )
        {
          goto LABEL_67;
        }
LABEL_28:
        active = 0;
        v19 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
        {
          if ( CheckOnTop(a1, v12, v36) )
          {
            if ( v20 == 1 )
            {
              v19 = *(unsigned int *)(*((_QWORD *)v12 + 2) + 488LL);
              if ( (v19 & 8) != 0 )
                active = (*(_BYTE *)(*((_QWORD *)v12 + 5) + 24LL) & 8) == 0;
            }
          }
        }
        goto LABEL_23;
      }
      if ( v12 )
        v25 = *(_QWORD *)v12;
      else
        v25 = 0LL;
      v20 = a4;
      v26 = xxxSendMessage(a2, 33LL, v25, (unsigned __int16)a4 | ((unsigned __int16)v36 << 16));
      v15 = *((_QWORD *)a1 + 54);
      active = v26;
    }
    if ( active < 0 )
      goto LABEL_23;
    if ( active > 2 )
    {
      if ( active == 3 )
      {
        active = 0;
        goto LABEL_23;
      }
      if ( active != 4 )
        goto LABEL_23;
LABEL_67:
      active = 1;
      goto LABEL_23;
    }
    goto LABEL_47;
  }
  LOWORD(v20) = a4;
LABEL_23:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 54) + 104LL) )
    xxxSendMessage(a2, 32LL, *(_QWORD *)a2, (unsigned __int16)v20 | ((unsigned __int16)v36 << 16));
  ThreadUnlock1(v19, v15, v16);
  return (unsigned int)active;
}
