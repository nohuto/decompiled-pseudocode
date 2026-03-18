/*
 * XREFs of xxxSBWndProc @ 0x1C0245C00
 * Callers:
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E35C0 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     xxxGetScrollBarInfo @ 0x1C005E624 (xxxGetScrollBarInfo.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     _FChildVisible @ 0x1C00932A8 (_FChildVisible.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00EBE70 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     xxxEnableScrollBar @ 0x1C00EC140 (xxxEnableScrollBar.c)
 *     xxxEndPaint @ 0x1C00F4F60 (xxxEndPaint.c)
 *     xxxMoveWindow @ 0x1C01056BC (xxxMoveWindow.c)
 *     zzzDestroyCaret @ 0x1C010A730 (zzzDestroyCaret.c)
 *     xxxCreateCaret @ 0x1C010A844 (xxxCreateCaret.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014CB44 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     DrawThumb2 @ 0x1C014CDC4 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014CF4C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ConstrainWindowSIZERECT @ 0x1C01D0640 (ConstrainWindowSIZERECT.c)
 *     zzzHideCaret @ 0x1C024145C (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0241484 (zzzShowCaret.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C02445A0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C024477C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0244F90 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 *     DrawSize @ 0x1C0244FE0 (DrawSize.c)
 *     SBCtlSetup @ 0x1C024511C (SBCtlSetup.c)
 *     _SBGetParms @ 0x1C0245164 (_SBGetParms.c)
 *     xxxDoScrollMenu @ 0x1C02451EC (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0245720 (xxxSBTrackInit.c)
 *     _ClientToScreen @ 0x1C025D1B4 (_ClientToScreen.c)
 */

unsigned __int64 __fastcall xxxSBWndProc(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct tagSCROLLINFO *a4)
{
  unsigned int v4; // edi
  __int16 v9; // si
  __int64 v10; // r9
  unsigned __int64 result; // rax
  HDC v12; // r8
  _QWORD *v13; // r14
  HDC v14; // r15
  __int64 v15; // rcx
  unsigned int v16; // r13d
  __int64 v17; // rdx
  unsigned __int8 v18; // r11
  int v19; // r10d
  bool v20; // zf
  int v21; // r8d
  __int64 v22; // r10
  int v23; // edx
  int v24; // r9d
  unsigned int v25; // r15d
  int v26; // r13d
  int v27; // r9d
  int v28; // r8d
  int v29; // ecx
  int v30; // eax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v33; // rcx
  unsigned int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  int v44; // eax
  int v45; // ebx
  __int64 v46; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct tagWND *v51; // r9
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v54; // rdi
  HDC v55; // r12
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ebx
  __int64 v60; // r15
  __int64 v61; // rbx
  __int64 v62; // rax
  char v63; // r12
  char v64; // r13
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  unsigned __int16 v67; // r8
  int v68; // [rsp+50h] [rbp-B0h] BYREF
  int v69; // [rsp+54h] [rbp-ACh] BYREF
  int v70; // [rsp+58h] [rbp-A8h]
  unsigned int v71; // [rsp+5Ch] [rbp-A4h]
  __int64 v72; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v73; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v74; // [rsp+6Ch] [rbp-94h]
  unsigned int v75; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+74h] [rbp-8Ch]
  int v77; // [rsp+78h] [rbp-88h]
  HDC v78; // [rsp+80h] [rbp-80h]
  __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  __int128 v80; // [rsp+90h] [rbp-70h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-60h]
  __int128 v82; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-48h]
  int v84; // [rsp+C0h] [rbp-40h]
  _QWORD v85[10]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0;
  v78 = (HDC)a3;
  v68 = a2;
  v69 = 0;
  v72 = 0LL;
  memset(v85, 0, 0x48uLL);
  v79 = 0LL;
  v81 = 0LL;
  v9 = 1;
  v83 = 0LL;
  v84 = 0;
  v80 = 0LL;
  v82 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, a2, a3, (unsigned __int64)a4, 666, 1, &v79) )
    return v79;
  v12 = v78;
  v13 = (_QWORD *)*((_QWORD *)a1 + 35);
  v14 = v78;
  v15 = (unsigned int)v68;
  v16 = 3;
  *v13 = a1;
  v17 = *((_QWORD *)a1 + 5);
  v18 = *(_BYTE *)(v17 + 28);
  v77 = v18;
  v19 = v18 & 0x18;
  v70 = v19;
  if ( (v18 & 0x18) == 0 )
    v14 = v12;
  if ( (unsigned int)v15 <= 0xE2 )
  {
    if ( (_DWORD)v15 != 226 )
    {
      if ( (unsigned int)v15 <= 0x14 )
      {
        if ( (_DWORD)v15 != 20 )
        {
          if ( (_DWORD)v15 != 1 )
          {
            switch ( (_DWORD)v15 )
            {
              case 5:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
                  return 0LL;
                zzzDestroyCaret();
                break;
              case 7:
                break;
              case 8:
                zzzDestroyCaret();
                return 0LL;
              case 0xA:
                _InterlockedAdd(&glSendMessage, 1u);
                return xxxSendTransformableMessageTimeout(
                         (unsigned __int64)a1,
                         0xE4u,
                         -(__int64)(v12 == 0LL) & 3,
                         0LL,
                         0,
                         0,
                         0LL,
                         1,
                         1);
              default:
                v20 = (_DWORD)v15 == 15;
                goto LABEL_112;
            }
            SBCtlSetup((__int64)v13);
            v21 = *((_DWORD *)v13 + 2);
            v22 = *v13;
            if ( v21 )
              v23 = *(_DWORD *)(*(_QWORD *)(v22 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(v22 + 40) + 88LL);
            else
              v23 = *((_DWORD *)v13 + 12);
            if ( v21 )
              v24 = *((_DWORD *)v13 + 12);
            else
              v24 = *(_DWORD *)(*(_QWORD *)(v22 + 40) + 100LL) - *(_DWORD *)(*(_QWORD *)(v22 + 40) + 92LL);
            xxxCreateCaret(*v13, (HBRUSH)1, v23 - 4, v24 - 4);
            zzzSetSBCaretPos((struct tagSBWND *)v13);
            zzzShowCaret((struct tagWND *)*v13);
            return 0LL;
          }
          if ( !a4 )
          {
            UserSetLastError(87LL, v17, (__int64)v12);
            return 0LL;
          }
          v25 = *((_DWORD *)a4 + 11);
          LOBYTE(v15) = *(_BYTE *)(v17 + 31) & 0xC0;
          v26 = *((_DWORD *)a4 + 10);
          v27 = *((_DWORD *)a4 + 9);
          v28 = *((_DWORD *)a4 + 8);
          if ( v25 == 0x80000000 )
          {
            if ( (_BYTE)v15 )
              v25 = 0;
            else
              v25 = *(_DWORD *)(v17 + 88);
          }
          v71 = v25;
          if ( v26 == 0x80000000 )
          {
            if ( (_BYTE)v15 )
              v26 = 0;
            else
              v26 = *(_DWORD *)(v17 + 92);
          }
          v70 = v26;
          if ( v27 == 0x80000000 )
          {
            if ( (_BYTE)v15 )
              v27 = 0;
            else
              v27 = *(_DWORD *)(v17 + 96) - *(_DWORD *)(v17 + 88);
          }
          if ( v28 == 0x80000000 )
          {
            if ( (_BYTE)v15 )
              v28 = 0;
            else
              v28 = *(_DWORD *)(v17 + 100) - *(_DWORD *)(v17 + 92);
          }
          v20 = (*(_BYTE *)(v17 + 21) & 2) == 0;
          v69 = v25 + v27;
          v68 = v28 + v26;
          if ( v20 )
          {
            *(_DWORD *)(v17 + 28) &= 0xFFCFFFFF;
            a1 = (struct tagWND *)*v13;
          }
          if ( (v18 & 0x18) == 0 )
          {
            v29 = *(_DWORD *)a4;
            a1 = (struct tagWND *)*v13;
            v30 = (unsigned __int16)*(_DWORD *)a4;
            *((_DWORD *)v13 + 4) = v30;
            *((_DWORD *)v13 + 7) = v30;
            *((_DWORD *)v13 + 5) = HIWORD(v29);
            v15 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 1;
            *((_DWORD *)v13 + 6) = 0;
            *((_DWORD *)v13 + 2) = v15;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL) & 0x8000000) != 0 )
            *((_DWORD *)v13 + 3) = 3;
          if ( (v18 & 6) == 0 )
            return 0LL;
          if ( (v18 & 0x18) != 0 )
          {
            DpiForSystem = GetDpiForSystem(v15);
            DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
            v34 = GetDpiForSystem(v33);
            v35 = GetDpiDependentMetric(1LL, v34);
            v26 = v68 - v35;
            if ( (v77 & 4) == 0 )
              v26 = v70;
            v25 = v69 - DpiDependentMetric;
            if ( (v77 & 4) == 0 )
              v25 = v71;
            v36 = v26 + v35;
            v37 = v25 + DpiDependentMetric;
            goto LABEL_64;
          }
          if ( (v18 & 1) != 0 )
          {
            if ( (v18 & 2) != 0 )
            {
              v38 = GetDpiForSystem(v15);
              v37 = v25 + GetDpiDependentMetric(0LL, v38);
            }
            else
            {
              v39 = GetDpiForSystem(v15);
              v40 = GetDpiDependentMetric(0LL, v39);
              v37 = v69;
              v25 = v69 - v40;
            }
          }
          else
          {
            if ( (v18 & 2) != 0 )
            {
              v41 = GetDpiForSystem(v15);
              v42 = GetDpiDependentMetric(1LL, v41);
              v37 = v69;
              v36 = v26 + v42;
LABEL_64:
              v73 = v25;
              v75 = v37 - v25;
              v74 = v26;
              v76 = v36 - v26;
              ConstrainWindowSIZERECT((int *)&v73);
              xxxMoveWindow((struct tagWND *)*v13, v73, v74, v75, v76, 0);
              return 0LL;
            }
            v43 = GetDpiForSystem(v15);
            v44 = GetDpiDependentMetric(1LL, v43);
            v37 = v69;
            v26 = v68 - v44;
          }
          v36 = v68;
          goto LABEL_64;
        }
        return 1LL;
      }
      if ( (_DWORD)v15 != 123 )
      {
        if ( (_DWORD)v15 == 132 )
        {
          if ( (v18 & 0x10) != 0 )
            return (((unsigned __int8)~*(_BYTE *)(v17 + 26) ^ (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 25LL)) >> 6) & 1 | 0x10;
          return xxxDefWindowProc(a1, v15, (unsigned __int64)v12, (unsigned __int64)a4);
        }
        if ( (_DWORD)v15 == 135 )
          return 1LL;
        if ( (_DWORD)v15 != 224 )
        {
          if ( (_DWORD)v15 == 225 )
            return *((int *)v13 + 7);
          return xxxDefWindowProc(a1, v15, (unsigned __int64)v12, (unsigned __int64)a4);
        }
        v45 = (int)a4;
        DWORD1(v82) = 4100;
        HIDWORD(v83) = (_DWORD)v12;
        goto LABEL_92;
      }
      v46 = *((_QWORD *)a1 + 13);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v80 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v80;
      *((_QWORD *)&v80 + 1) = v46;
      if ( v46 )
        HMLockObject(v46);
      xxxDoScrollMenu(
        *(struct tagWND **)(*v13 + 104LL),
        (struct tagWND *)*v13,
        *((_DWORD *)v13 + 2),
        (unsigned __int64)a4);
LABEL_79:
      ThreadUnlock1(v49, v48, v50);
      return 0LL;
    }
    v45 = 0;
LABEL_91:
    *((_QWORD *)&v82 + 1) = __PAIR64__((unsigned int)a4, (unsigned int)v12);
    DWORD1(v82) = 4097;
LABEL_92:
    a4 = (struct tagSCROLLINFO *)&v82;
    LODWORD(v82) = 28;
    goto LABEL_93;
  }
  if ( (unsigned int)v15 > 0xEB )
  {
    switch ( (_DWORD)v15 )
    {
      case 0x100:
        if ( v14 == (HDC)33 )
        {
          v9 = 2;
        }
        else if ( v14 == (HDC)34 )
        {
          v9 = 3;
        }
        else if ( v14 == (HDC)35 )
        {
          v9 = 7;
        }
        else if ( v14 == (HDC)36 )
        {
          v9 = 6;
        }
        else
        {
          if ( (unsigned __int64)v14 <= 0x24 )
            return 0LL;
          if ( (unsigned __int64)v14 <= 0x26 )
          {
            v9 = 0;
          }
          else if ( (unsigned __int64)v14 > 0x28 )
          {
            return 0LL;
          }
        }
        v67 = v9;
        break;
      case 0x101:
        if ( (unsigned __int64)v14 - 33 > 7 )
          return 0LL;
        v67 = 8;
        break;
      case 0x201:
        goto LABEL_125;
      case 0x203:
        v60 = 61488LL;
        if ( (v18 & 0x18) == 0 )
        {
LABEL_125:
          if ( (v18 & 0x18) == 0 )
          {
            if ( (*(_BYTE *)(v17 + 30) & 1) != 0 )
            {
              xxxSetFocus(a1, v17, (__int64)v12);
              a1 = (struct tagWND *)*v13;
            }
            zzzHideCaret(a1);
            SBCtlSetup((__int64)v13);
            LOBYTE(v4) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
            xxxSBTrackInit((struct tagWND *)*v13, (__int64)a4, 0LL, v4);
            return 0LL;
          }
          v60 = 61440LL;
        }
        LODWORD(v72) = (__int16)a4;
        HIDWORD(v72) = SWORD1(a4);
        ClientToScreen(a1, &v72);
        v61 = *((_QWORD *)a1 + 13);
        v78 = (HDC)((WORD2(v72) << 16) | (unsigned __int16)v72);
        v62 = *(_QWORD *)(v61 + 40);
        v63 = *(_BYTE *)(v62 + 26) & 0x40;
        v64 = *(_BYTE *)(v62 + 25) & 0x40;
        v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v80 = *(_QWORD *)(v65 + 416);
        *(_QWORD *)(v65 + 416) = &v80;
        *((_QWORD *)&v80 + 1) = v61;
        if ( v61 )
          HMLockObject(v61);
        v66 = *(_QWORD *)(*v13 + 104LL);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(
          v66,
          0x112u,
          v60 | (((v63 == 0) ^ (unsigned __int64)(v64 != 0)) + 7),
          (struct _LARGE_STRING *)v78,
          0,
          0,
          0LL,
          1,
          1);
        goto LABEL_79;
      default:
        v20 = (_DWORD)v15 == 792;
LABEL_112:
        if ( !v20 )
          return xxxDefWindowProc(a1, v15, (unsigned __int64)v12, (unsigned __int64)a4);
        v55 = v14;
        if ( !v14 )
        {
          v56 = xxxBeginPaint(a1, (__int64)v85);
          v19 = v70;
          v55 = (HDC)v56;
        }
        if ( v19 )
        {
          v57 = *v13;
          v58 = *(_QWORD *)(*v13 + 40LL);
          v59 = *(_BYTE *)(v58 + 30) & 4;
          if ( (*(_BYTE *)(v58 + 30) & 4) == 0 )
          {
            SetOrClrWF(1, v57, 0xE04u, 1);
            v57 = *v13;
          }
          DrawSize(v57, v55, 0, 0);
          if ( !v59 )
            SetOrClrWF(0, *v13, 0xE04u, 1);
        }
        else
        {
          SBCtlSetup((__int64)v13);
          xxxDrawSB2(
            (struct tagWND *)*v13,
            (struct tagSBCALC *)(v13 + 2),
            v55,
            *((_DWORD *)v13 + 2),
            *((_DWORD *)v13 + 3));
        }
        if ( !v14 )
          xxxEndPaint((struct tagWND *)*v13, v85);
        return 0LL;
    }
    xxxDoScroll((struct _LARGE_STRING **)a1, *((struct tagWND **)a1 + 13), v67, 0, *((_DWORD *)v13 + 2));
    return 0LL;
  }
  switch ( (_DWORD)v15 )
  {
    case 0xEB:
      LODWORD(result) = xxxGetScrollBarInfo((unsigned __int64)a1, -4, (__int64)a4);
      return (int)result;
    case 0xE3:
      *(_DWORD *)v12 = (struct HDC__)v13[2];
      *(_DWORD *)a4 = *((_DWORD *)v13 + 5);
      return *((unsigned __int16 *)v13 + 8) | ((unsigned __int64)*((unsigned __int16 *)v13 + 10) << 16);
    case 0xE4:
      LODWORD(result) = xxxEnableSBCtlArrows(a1, (unsigned int)v12, (__int64)v12, v10);
      return (int)result;
    case 0xE6:
      v45 = 1;
      goto LABEL_91;
  }
  if ( (_DWORD)v15 != 233 )
  {
    if ( (_DWORD)v15 != 234 )
      return xxxDefWindowProc(a1, v15, (unsigned __int64)v12, (unsigned __int64)a4);
    LODWORD(result) = SBGetParms((__int64)a1, 2, (_DWORD *)v13 + 4, a4);
    return (int)result;
  }
  v45 = (int)v12;
LABEL_93:
  v68 = 1;
  if ( (unsigned int)SBSetParms((struct tagSBDATA *)(v13 + 2), a4, &v68, &v69) )
    xxxWindowEvent(0x800Eu, (struct tagWND *)*v13, -4, 0, 1u);
  if ( v45 )
  {
    zzzHideCaret((struct tagWND *)*v13);
    SBCtlSetup((__int64)v13);
    zzzSetSBCaretPos((struct tagSBWND *)v13);
    if ( (unsigned int)FChildVisible(*v13) )
    {
      if ( v68 || (*((_DWORD *)a4 + 1) & 8) == 0 )
        v16 = 0;
      xxxEnableScrollBar((unsigned __int64)v51, 2u, v16);
      DCEx = (HDC)_GetDCEx(*v13, 0LL, 65537LL);
      ColorObjects = (HBRUSH)xxxGetColorObjects((struct tagWND *)*v13, (unsigned __int64)DCEx);
      v54 = GreSelectBrush(DCEx, ColorObjects);
      DrawThumb2(*v13, (_DWORD *)v13 + 4, DCEx, ColorObjects, *((_DWORD *)v13 + 2), *((_DWORD *)v13 + 3));
      GreSelectBrush(DCEx, v54);
      _ReleaseDC(DCEx);
      v51 = (struct tagWND *)*v13;
    }
    zzzShowCaret(v51);
  }
  return v69;
}
