/*
 * XREFs of xxxHandleMenuMessages @ 0x1C0234958
 * Callers:
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0237A60 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C0107B70 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01F2AB8 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C02345A4 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0234654 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C02373F8 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C023742C (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C0237458 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C023797C (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0237C4C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0237D4C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0238274 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0238D48 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02390A0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023C2C4 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v3; // rax
  __int64 v7; // rdx
  __int64 v9; // r14
  unsigned int v10; // eax
  unsigned __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int16 v16; // ecx^2
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  int v40; // r9d
  int v41; // eax
  int v42; // edx
  __int64 MenuStateWindow; // rax
  int v44; // r9d
  __int64 v45; // rsi
  __int64 ThreadWin32Thread; // rax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  __int16 v53; // ecx^2
  __int64 v54; // r8
  unsigned __int64 v55; // rsi
  int v56; // r15d
  __int64 v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  bool v64; // zf
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rax
  struct _LARGE_STRING *v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v80; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v82; // rax
  _QWORD *v83; // rax
  unsigned __int64 v84; // rcx
  unsigned int v85; // [rsp+28h] [rbp-49h] BYREF
  __int64 v86; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v87[2]; // [rsp+38h] [rbp-39h] BYREF
  int v88; // [rsp+48h] [rbp-29h]
  __int64 v89; // [rsp+50h] [rbp-21h] BYREF
  __int64 v90; // [rsp+58h] [rbp-19h]
  __int128 v91; // [rsp+60h] [rbp-11h] BYREF
  __int64 v92; // [rsp+70h] [rbp-1h]
  __int128 v93; // [rsp+78h] [rbp+7h] BYREF
  __int64 v94; // [rsp+88h] [rbp+17h]
  _QWORD v95[3]; // [rsp+90h] [rbp+1Fh] BYREF

  v94 = 0LL;
  v92 = 0LL;
  v3 = *a3;
  v93 = 0LL;
  v91 = 0LL;
  v7 = *v3;
  v85 = 0;
  if ( !*(_QWORD *)(v7 + 40) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(unsigned int *)(a1 + 16);
  v86 = v9;
  if ( v10 > 0x105 )
  {
    if ( v10 > 0x203 )
    {
      v47 = v10 - 516;
      if ( !v47 )
      {
LABEL_12:
        if ( (*(_DWORD *)**a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_153:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v86);
        if ( xxxMNFindWindowFromPoint(a3, &v85, (unsigned int)v86) )
        {
          v64 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_155:
          if ( v64 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          return 1LL;
        }
LABEL_84:
        xxxMNCancel(a2, 0, 0);
        return 1LL;
      }
      v48 = v47 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          v50 = v49 - 60;
          if ( (!v50 || v50 == 4)
            && IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16))
            && !xxxMNFindWindowFromPoint(a3, &v85, (unsigned int)v9) )
          {
            xxxMNCancel(a2, 0, 0);
          }
          return 0LL;
        }
        goto LABEL_153;
      }
      goto LABEL_97;
    }
    if ( v10 == 515 )
    {
LABEL_76:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v86);
      v45 = xxxMNFindWindowFromPoint(a3, &v85, (unsigned int)v86);
      if ( !v45 && !v85 )
        goto LABEL_84;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v45 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v45 = 0xFFFFFFFFLL;
      }
      if ( v45 == 0xFFFFFFFFLL )
      {
        xxxMNDoubleClick(a2, a3, v85);
        return 1LL;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v45) )
        goto LABEL_84;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v93 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v93;
      *((_QWORD *)&v93 + 1) = v45;
      if ( v45 )
        HMLockObject(v45);
      v33 = v85;
      v34 = 497;
      v35 = v45;
LABEL_88:
      xxxSendMessage(v35, v34, v33, 0LL);
LABEL_152:
      ThreadUnlock1(v23, v22, v24);
      return 1LL;
    }
    v36 = v10 - 262;
    if ( v36 )
    {
      v37 = v36 - 18;
      if ( !v37 )
        return 1LL;
      v38 = v37 - 232;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( !v39 )
          goto LABEL_13;
        if ( v39 != 1 )
          return 0LL;
        goto LABEL_98;
      }
LABEL_65:
      v40 = *(_DWORD *)(a2 + 8);
      if ( (v40 & 0x400) != 0 && (v40 & 8) != 0 && (v40 & 0x80u) == 0 && (v40 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v89 = *(_QWORD *)(a2 + 56);
          v90 = v89;
          v41 = *(_DWORD *)(gpsi + 2168LL);
          LODWORD(v89) = v89 - v41;
          LODWORD(v90) = v41 + v90;
          v42 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v89) -= v42;
          HIDWORD(v90) += v42;
          LODWORD(v86) = (__int16)v9;
          HIDWORD(v86) = SWORD1(v9);
          if ( !PtInRect(&v89, v86) )
          {
            MenuStateWindow = GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v44 | 0x80;
              PostMessage(MenuStateWindow, 500, 0, 0);
            }
          }
        }
      }
      xxxMNMouseMove(a3, a2, (unsigned int)v9);
      return 1LL;
    }
    goto LABEL_74;
  }
  if ( v10 == 261 )
  {
    if ( (_DWORD)v11 == 18 || (_DWORD)v11 == 121 )
      return 1LL;
    goto LABEL_55;
  }
  if ( v10 > 0xA5 )
  {
    v25 = v10 - 166;
    if ( !v25 )
      goto LABEL_153;
    v26 = v25 - 90;
    if ( !v26 )
    {
LABEL_32:
      v29 = *(_DWORD *)(a2 + 8);
      if ( (v29 & 8) != 0 && (_DWORD)v11 != 112 )
      {
        if ( (v29 & 0x80u) == 0 || (_DWORD)v11 != 27 )
          return 1LL;
        v30 = v29 | 0x2000;
        goto LABEL_37;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( (_DWORD)v11 == 3 )
        goto LABEL_47;
      if ( (_DWORD)v11 == 9 )
      {
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56) )
          goto LABEL_84;
      }
      else if ( (_DWORD)v11 == 13
             || (_DWORD)v11 == 18
             || (_DWORD)v11 == 27
             || (unsigned int)v11 > 0x24 && ((unsigned int)v11 <= 0x28 || (_DWORD)v11 == 112 || (_DWORD)v11 == 121) )
      {
LABEL_47:
        if ( !*(_QWORD *)(**a3 + 56) )
        {
          xxxMNKeyDown(a3, a2, (unsigned int)v11);
          return 1LL;
        }
        goto LABEL_48;
      }
LABEL_55:
      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
        xxxTranslateMessage(a1, 0);
      return 1LL;
    }
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_55;
    v28 = v27 - 1;
    if ( v28 )
    {
      if ( v28 != 2 )
        return 0LL;
      goto LABEL_32;
    }
LABEL_74:
    if ( !*(_QWORD *)(**a3 + 56) )
    {
      xxxMNChar(a3, a2, (unsigned int)v11);
      return 1LL;
    }
LABEL_48:
    v31 = *(_QWORD *)(**a3 + 56);
    v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v91 = *(_QWORD *)(v32 + 408);
    *(_QWORD *)(v32 + 408) = &v91;
    *((_QWORD *)&v91 + 1) = v31;
    HMLockObject(v31);
    v33 = v11;
    v34 = *(_DWORD *)(a1 + 8);
    v35 = *(_QWORD *)(**a3 + 56);
    goto LABEL_88;
  }
  if ( v10 == 165 )
  {
LABEL_97:
    if ( (*(_DWORD *)**a3 & 0x40) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      {
        if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v87, 0LL);
          v65 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56));
          if ( v65 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v87, *(_QWORD *)(v65 + 8));
            if ( *(_QWORD *)v87[0] )
            {
              v66 = *(_QWORD *)v87[0];
              if ( *(int *)(*(_QWORD *)v87[0] + 80LL) >= 0 )
              {
                v66 = *(_QWORD *)v87[0];
                if ( *(_QWORD *)(*(_QWORD *)v87[0] + 8LL) )
                {
                  v95[2] = 0LL;
                  v67 = *(_QWORD *)(*(_QWORD *)v87[0] + 8LL);
                  v68 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v95[0] = *(_QWORD *)(v68 + 408);
                  *(_QWORD *)(v68 + 408) = v95;
                  v95[1] = v67;
                  HMLockObject(v67);
                  if ( *(_QWORD *)(*(_QWORD *)v87[0] + 40LL) )
                    v69 = **(struct _LARGE_STRING ***)(*(_QWORD *)v87[0] + 40LL);
                  else
                    v69 = 0LL;
                  xxxSendMessage(
                    *(_QWORD *)(*(_QWORD *)v87[0] + 8LL),
                    0x122u,
                    *(unsigned int *)(*(_QWORD *)v87[0] + 80LL),
                    v69);
                  ThreadUnlock1(v71, v70, v72);
                }
              }
            }
          }
          CurrentThread = KeGetCurrentThread();
          v74 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v66)
            || (CurrentProcess = PsGetCurrentProcess(v76, v75, v77),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v80),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            v82 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( v82 )
              v74 = *v82;
          }
          if ( v87[0] != gSmartObjNullRef && !--*(_DWORD *)(v87[0] + 8LL) )
          {
            if ( *(_BYTE *)(v87[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v87[0]);
          }
          v83 = *(_QWORD **)(v74 + 1464);
          if ( v83 )
            *(_QWORD *)(v74 + 1464) = *v83;
        }
        return 0LL;
      }
      v64 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
      goto LABEL_155;
    }
    goto LABEL_98;
  }
  v12 = v10 - 160;
  if ( !v12 )
    goto LABEL_65;
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_13:
    *(_DWORD *)(a2 + 20) = -1;
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v86);
    v16 = WORD1(v86);
    v17 = (unsigned int)v86;
    *(_DWORD *)(a2 + 12) = (__int16)v86;
    *(_DWORD *)(a2 + 16) = v16;
    v18 = xxxMNFindWindowFromPoint(a3, &v85, v17);
    v88 = IsMFMWFPWindow(v18);
    if ( v88 )
    {
      v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v93 = *(_QWORD *)(v19 + 408);
      *(_QWORD *)(v19 + 408) = &v93;
      *((_QWORD *)&v93 + 1) = v18;
      if ( v18 )
        HMLockObject(v18);
    }
    v20 = *(_DWORD *)(a2 + 8);
    v21 = v85;
    if ( (v20 & 0x400) != 0 )
    {
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 72) = v21;
      LockMFMWFPWindow(a2 + 64, v18);
      v20 = *(_DWORD *)(a2 + 8);
    }
    if ( (v20 & 0x500) != 0 )
      *(_DWORD *)(a2 + 76) = ((v11 & 2) != 0) + 1;
    if ( v18 || v21 )
    {
      if ( (*(_DWORD *)**a3 & 2) != 0 && v18 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v18 = 0xFFFFFFFFLL;
      }
      if ( v18 == 0xFFFFFFFFLL )
      {
        xxxMNButtonDown(a3, a2, v85, 1LL);
        goto LABEL_149;
      }
      if ( (unsigned int)IsMFMWFPWindow(v18) )
      {
        xxxSendMessage(v84, 0x1EDu, v85, 0LL);
LABEL_149:
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
        goto LABEL_151;
      }
    }
LABEL_147:
    xxxMNCancel(a2, 0, 0);
    goto LABEL_151;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
        goto LABEL_12;
      return 0LL;
    }
    goto LABEL_76;
  }
LABEL_98:
  v51 = *(_DWORD *)(a2 + 8);
  if ( (v51 & 8) == 0 )
    return 1LL;
  if ( (v51 & 0x400) != 0 )
  {
    UnlockMFMWFPWindow(a2 + 64);
    v52 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
    *(_DWORD *)(a2 + 8) = v52;
    if ( (v52 & 0x2000) != 0 )
    {
      v30 = v52 & 0xFFFFDFF7;
LABEL_37:
      *(_DWORD *)(a2 + 8) = v30;
      return 1LL;
    }
  }
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v86);
  v53 = WORD1(v86);
  v54 = (unsigned int)v86;
  *(_DWORD *)(a2 + 12) = (__int16)v86;
  *(_DWORD *)(a2 + 16) = v53;
  v55 = xxxMNFindWindowFromPoint(a3, &v85, v54);
  v88 = IsMFMWFPWindow(v55);
  v56 = v88;
  if ( v88 )
  {
    v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v93 = *(_QWORD *)(v57 + 408);
    *(_QWORD *)(v57 + 408) = &v93;
    *((_QWORD *)&v93 + 1) = v55;
    if ( v55 )
      HMLockObject(v55);
  }
  v23 = (_DWORD *)**a3;
  if ( (*v23 & 2) != 0 )
  {
    v58 = v85;
    if ( !v55 && !v85 )
      goto LABEL_147;
    if ( v55 == 0xFFFFFFFF )
    {
      if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
        goto LABEL_147;
LABEL_119:
      xxxMNButtonUp(a3, a2, v85, 0LL);
      goto LABEL_151;
    }
    goto LABEL_121;
  }
  if ( v55 || v85 || (*(_DWORD *)**a3 & 0x200) != 0 )
  {
    v23 = (_DWORD *)**a3;
    *v23 &= ~0x200u;
    if ( v55 == 0xFFFFFFFF )
      goto LABEL_119;
    v58 = v85;
LABEL_121:
    if ( v56 )
      xxxSendMessage(v55, 0x1EFu, v58, (struct _LARGE_STRING *)v86);
    else
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
    goto LABEL_151;
  }
  v59 = *(_QWORD *)(**a3 + 16);
  v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v91 = *(_QWORD *)(v60 + 408);
  *(_QWORD *)(v60 + 408) = &v91;
  *((_QWORD *)&v91 + 1) = v59;
  if ( v59 )
    HMLockObject(v59);
  xxxSendMessage(*(_QWORD *)(**a3 + 16), 0x1E6u, 0LL, 0LL);
  ThreadUnlock1(v62, v61, v63);
LABEL_151:
  if ( v88 )
    goto LABEL_152;
  return 1LL;
}
