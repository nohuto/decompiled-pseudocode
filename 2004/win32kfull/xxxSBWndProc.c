/*
 * XREFs of xxxSBWndProc @ 0x1C0246EA0
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E4280 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxGetScrollBarInfo @ 0x1C00272B4 (xxxGetScrollBarInfo.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxEndPaint @ 0x1C005D6C0 (xxxEndPaint.c)
 *     zzzDestroyCaret @ 0x1C005DB20 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C005DC34 (xxxCreateCaret.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C008F2E4 (xxxClientFreeWindowClassExtraBytes.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C008F69C (xxxClientAllocWindowClassExtraBytes.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     _FChildVisible @ 0x1C00AFCEC (_FChildVisible.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00F0FF0 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C00F12C0 (xxxEnableScrollBar.c)
 *     xxxMoveWindow @ 0x1C0104A5C (xxxMoveWindow.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014A314 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C014A594 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014A71C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ConstrainWindowSIZERECT @ 0x1C01D1450 (ConstrainWindowSIZERECT.c)
 *     ??$?B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ @ 0x1C01E9A50 (--$-B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ.c)
 *     zzzHideCaret @ 0x1C02426FC (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0242724 (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0245840 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0245A1C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0246230 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C0246280 (DrawSize.c)
 *     SBCtlSetup @ 0x1C02463BC (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C0246404 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C024648C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C02469C0 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C025E7C4 (_ClientToScreen.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(struct tagWND *a1, unsigned int a2, HDC a3, struct tagSCROLLINFO *a4)
{
  HDC v5; // r15
  struct tagWND *v7; // rbx
  unsigned int v8; // edi
  struct tagSCROLLINFO *v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  __int16 v12; // ax
  __int16 v13; // si
  unsigned __int64 result; // rax
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  unsigned int v21; // r8d
  _QWORD *v22; // r8
  unsigned int v23; // edx
  void *v24; // r14
  unsigned int v25; // edx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // rcx
  struct tagWND **v32; // r14
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // r9
  bool v36; // zf
  int v37; // r8d
  struct tagWND *v38; // r10
  int v39; // edx
  int v40; // r9d
  char v41; // cl
  int v42; // r15d
  int v43; // r13d
  int v44; // r11d
  int v45; // r10d
  __int64 v46; // rcx
  int v47; // ecx
  int v48; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v51; // rcx
  unsigned int v52; // eax
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  unsigned int v56; // eax
  int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  int v60; // ebx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct tagWND *v66; // r9
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v69; // rdi
  HDC v70; // r12
  struct tagWND *v71; // rcx
  __int64 v72; // rax
  int v73; // ebx
  __int64 v74; // r15
  __int64 v75; // rbx
  __int64 v76; // rax
  char v77; // r12
  char v78; // r13
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v80; // rcx
  unsigned __int16 v81; // r8
  int v82; // [rsp+50h] [rbp-148h] BYREF
  int v83; // [rsp+54h] [rbp-144h]
  int v84; // [rsp+58h] [rbp-140h] BYREF
  int v85; // [rsp+5Ch] [rbp-13Ch]
  unsigned int v86; // [rsp+60h] [rbp-138h]
  _QWORD *v87; // [rsp+68h] [rbp-130h]
  __int64 v88; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v89; // [rsp+78h] [rbp-120h] BYREF
  unsigned int v90; // [rsp+80h] [rbp-118h]
  int v91; // [rsp+84h] [rbp-114h]
  struct tagSCROLLINFO *v92; // [rsp+88h] [rbp-110h]
  __int64 v93; // [rsp+90h] [rbp-108h]
  int v94[2]; // [rsp+98h] [rbp-100h]
  __int128 v95; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-E8h]
  unsigned int v97; // [rsp+B8h] [rbp-E0h]
  __int128 *v98; // [rsp+C0h] [rbp-D8h]
  struct tagWND *v99; // [rsp+C8h] [rbp-D0h]
  HDC v100; // [rsp+D0h] [rbp-C8h]
  __int64 v101; // [rsp+D8h] [rbp-C0h]
  __int128 v102; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v103; // [rsp+F0h] [rbp-A8h]
  int v104; // [rsp+F8h] [rbp-A0h]
  _QWORD v105[10]; // [rsp+100h] [rbp-98h] BYREF

  v5 = a3;
  v7 = a1;
  v99 = a1;
  *(_QWORD *)v94 = a1;
  v86 = a2;
  v100 = a3;
  v89 = (unsigned __int64)a4;
  v8 = 0;
  v82 = 0;
  v88 = 0LL;
  memset(v105, 0, 0x48uLL);
  v95 = 0LL;
  v96 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0;
  v9 = (struct tagSCROLLINFO *)&v102;
  v92 = (struct tagSCROLLINFO *)&v102;
  v98 = &v102;
  v84 = 0;
  v10 = (__int64)v7 + 40;
  v87 = (_QWORD *)((char *)v7 + 40);
  v11 = *((_QWORD *)v7 + 5);
  if ( (*(_DWORD *)(v11 + 232) & 0x800) != 0 )
    return 0LL;
  v12 = *(_WORD *)(v11 + 42);
  if ( v12 != 666 )
  {
    if ( v12 )
      return 0LL;
    v13 = 1;
    if ( a2 != 1 )
      return xxxDefWindowProc((__int64 *)v7, a2, (unsigned __int64)v5, (unsigned __int64)a4);
    v15 = *(_DWORD *)(v11 + 252);
    v16 = *(unsigned __int16 *)(gpsi + 328LL);
    if ( v15 + 320 >= v16 )
    {
      v30 = *((_QWORD *)v7 + 35);
      if ( v30 )
      {
        v31 = 0LL;
        if ( v15 )
        {
          while ( !*(_BYTE *)((unsigned int)v31 + v30) )
          {
            v31 = (unsigned int)(v31 + 1);
            if ( (unsigned int)v31 >= v15 )
              goto LABEL_31;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v11);
          v11 = *((_QWORD *)v7 + 5);
        }
LABEL_31:
        memset(*((void **)v7 + 35), 0, *(unsigned int *)(v11 + 252));
        goto LABEL_32;
      }
    }
    else
    {
      if ( v15 + *(_DWORD *)(v11 + 200) + 320 < v16 )
        return 0LL;
      v17 = v16 - 320;
      v18 = Win32AllocPoolZInit(v16 - 320, 1937208149LL);
      v93 = v18;
      if ( !v18 )
        return 0LL;
      v20 = *((_QWORD *)v7 + 35);
      if ( v20 )
      {
        v21 = 0;
        if ( *(_DWORD *)(*v87 + 252LL) )
        {
          while ( !*(_BYTE *)(v21 + v20) )
          {
            if ( ++v21 >= *(_DWORD *)(*((_QWORD *)v7 + 5) + 252LL) )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(*v87, v19);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)v7 + 35));
        v18 = v93;
      }
      *((_QWORD *)v7 + 35) = v18;
      v22 = v87;
      *(_DWORD *)(*v87 + 252LL) = v17;
      v23 = *(_DWORD *)(*v22 + 200LL);
      v83 = v23;
      v85 = v23;
      if ( v23 )
      {
        v24 = (void *)xxxClientAllocWindowClassExtraBytes(v23);
        v93 = (__int64)v24;
        if ( !v24 )
          return 0LL;
      }
      else
      {
        v24 = 0LL;
        v93 = 0LL;
      }
      if ( tagWND::RedirectedFieldpExtraBytes::operator<bool> bool((__int64)v7 + 320) )
      {
        if ( v24 )
        {
          v26 = *(_QWORD *)v10;
          v101 = *(_QWORD *)(*(_QWORD *)v10 + 296LL);
          v97 = *(_DWORD *)(v26 + 252);
          memmove(v24, (const void *)(v101 + v97), v25);
        }
        v27 = v83;
        v28 = *((_QWORD *)v7 + 5);
        v29 = *(_QWORD *)(v28 + 296);
        *(_QWORD *)(v28 + 296) = v24;
        *(_DWORD *)(*((_QWORD *)v7 + 5) + 200LL) = v27;
        xxxClientFreeWindowClassExtraBytes((__int64)v7, v29);
LABEL_32:
        v10 = (__int64)v87;
        goto LABEL_33;
      }
      *(_QWORD *)(*(_QWORD *)v10 + 296LL) = v24;
      *(_DWORD *)(*(_QWORD *)v10 + 200LL) = v25;
    }
LABEL_33:
    *(_WORD *)(*(_QWORD *)v10 + 42LL) = 666;
    v9 = v92;
    goto LABEL_35;
  }
  v13 = 1;
LABEL_35:
  v32 = (struct tagWND **)*((_QWORD *)v7 + 35);
  *v32 = v7;
  v33 = *(_QWORD *)(*(_QWORD *)v94 + 40LL);
  v34 = *(unsigned __int8 *)(v33 + 28);
  v86 = v34;
  v35 = v34 & 0x18;
  v85 = v34 & 0x18;
  if ( a2 > 0xE2 )
  {
    if ( a2 > 0xEB )
    {
      switch ( a2 )
      {
        case 0x100u:
          if ( v5 == (HDC)33 )
          {
            v13 = 2;
          }
          else if ( v5 == (HDC)34 )
          {
            v13 = 3;
          }
          else if ( v5 == (HDC)35 )
          {
            v13 = 7;
          }
          else if ( v5 == (HDC)36 )
          {
            v13 = 6;
          }
          else
          {
            if ( (unsigned __int64)v5 <= 0x24 )
              return 0LL;
            if ( (unsigned __int64)v5 <= 0x26 )
            {
              v13 = 0;
            }
            else if ( (unsigned __int64)v5 > 0x28 )
            {
              return 0LL;
            }
          }
          v81 = v13;
          break;
        case 0x101u:
          if ( (unsigned __int64)v5 - 33 > 7 )
            return 0LL;
          v81 = 8;
          break;
        case 0x201u:
          goto LABEL_154;
        case 0x203u:
          v74 = 61488LL;
          if ( (v34 & 0x18) == 0 )
          {
LABEL_154:
            if ( (v34 & 0x18) == 0 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)v10 + 30LL) & 1) != 0 )
              {
                xxxSetFocus(v7, v33, v10, v35);
                v7 = *v32;
              }
              zzzHideCaret(v7);
              SBCtlSetup((__int64)v32);
              LOBYTE(v8) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
              xxxSBTrackInit(*v32, (unsigned __int64)a4, 0, v8);
              return 0LL;
            }
            v74 = 61440LL;
          }
          LODWORD(v88) = (__int16)a4;
          HIDWORD(v88) = SWORD1(a4);
          ClientToScreen(v7, &v88);
          *(_QWORD *)v94 = (WORD2(v88) << 16) | (unsigned __int16)v88;
          v75 = *((_QWORD *)v7 + 13);
          v76 = *(_QWORD *)(v75 + 40);
          v77 = *(_BYTE *)(v76 + 26) & 0x40;
          v78 = *(_BYTE *)(v76 + 25) & 0x40;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v95 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v95;
          *((_QWORD *)&v95 + 1) = v75;
          if ( v75 )
            HMLockObject(v75);
          v80 = *((_QWORD *)*v32 + 13);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            v80,
            0x112u,
            v74 | (((v77 == 0) ^ (unsigned __int64)(v78 != 0)) + 7),
            *(struct _LARGE_STRING **)v94,
            0,
            0,
            0LL,
            1,
            1);
          goto LABEL_109;
        default:
          v36 = a2 == 792;
LABEL_142:
          if ( !v36 )
            return xxxDefWindowProc((__int64 *)v7, a2, (unsigned __int64)v5, (unsigned __int64)a4);
          v70 = v5;
          if ( !v5 )
          {
            v5 = (HDC)xxxBeginPaint(v7, (__int64)v105);
            LODWORD(v35) = v85;
          }
          if ( (_DWORD)v35 )
          {
            v71 = *v32;
            v72 = *((_QWORD *)*v32 + 5);
            v73 = *(_BYTE *)(v72 + 30) & 4;
            if ( (*(_BYTE *)(v72 + 30) & 4) == 0 )
            {
              SetOrClrWF(1, (__int64)v71, 0xE04u, 1);
              v71 = *v32;
            }
            DrawSize((__int64)v71, v5, 0, 0);
            if ( !v73 )
              SetOrClrWF(0, (__int64)*v32, 0xE04u, 1);
          }
          else
          {
            SBCtlSetup((__int64)v32);
            xxxDrawSB2(*v32, (struct tagSBCALC *)(v32 + 2), v5, *((_DWORD *)v32 + 2), *((_DWORD *)v32 + 3));
          }
          if ( !v70 )
            xxxEndPaint(*v32, v105);
          return 0LL;
      }
      xxxDoScroll((struct _LARGE_STRING **)v7, *((struct tagWND **)v7 + 13), v81, 0, *((_DWORD *)v32 + 2));
      return 0LL;
    }
    switch ( a2 )
    {
      case 0xEBu:
        LODWORD(result) = xxxGetScrollBarInfo((__int64)v7, -4, (__int64)a4);
        break;
      case 0xE3u:
        *(_DWORD *)v5 = (struct HDC__)v32[2];
        *(_DWORD *)a4 = *((_DWORD *)v32 + 5);
        return *((unsigned __int16 *)v32 + 8) | ((unsigned __int64)*((unsigned __int16 *)v32 + 10) << 16);
      case 0xE4u:
        LODWORD(result) = xxxEnableSBCtlArrows(v7);
        break;
      case 0xE6u:
        v60 = 1;
        goto LABEL_121;
      case 0xE9u:
        v9 = a4;
        v92 = a4;
        v60 = (int)v5;
LABEL_123:
        v84 = 1;
        if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v32 + 2), v9, &v84, &v82) )
          xxxWindowEvent(0x800Eu, *v32, -4, 0, 1u);
        if ( v60 )
        {
          zzzHideCaret(*v32);
          SBCtlSetup((__int64)v32);
          zzzSetSBCaretPos((struct tagSBWND *)v32);
          if ( (unsigned int)FChildVisible((__int64)*v32) )
          {
            if ( !v84 && (*((_DWORD *)v92 + 1) & 8) != 0 )
              v8 = 3;
            xxxEnableScrollBar((unsigned __int64)v66, 2LL, v8);
            DCEx = (HDC)_GetDCEx(*v32, 0LL, 65537LL);
            ColorObjects = (HBRUSH)xxxGetColorObjects(*v32, (unsigned __int64)DCEx);
            v69 = GreSelectBrush(DCEx, ColorObjects);
            DrawThumb2((__int64)*v32, (_DWORD *)v32 + 4, DCEx, ColorObjects, *((_DWORD *)v32 + 2), *((_DWORD *)v32 + 3));
            GreSelectBrush(DCEx, v69);
            _ReleaseDC(DCEx);
            v66 = *v32;
          }
          zzzShowCaret(v66);
        }
        return v82;
      case 0xEAu:
        LODWORD(result) = SBGetParms((__int64)v7, 2, (_DWORD *)v32 + 4, a4);
        break;
      default:
        return xxxDefWindowProc((__int64 *)v7, a2, (unsigned __int64)v5, (unsigned __int64)a4);
    }
    return (int)result;
  }
  if ( a2 == 226 )
  {
    v60 = v84;
LABEL_121:
    *((_QWORD *)&v102 + 1) = __PAIR64__((unsigned int)a4, (unsigned int)v5);
    DWORD1(v102) = 4097;
    goto LABEL_122;
  }
  if ( a2 <= 0x14 )
  {
    if ( a2 != 20 )
    {
      if ( a2 != 1 )
      {
        switch ( a2 )
        {
          case 5u:
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != v7 )
              return 0LL;
            zzzDestroyCaret();
            break;
          case 7u:
            break;
          case 8u:
            zzzDestroyCaret();
            return 0LL;
          case 0xAu:
            _InterlockedAdd(&glSendMessage, 1u);
            return xxxSendTransformableMessageTimeout(
                     (unsigned __int64)v7,
                     0xE4u,
                     v5 == 0LL ? 3 : 0,
                     0LL,
                     0,
                     0,
                     0LL,
                     1,
                     1);
          default:
            v36 = a2 == 15;
            goto LABEL_142;
        }
        SBCtlSetup((__int64)v32);
        v37 = *((_DWORD *)v32 + 2);
        v38 = *v32;
        if ( v37 )
          v39 = *(_DWORD *)(*((_QWORD *)v38 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)v38 + 5) + 88LL);
        else
          v39 = *((_DWORD *)v32 + 12);
        if ( v37 )
          v40 = *((_DWORD *)v32 + 12);
        else
          v40 = *(_DWORD *)(*((_QWORD *)v38 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)v38 + 5) + 92LL);
        xxxCreateCaret((__int64)*v32, (HBRUSH)1, v39 - 4, v40 - 4);
        zzzSetSBCaretPos((struct tagSBWND *)v32);
        zzzShowCaret(*v32);
        return 0LL;
      }
      if ( !a4 )
      {
        UserSetLastError(87LL, v33, v10);
        return 0LL;
      }
      v41 = *(_BYTE *)(v33 + 31) & 0xC0;
      v42 = *((_DWORD *)a4 + 11);
      v43 = *((_DWORD *)a4 + 10);
      v44 = *((_DWORD *)a4 + 9);
      v45 = *((_DWORD *)a4 + 8);
      if ( v42 == 0x80000000 )
      {
        if ( v41 )
          v42 = 0;
        else
          v42 = *(_DWORD *)(v33 + 88);
      }
      v84 = v42;
      if ( v43 == 0x80000000 )
      {
        if ( v41 )
          v43 = 0;
        else
          v43 = *(_DWORD *)(v33 + 92);
      }
      v85 = v43;
      if ( v44 == 0x80000000 )
      {
        if ( v41 )
          v44 = 0;
        else
          v44 = *(_DWORD *)(v33 + 96) - *(_DWORD *)(v33 + 88);
      }
      if ( v45 == 0x80000000 )
      {
        if ( v41 )
          v45 = 0;
        else
          v45 = *(_DWORD *)(*(_QWORD *)v10 + 100LL) - *(_DWORD *)(*(_QWORD *)v10 + 92LL);
      }
      v83 = v42 + v44;
      v82 = v45 + v43;
      v46 = *(_QWORD *)v10;
      if ( (*(_BYTE *)(*(_QWORD *)v10 + 21LL) & 2) == 0 )
      {
        *(_DWORD *)(v46 + 28) &= 0xFFCFFFFF;
        v7 = *v32;
      }
      if ( !(_DWORD)v35 )
      {
        v47 = *(_DWORD *)a4;
        v48 = (unsigned __int16)*(_DWORD *)a4;
        *((_DWORD *)v32 + 4) = v48;
        *((_DWORD *)v32 + 7) = v48;
        *((_DWORD *)v32 + 5) = HIWORD(v47);
        v46 = *(_BYTE *)(*((_QWORD *)v7 + 5) + 28LL) & 1;
        *((_DWORD *)v32 + 2) = v46;
        *((_DWORD *)v32 + 6) = 0;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v7 + 5) + 28LL) & 0x8000000) != 0 )
        *((_DWORD *)v32 + 3) = 3;
      if ( (v86 & 6) == 0 )
        return 0LL;
      if ( (_DWORD)v35 )
      {
        DpiForSystem = GetDpiForSystem(v46);
        DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
        v52 = GetDpiForSystem(v51);
        v53 = GetDpiDependentMetric(1LL, v52);
        v43 = v82 - v53;
        if ( (v86 & 4) == 0 )
          v43 = v85;
        v42 = v83 - DpiDependentMetric;
        if ( (v86 & 4) == 0 )
          v42 = v84;
        v54 = v42 + DpiDependentMetric;
        v55 = v43 + v53;
        goto LABEL_94;
      }
      if ( (v86 & 1) != 0 )
      {
        v56 = GetDpiForSystem(v46);
        if ( (v86 & 2) != 0 )
        {
          v54 = v42 + GetDpiDependentMetric(0LL, v56);
        }
        else
        {
          v57 = GetDpiDependentMetric(0LL, v56);
          v54 = v83;
          v42 = v83 - v57;
        }
      }
      else
      {
        if ( (v86 & 2) != 0 )
        {
          v58 = GetDpiForSystem(v46);
          v55 = v43 + GetDpiDependentMetric(1LL, v58);
          v54 = v83;
LABEL_94:
          v89 = __PAIR64__(v43, v42);
          v90 = v54 - v42;
          v91 = v55 - v43;
          ConstrainWindowSIZERECT((int *)&v89);
          xxxMoveWindow(*v32, (unsigned int)v89, HIDWORD(v89), v90, v91, 0);
          return 0LL;
        }
        v59 = GetDpiForSystem(v46);
        v43 = v82 - GetDpiDependentMetric(1LL, v59);
        v54 = v83;
      }
      v55 = v82;
      goto LABEL_94;
    }
    return 1LL;
  }
  switch ( a2 )
  {
    case 0x7Bu:
      v61 = *((_QWORD *)v7 + 13);
      v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v95 = *(_QWORD *)(v62 + 408);
      *(_QWORD *)(v62 + 408) = &v95;
      *((_QWORD *)&v95 + 1) = v61;
      if ( v61 )
        HMLockObject(v61);
      xxxDoScrollMenu(*((struct tagWND **)*v32 + 13), *v32, *((_DWORD *)v32 + 2), (unsigned __int64)a4);
LABEL_109:
      ThreadUnlock1(v64, v63, v65);
      return 0LL;
    case 0x84u:
      if ( (v34 & 0x10) == 0 )
        return xxxDefWindowProc((__int64 *)v7, a2, (unsigned __int64)v5, (unsigned __int64)a4);
      return (((unsigned __int8)~*(_BYTE *)(v33 + 26) ^ (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v7 + 13) + 40LL)
                                                                                             + 25LL)) >> 6) & 1 | 0x10;
    case 0x87u:
      return 1LL;
    case 0xE0u:
      v60 = (int)a4;
      DWORD1(v102) = 4100;
      HIDWORD(v103) = (_DWORD)v5;
LABEL_122:
      LODWORD(v102) = 28;
      goto LABEL_123;
  }
  if ( a2 != 225 )
    return xxxDefWindowProc((__int64 *)v7, a2, (unsigned __int64)v5, (unsigned __int64)a4);
  return *((int *)v32 + 7);
}
