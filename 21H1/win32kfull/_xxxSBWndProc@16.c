/*
 * XREFs of _xxxSBWndProc@16 @ 0x1A3EEF
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     ?xxxWrapSBWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA3B (-xxxWrapSBWndProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?ConstrainIntToPositive2xShortRange@@YGHH@Z @ 0x302E8 (-ConstrainIntToPositive2xShortRange@@YGHH@Z.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxGetScrollBarInfo@12 @ 0x6D508 (_xxxGetScrollBarInfo@12.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _zzzDestroyCaret@0 @ 0x7DA96 (_zzzDestroyCaret@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?SBSetParms@@YGHPAUtagSBDATA@@PAUtagSCROLLINFO@@PAHPAJ@Z @ 0x8DEDC (-SBSetParms@@YGHPAUtagSBDATA@@PAUtagSCROLLINFO@@PAHPAJ@Z.c)
 *     _xxxEnableScrollBar@12 @ 0x8E0EE (_xxxEnableScrollBar@12.c)
 *     _xxxMoveWindow@24 @ 0x9A1C4 (_xxxMoveWindow@24.c)
 *     __FChildVisible@4 @ 0x9DDDE (__FChildVisible@4.c)
 *     _xxxCreateCaret@16 @ 0xAA702 (_xxxCreateCaret@16.c)
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 *     ?xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z @ 0xC1E2A (-xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _zzzHideCaret@4 @ 0x19FB1F (_zzzHideCaret@4.c)
 *     _zzzShowCaret@4 @ 0x19FB39 (_zzzShowCaret@4.c)
 *     ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D (-xxxDoScroll@@YGXPAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z @ 0x1A2F8E (-xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z.c)
 *     ?zzzSetSBCaretPos@@YGXPAUtagSBWND@@@Z @ 0x1A3529 (-zzzSetSBCaretPos@@YGXPAUtagSBWND@@@Z.c)
 *     _DrawSize@16 @ 0x1A3566 (_DrawSize@16.c)
 *     _SBCtlSetup@4 @ 0x1A3664 (_SBCtlSetup@4.c)
 *     __SBGetParms@16 @ 0x1A3698 (__SBGetParms@16.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 *     __ClientToScreen@8 @ 0x1B7000 (__ClientToScreen@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

unsigned int __stdcall xxxSBWndProc(ULONG_PTR BugCheckParameter2, int a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // ebx
  int v5; // edx
  __int16 v6; // ax
  unsigned int v7; // ecx
  unsigned int v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // edi
  int v12; // esi
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int *v19; // esi
  int v20; // edx
  unsigned __int8 v21; // di
  int v22; // edi
  bool v23; // zf
  int v24; // edx
  int v25; // edi
  int v26; // ecx
  int v27; // ebx
  int v28; // ecx
  int v29; // edi
  int v30; // eax
  int v31; // esi
  int *v32; // esi
  int v33; // edx
  unsigned int v34; // ecx
  int v35; // eax
  INT DpiForSystem; // eax
  INT v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // ebx
  INT v42; // eax
  int v43; // eax
  INT v44; // eax
  int v45; // eax
  INT v46; // eax
  int v47; // eax
  INT v48; // eax
  int v49; // eax
  int v50; // ebx
  int v51; // eax
  int v52; // edx
  int v53; // ebx
  HDC v54; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagWND *v57; // edi
  unsigned int v58; // eax
  HDC DCEx; // eax
  int *v60; // ecx
  HDC v61; // ebx
  int ColorObjects; // esi
  int v63; // edi
  HDC v64; // esi
  HDC v65; // ebx
  int v66; // ecx
  __int16 KeyState; // ax
  int v68; // edi
  int v69; // eax
  unsigned int v70; // ebx
  PKTHREAD v71; // eax
  int v72; // eax
  int v73; // ecx
  int v74; // ecx
  int v75; // [esp-Ch] [ebp-B4h]
  int v76; // [esp-4h] [ebp-ACh]
  int *v77; // [esp+0h] [ebp-A8h]
  int *v78; // [esp+4h] [ebp-A4h]
  int v79; // [esp+Ch] [ebp-9Ch]
  char v80; // [esp+13h] [ebp-95h]
  int v81; // [esp+14h] [ebp-94h]
  unsigned int *v82; // [esp+18h] [ebp-90h]
  int v83; // [esp+18h] [ebp-90h]
  int DpiDependentMetric; // [esp+18h] [ebp-90h]
  int v85; // [esp+18h] [ebp-90h]
  int v86; // [esp+1Ch] [ebp-8Ch] BYREF
  HDC v87; // [esp+20h] [ebp-88h]
  int *v88; // [esp+24h] [ebp-84h]
  int v89; // [esp+28h] [ebp-80h] BYREF
  int v90; // [esp+2Ch] [ebp-7Ch]
  int v91; // [esp+30h] [ebp-78h] BYREF
  int v92; // [esp+34h] [ebp-74h]
  int v93; // [esp+38h] [ebp-70h] BYREF
  HDC v94; // [esp+3Ch] [ebp-6Ch]
  int v95; // [esp+40h] [ebp-68h]
  _DWORD v96[7]; // [esp+44h] [ebp-64h] BYREF
  _DWORD v97[17]; // [esp+60h] [ebp-48h] BYREF

  v4 = BugCheckParameter2;
  v86 = 0;
  v91 = 0;
  v92 = 0;
  memset(v97, 0, 0x40u);
  v5 = *(_DWORD *)(BugCheckParameter2 + 20);
  v87 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v23 = (*(_DWORD *)(v5 + 144) & 0x800) == 0;
  memset(v96, 0, sizeof(v96));
  v82 = v96;
  if ( !v23 )
    return 0;
  v6 = *(_WORD *)(v5 + 30);
  v7 = a2;
  if ( v6 != 666 )
  {
    if ( v6 )
      return 0;
    if ( a2 != 1 )
      return xxxDefWindowProc(BugCheckParameter2, a2, (int)a3, (int)a4);
    v9 = *(_DWORD *)(v5 + 160);
    v10 = *(unsigned __int16 *)(_gpsi + 164);
    if ( v9 + 204 >= v10 )
    {
      v17 = *(_DWORD *)(BugCheckParameter2 + 164);
      if ( !v17 )
      {
LABEL_26:
        *(_WORD *)(*(_DWORD *)(BugCheckParameter2 + 20) + 30) = 666;
        goto LABEL_27;
      }
      v18 = 0;
      if ( v9 )
      {
        while ( !*(_BYTE *)(v17 + v18) )
        {
          if ( ++v18 >= v9 )
            goto LABEL_24;
        }
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        v5 = *(_DWORD *)(BugCheckParameter2 + 20);
      }
LABEL_24:
      memset(*(void **)(BugCheckParameter2 + 164), 0, *(_DWORD *)(v5 + 160));
    }
    else
    {
      if ( v9 + *(_DWORD *)(v5 + 128) + 204 < v10 )
        return 0;
      v11 = v10 - 204;
      v12 = Win32AllocPoolZInit(v11, 1937208149);
      if ( !v12 )
        return 0;
      v13 = *(_DWORD *)(BugCheckParameter2 + 164);
      if ( v13 )
      {
        v14 = 0;
        v15 = *(_DWORD *)(*(_DWORD *)(BugCheckParameter2 + 20) + 160);
        if ( v15 )
        {
          while ( !*(_BYTE *)(v13 + v14) )
          {
            if ( ++v14 >= v15 )
              goto LABEL_16;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        }
LABEL_16:
        Win32FreePool(*(_DWORD *)(BugCheckParameter2 + 164));
      }
      v16 = *(_DWORD *)(BugCheckParameter2 + 20);
      *(_DWORD *)(BugCheckParameter2 + 164) = v12;
      *(_DWORD *)(v16 + 160) = v11;
    }
    v7 = 1;
    goto LABEL_26;
  }
LABEL_27:
  v19 = *(int **)(BugCheckParameter2 + 164);
  v88 = v19;
  *v19 = BugCheckParameter2;
  v20 = *(_DWORD *)(BugCheckParameter2 + 20);
  v21 = *(_BYTE *)(v20 + 20);
  v89 = v21;
  v22 = v21 & 0x18;
  v90 = v22;
  if ( v7 <= 0xE2 )
  {
    if ( v7 != 226 )
    {
      if ( v7 <= 0x14 )
      {
        if ( v7 != 20 )
        {
          if ( v7 != 1 )
          {
            switch ( v7 )
            {
              case 5u:
                if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 60) != BugCheckParameter2 )
                  return 0;
                zzzDestroyCaret((struct tagWND *)5);
                break;
              case 7u:
                break;
              case 8u:
                zzzDestroyCaret((struct tagWND *)8);
                return 0;
              case 0xAu:
                _InterlockedIncrement(&glSendMessage);
                return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0xE4u, a3 != 0 ? 0 : 3, 0, 0, 0, 0, 1u, 1);
              default:
                v23 = v7 == 15;
                goto LABEL_142;
            }
            SBCtlSetup(v19);
            v24 = v19[1];
            v25 = *v19;
            if ( v24 )
              v26 = *(_DWORD *)(*(_DWORD *)(v25 + 20) + 60) - *(_DWORD *)(*(_DWORD *)(v25 + 20) + 52);
            else
              v26 = v19[11];
            v27 = v26 - 4;
            if ( v24 )
              v28 = v19[11];
            else
              v28 = *(_DWORD *)(*(_DWORD *)(v25 + 20) + 64) - *(_DWORD *)(*(_DWORD *)(v25 + 20) + 56);
            xxxCreateCaret((struct tagEVENTHOOK *)v25, 1, v27, v28 - 4);
            zzzSetSBCaretPos(v19);
            zzzShowCaret((struct tagWND *)*v19);
            return 0;
          }
          if ( !a4 )
          {
            UserSetLastError((struct _NT_TIB *)0x57);
            return 0;
          }
          v29 = a4[7];
          v80 = *(_BYTE *)(v20 + 23) & 0xC0;
          v30 = a4[6];
          v86 = a4[5];
          v31 = a4[4];
          v81 = v30;
          v83 = v31;
          if ( v29 == 0x80000000 )
          {
            if ( v80 )
              v29 = 0;
            else
              v29 = *(_DWORD *)(v20 + 52);
          }
          if ( v30 == 0x80000000 )
          {
            if ( v80 )
              v30 = 0;
            else
              v30 = *(_DWORD *)(v20 + 56);
            v81 = v30;
          }
          if ( v86 == 0x80000000 )
          {
            if ( v80 )
              v86 = 0;
            else
              v86 = *(_DWORD *)(v20 + 60) - *(_DWORD *)(v20 + 52);
          }
          if ( v31 == 0x80000000 )
          {
            if ( v80 )
              v83 = 0;
            else
              v83 = *(_DWORD *)(v20 + 64) - *(_DWORD *)(v20 + 56);
          }
          v86 += v29;
          v32 = v88;
          v79 = v83 + v30;
          if ( (*(_BYTE *)(v20 + 13) & 2) == 0 )
          {
            *(_DWORD *)(v20 + 20) &= 0xFFCFFFFF;
            v4 = *v32;
          }
          v33 = v90;
          if ( !v90 )
          {
            v34 = *a4;
            v32[3] = (unsigned __int16)*a4;
            v32[6] = (unsigned __int16)v34;
            v32[4] = HIWORD(v34);
            v35 = *(_BYTE *)(*(_DWORD *)(v4 + 20) + 20) & 1;
            v32[5] = 0;
            v32[1] = v35;
          }
          if ( (*(_DWORD *)(*(_DWORD *)(v4 + 20) + 20) & 0x8000000) != 0 )
            v32[2] = 3;
          if ( (v89 & 6) == 0 )
            return 0;
          if ( v33 )
          {
            DpiForSystem = GetDpiForSystem();
            DpiDependentMetric = GetDpiDependentMetric(0, DpiForSystem);
            v37 = GetDpiForSystem();
            v38 = GetDpiDependentMetric(1, v37);
            if ( (v89 & 4) != 0 )
            {
              v29 = v86 - DpiDependentMetric;
              v39 = v79 - v38;
            }
            else
            {
              v39 = v81;
            }
            v40 = v29 + DpiDependentMetric;
            v41 = v39 + v38;
            goto LABEL_87;
          }
          if ( (v89 & 1) != 0 )
          {
            if ( (v89 & 2) != 0 )
            {
              v42 = GetDpiForSystem();
              v43 = GetDpiDependentMetric(0, v42);
              v39 = v81;
              v40 = v29 + v43;
              v41 = v79;
LABEL_87:
              v49 = v40 - v29;
              v50 = v41 - v39;
              v85 = 0x7FFF;
              if ( v29 <= 0x7FFF )
              {
                if ( v29 < -32768 )
                  v29 = -32768;
              }
              else
              {
                v29 = 0x7FFF;
              }
              if ( v39 <= 0x7FFF )
              {
                v85 = -32768;
                if ( v39 >= -32768 )
                  v85 = v39;
              }
              ConstrainIntToPositive2xShortRange(v49);
              v51 = ConstrainIntToPositive2xShortRange(v50);
              xxxMoveWindow((_DWORD *)*v32, v29, v85, v52, v51, 0);
              return 0;
            }
            v44 = GetDpiForSystem();
            v45 = GetDpiDependentMetric(0, v44);
            v39 = v81;
            v29 = v86 - v45;
          }
          else
          {
            if ( (v89 & 2) == 0 )
            {
              v48 = GetDpiForSystem();
              v41 = v79;
              v39 = v79 - GetDpiDependentMetric(1, v48);
              goto LABEL_86;
            }
            v46 = GetDpiForSystem();
            v47 = GetDpiDependentMetric(1, v46);
            v39 = v81;
            v79 = v81 + v47;
          }
          v41 = v79;
LABEL_86:
          v40 = v86;
          goto LABEL_87;
        }
        return 1;
      }
      if ( v7 != 123 )
      {
        if ( v7 == 132 )
        {
          if ( (v89 & 0x10) != 0 )
            return (((unsigned __int8)~*(_BYTE *)(v20 + 18) ^ (unsigned int)*(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(BugCheckParameter2 + 56) + 20)
                                                                                               + 17)) >> 6) & 1 | 0x10;
          return xxxDefWindowProc(BugCheckParameter2, v7, (int)a3, (int)a4);
        }
        if ( v7 == 135 )
          return 1;
        if ( v7 != 224 )
        {
          if ( v7 == 225 )
            return v19[6];
          return xxxDefWindowProc(BugCheckParameter2, v7, (int)a3, (int)a4);
        }
        v53 = (int)a4;
        v96[1] = 4100;
        v96[5] = a3;
        goto LABEL_122;
      }
      v54 = *(HDC *)(BugCheckParameter2 + 56);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v93 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v93;
      v94 = v54;
      if ( v54 )
        HMLockObject(v54);
      xxxDoScrollMenu(*(_DWORD **)(*v19 + 56), (int *)*v19, v19[1], (int)a4);
LABEL_109:
      ThreadUnlock1();
      return 0;
    }
    v53 = (int)v87;
LABEL_121:
    v96[2] = a3;
    v96[3] = a4;
    v96[1] = 4097;
LABEL_122:
    v96[0] = 28;
    goto LABEL_123;
  }
  if ( v7 > 0xEB )
  {
    switch ( v7 )
    {
      case 0x100u:
        v74 = 7;
        switch ( (unsigned int)a3 )
        {
          case '!':
            v76 = 2;
            goto LABEL_169;
          case '"':
            v76 = 3;
            goto LABEL_169;
          case '#':
            goto LABEL_174;
          case '$':
            v76 = 6;
LABEL_169:
            v74 = v76;
            goto LABEL_174;
          case '%':
          case '&':
            v74 = 0;
            goto LABEL_174;
          case '\'':
          case '(':
            v74 = 1;
LABEL_174:
            xxxDoScroll(
              *(void **)(BugCheckParameter2 + 56),
              (int *)BugCheckParameter2,
              (struct tagWND *)v74,
              0,
              v19[1],
              (int)v77,
              (int)v78);
            break;
          default:
            return 0;
        }
        return 0;
      case 0x101u:
        if ( (unsigned int)a3 - 33 <= 7 )
          xxxDoScroll(
            *(void **)(BugCheckParameter2 + 56),
            (int *)BugCheckParameter2,
            (struct tagWND *)8,
            0,
            v19[1],
            (int)v77,
            (int)v78);
        return 0;
      case 0x201u:
        goto LABEL_156;
    }
    if ( v7 != 515 )
    {
      v23 = v7 == 792;
LABEL_142:
      if ( !v23 )
        return xxxDefWindowProc(BugCheckParameter2, v7, (int)a3, (int)a4);
      if ( a3 )
        v65 = (HDC)a3;
      else
        v65 = (HDC)xxxBeginPaint((struct tagVWPL **)BugCheckParameter2, v97);
      if ( v90 )
      {
        v66 = *v19;
        v87 = (HDC)(*(_BYTE *)(*(_DWORD *)(*v19 + 20) + 22) & 4);
        if ( !v87 )
        {
          SetOrClrWF(1, v66, 0xE04u, 1);
          v66 = *v19;
        }
        DrawSize(v66, v65, 0, 0);
        if ( !v87 )
          SetOrClrWF(0, *v19, 0xE04u, 1);
      }
      else
      {
        SBCtlSetup(v19);
        xxxDrawSB2(v19 + 3, *v19, v65, (struct tagSBCALC *)v19[1], (HDC)v19[2], (int)v77, (unsigned int)v78);
      }
      if ( !a3 )
        xxxEndPaint((struct tagVWPL **)*v19, v97);
      return 0;
    }
    if ( v22 )
    {
      v68 = 61488;
    }
    else
    {
LABEL_156:
      if ( !v22 )
      {
        if ( (*(_BYTE *)(v20 + 22) & 1) != 0 )
        {
          xxxSetFocus((int *)BugCheckParameter2);
          v4 = *v19;
        }
        zzzHideCaret((struct tagWND *)v4);
        SBCtlSetup(v19);
        KeyState = _GetKeyState(16);
        xxxSBTrackInit((_DWORD *)*v19, (unsigned int)a4, 0, KeyState < 0);
        return 0;
      }
      v68 = 61440;
    }
    v91 = (__int16)a4;
    v92 = SHIWORD(a4);
    _ClientToScreen(BugCheckParameter2, &v91);
    v87 = *(HDC *)(BugCheckParameter2 + 56);
    v90 = (unsigned __int16)v91 | ((unsigned __int16)v92 << 16);
    v69 = *((_DWORD *)v87 + 5);
    LOBYTE(v4) = ~*(_BYTE *)(v69 + 18);
    v70 = ((*(unsigned __int8 *)(v69 + 17) ^ (unsigned int)v4) >> 6) & 1;
    v71 = KeGetCurrentThread();
    v72 = W32GetThreadWin32Thread(v71);
    v93 = *(_DWORD *)(v72 + 228);
    *(_DWORD *)(v72 + 228) = &v93;
    v94 = v87;
    if ( v87 )
      HMLockObject(v87);
    v73 = *(_DWORD *)(*v19 + 56);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(v73, 0x112u, v68 | (v70 + 7), v90, 0, 0, 0, 1u, 1);
    goto LABEL_109;
  }
  switch ( v7 )
  {
    case 0xEBu:
      return xxxGetScrollBarInfo(BugCheckParameter2, -4, a4);
    case 0xE3u:
      *a3 = v19[3];
      *a4 = v19[4];
      return *((unsigned __int16 *)v19 + 6) | (*((unsigned __int16 *)v19 + 8) << 16);
    case 0xE4u:
      return xxxEnableSBCtlArrows((struct tagEVENTHOOK *)BugCheckParameter2, (int)a3);
    case 0xE6u:
      v53 = 1;
      goto LABEL_121;
  }
  if ( v7 != 233 )
  {
    if ( v7 == 234 )
      return _SBGetParms(BugCheckParameter2, 2, v19 + 3, a4);
    return xxxDefWindowProc(BugCheckParameter2, v7, (int)a3, (int)a4);
  }
  v53 = (int)a3;
  v82 = a4;
LABEL_123:
  v89 = 1;
  if ( SBSetParms(v82, v19 + 3, (struct tagSBDATA *)&v89, (struct tagSCROLLINFO *)&v86, v77, v78) )
    xxxWindowEvent(0x800Eu, (struct tagEVENTHOOK *)*v19, 0xFFFFFFFC, 0, 1);
  if ( v53 )
  {
    zzzHideCaret((struct tagWND *)*v19);
    SBCtlSetup(v19);
    zzzSetSBCaretPos(v19);
    v57 = (struct tagWND *)*v19;
    if ( _FChildVisible(*v19) )
    {
      if ( v89 || (v82[1] & 8) == 0 )
        v58 = 0;
      else
        v58 = 3;
      xxxEnableScrollBar((int)v57, 2, v58);
      DCEx = (HDC)_GetDCEx(*v19, 0, 65537);
      v60 = (int *)*v19;
      v61 = DCEx;
      v87 = DCEx;
      ColorObjects = xxxGetColorObjects(v60, (int)DCEx);
      v63 = GreSelectBrush(v61, ColorObjects);
      v75 = ColorObjects;
      v64 = v87;
      DrawThumb2(*v88, v88 + 3, v87, v75, (HBRUSH)v88[1], v88[2]);
      GreSelectBrush(v64, v63);
      _ReleaseDC(v64);
      v57 = (struct tagWND *)*v88;
    }
    zzzShowCaret(v57);
  }
  return v86;
}
