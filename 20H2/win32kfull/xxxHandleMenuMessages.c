/*
 * XREFs of xxxHandleMenuMessages @ 0x1C0233AC8
 * Callers:
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236BD0 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C0108870 (xxxTranslateMessage.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     IsPointerPrimary @ 0x1C01F1E48 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0233714 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C02337C4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C0236568 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C02365C8 (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0236AEC (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0236DBC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0236EBC (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0237EB8 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B434 (xxxMNSwitchToAlternateMenu.c)
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
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // rax
  struct _LARGE_STRING *v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v83; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v85; // rax
  _QWORD *v86; // rax
  unsigned __int64 v87; // rcx
  unsigned int v88; // [rsp+28h] [rbp-49h] BYREF
  __int64 v89; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v90[2]; // [rsp+38h] [rbp-39h] BYREF
  int v91; // [rsp+48h] [rbp-29h]
  __int64 v92; // [rsp+50h] [rbp-21h] BYREF
  __int64 v93; // [rsp+58h] [rbp-19h]
  __int128 v94; // [rsp+60h] [rbp-11h] BYREF
  __int64 v95; // [rsp+70h] [rbp-1h]
  __int128 v96; // [rsp+78h] [rbp+7h] BYREF
  __int64 v97; // [rsp+88h] [rbp+17h]
  _QWORD v98[3]; // [rsp+90h] [rbp+1Fh] BYREF

  v97 = 0LL;
  v95 = 0LL;
  v3 = *a3;
  v96 = 0LL;
  v94 = 0LL;
  v7 = *v3;
  v88 = 0;
  if ( !*(_QWORD *)(v7 + 40) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(unsigned int *)(a1 + 16);
  v89 = v9;
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
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v89);
        if ( xxxMNFindWindowFromPoint(a3, &v88, (unsigned int)v89) )
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
            && !xxxMNFindWindowFromPoint(a3, &v88, (unsigned int)v9) )
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
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v89);
      v45 = xxxMNFindWindowFromPoint(a3, &v88, (unsigned int)v89);
      if ( !v45 && !v88 )
        goto LABEL_84;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v45 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
        v45 = 0xFFFFFFFFLL;
      }
      if ( v45 == 0xFFFFFFFFLL )
      {
        xxxMNDoubleClick(a2, a3, v88);
        return 1LL;
      }
      if ( !(unsigned int)IsMFMWFPWindow(v45) )
        goto LABEL_84;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v96 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v96;
      *((_QWORD *)&v96 + 1) = v45;
      if ( v45 )
        HMLockObject(v45);
      v33 = v88;
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
          v92 = *(_QWORD *)(a2 + 56);
          v93 = v92;
          v41 = *(_DWORD *)(gpsi + 2168LL);
          LODWORD(v92) = v92 - v41;
          LODWORD(v93) = v41 + v93;
          v42 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v92) -= v42;
          HIDWORD(v93) += v42;
          LODWORD(v89) = (__int16)v9;
          HIDWORD(v89) = SWORD1(v9);
          if ( !PtInRect(&v92, v89) )
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
    *(_QWORD *)&v94 = *(_QWORD *)(v32 + 416);
    *(_QWORD *)(v32 + 416) = &v94;
    *((_QWORD *)&v94 + 1) = v31;
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
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v90, 0LL);
          v68 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56), v65, v66, v67);
          if ( v68 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v90, *(_QWORD *)(v68 + 8));
            if ( *(_QWORD *)v90[0] )
            {
              v69 = *(_QWORD *)v90[0];
              if ( *(int *)(*(_QWORD *)v90[0] + 80LL) >= 0 )
              {
                v69 = *(_QWORD *)v90[0];
                if ( *(_QWORD *)(*(_QWORD *)v90[0] + 8LL) )
                {
                  v98[2] = 0LL;
                  v70 = *(_QWORD *)(*(_QWORD *)v90[0] + 8LL);
                  v71 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v98[0] = *(_QWORD *)(v71 + 416);
                  *(_QWORD *)(v71 + 416) = v98;
                  v98[1] = v70;
                  HMLockObject(v70);
                  if ( *(_QWORD *)(*(_QWORD *)v90[0] + 40LL) )
                    v72 = **(struct _LARGE_STRING ***)(*(_QWORD *)v90[0] + 40LL);
                  else
                    v72 = 0LL;
                  xxxSendMessage(
                    *(_QWORD *)(*(_QWORD *)v90[0] + 8LL),
                    0x122u,
                    *(unsigned int *)(*(_QWORD *)v90[0] + 80LL),
                    v72);
                  ThreadUnlock1(v74, v73, v75);
                }
              }
            }
          }
          CurrentThread = KeGetCurrentThread();
          v77 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v69)
            || (CurrentProcess = PsGetCurrentProcess(v79, v78, v80),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v83),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            v85 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( v85 )
              v77 = *v85;
          }
          if ( v90[0] != gSmartObjNullRef && !--*(_DWORD *)(v90[0] + 8LL) )
          {
            if ( *(_BYTE *)(v90[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v90[0]);
          }
          v86 = *(_QWORD **)(v77 + 1472);
          if ( v86 )
            *(_QWORD *)(v77 + 1472) = *v86;
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
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v89);
    v16 = WORD1(v89);
    v17 = (unsigned int)v89;
    *(_DWORD *)(a2 + 12) = (__int16)v89;
    *(_DWORD *)(a2 + 16) = v16;
    v18 = xxxMNFindWindowFromPoint(a3, &v88, v17);
    v91 = IsMFMWFPWindow(v18);
    if ( v91 )
    {
      v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v96 = *(_QWORD *)(v19 + 416);
      *(_QWORD *)(v19 + 416) = &v96;
      *((_QWORD *)&v96 + 1) = v18;
      if ( v18 )
        HMLockObject(v18);
    }
    v20 = *(_DWORD *)(a2 + 8);
    v21 = v88;
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
        xxxMNButtonDown(a3, a2, v88, 1LL);
        goto LABEL_149;
      }
      if ( (unsigned int)IsMFMWFPWindow(v18) )
      {
        xxxSendMessage(v87, 0x1EDu, v88, 0LL);
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
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v89);
  v53 = WORD1(v89);
  v54 = (unsigned int)v89;
  *(_DWORD *)(a2 + 12) = (__int16)v89;
  *(_DWORD *)(a2 + 16) = v53;
  v55 = xxxMNFindWindowFromPoint(a3, &v88, v54);
  v91 = IsMFMWFPWindow(v55);
  v56 = v91;
  if ( v91 )
  {
    v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v96 = *(_QWORD *)(v57 + 416);
    *(_QWORD *)(v57 + 416) = &v96;
    *((_QWORD *)&v96 + 1) = v55;
    if ( v55 )
      HMLockObject(v55);
  }
  v23 = (_DWORD *)**a3;
  if ( (*v23 & 2) != 0 )
  {
    v58 = v88;
    if ( !v55 && !v88 )
      goto LABEL_147;
    if ( v55 == 0xFFFFFFFF )
    {
      if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
        goto LABEL_147;
LABEL_119:
      xxxMNButtonUp(a3, a2, v88, 0LL);
      goto LABEL_151;
    }
    goto LABEL_121;
  }
  if ( v55 || v88 || (*(_DWORD *)**a3 & 0x200) != 0 )
  {
    v23 = (_DWORD *)**a3;
    *v23 &= ~0x200u;
    if ( v55 == 0xFFFFFFFF )
      goto LABEL_119;
    v58 = v88;
LABEL_121:
    if ( v56 )
      xxxSendMessage(v55, 0x1EFu, v58, (struct _LARGE_STRING *)v89);
    else
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
    goto LABEL_151;
  }
  v59 = *(_QWORD *)(**a3 + 16);
  v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v94 = *(_QWORD *)(v60 + 416);
  *(_QWORD *)(v60 + 416) = &v94;
  *((_QWORD *)&v94 + 1) = v59;
  if ( v59 )
    HMLockObject(v59);
  xxxSendMessage(*(_QWORD *)(**a3 + 16), 0x1E6u, 0LL, 0LL);
  ThreadUnlock1(v62, v61, v63);
LABEL_151:
  if ( v91 )
    goto LABEL_152;
  return 1LL;
}
