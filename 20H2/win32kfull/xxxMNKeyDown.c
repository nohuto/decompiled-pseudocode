/*
 * XREFs of xxxMNKeyDown @ 0x1C02385D8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     _GetSubMenu @ 0x1C007922C (_GetSubMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0234EC0 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0235BEC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C0236620 (LockPopupMenu.c)
 *     MNGetpItem @ 0x1C0236740 (MNGetpItem.c)
 *     UnlockPopupMenu @ 0x1C0236B20 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C023AFB4 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B434 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C02500DC (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C0250168 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C0250278 (MNFindNextValidItem.c)
 */

_QWORD *__fastcall xxxMNKeyDown(__int64 **a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  int MenuInheritedContextHelpId; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // edi
  int v17; // r12d
  int v18; // r13d
  int v19; // eax
  _BOOL8 v20; // r9
  __int64 v21; // r8
  int v22; // r15d
  struct _KTHREAD *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // r8
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 *SubMenu; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  _QWORD *v48; // r15
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // esi
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 *v55; // rax
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 *v60; // rax
  __int64 *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v72; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v75; // rbx
  __int64 v76; // rax
  _QWORD *v77; // r8
  int v78; // ecx
  struct _KTHREAD *v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  int v85; // ebx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 *v88; // rax
  _QWORD *result; // rax
  __int128 v90; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v91; // [rsp+40h] [rbp-C0h]
  _QWORD v92[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v93; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v94[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v95; // [rsp+78h] [rbp-88h] BYREF
  __int128 v96; // [rsp+80h] [rbp-80h]
  _QWORD v97[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v98[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v99[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v100[3]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v101[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v102[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v103[10]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v104; // [rsp+178h] [rbp+78h]
  BOOL v105; // [rsp+180h] [rbp+80h]
  int v106; // [rsp+188h] [rbp+88h]

  v90 = 0LL;
  v91 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v92, 0LL);
  v6 = *(unsigned int *)(a2 + 8);
  v104 = a3;
  if ( (v6 & 8) != 0 && a3 != 112 )
  {
    if ( (v6 & 0x80u) != 0LL && a3 == 27 )
    {
      LODWORD(v6) = v6 | 0x2000;
      *(_DWORD *)(a2 + 8) = v6;
    }
    goto LABEL_135;
  }
  switch ( a3 )
  {
    case 0xDu:
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v77 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(unsigned int *)(**a1 + 80));
        v78 = *(_DWORD *)(*v77 + 4LL) & 3;
        if ( v77[2] )
        {
          if ( !v78 )
            goto LABEL_131;
        }
        else if ( !v78 )
        {
          xxxMNDismissWithNotify(a2, (__int64)a1, (__int64)v77, *(_DWORD *)(**a1 + 80));
          goto LABEL_135;
        }
      }
      goto LABEL_134;
    case 0x12u:
LABEL_15:
      if ( (v6 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( a3 == 18 )
          *(_DWORD *)(a2 + 8) &= ~0x20u;
      }
      goto LABEL_135;
    case 0x1Bu:
      if ( (*(_DWORD *)**a1 & 1) == 0
        && **a1 != *(_QWORD *)(**a1 + 64)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 64) + 8LL) + 40LL) + 31LL) & 0x20) == 0 )
      {
        if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v93, *(_QWORD *)(**a1 + 64));
          **(_DWORD **)v93 &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          else
            xxxMNCloseHierarchy(*(_QWORD *)v93, a2);
          CurrentThread = KeGetCurrentThread();
          v24 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v65)
            || (CurrentProcess = PsGetCurrentProcess(v68, v67, v69),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v72),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v24 = *ThreadWin32Thread;
          }
          if ( v93 == gSmartObjNullRef )
            goto LABEL_62;
          if ( --*(_DWORD *)(v93 + 8) || !*(_BYTE *)(v93 + 12) )
            goto LABEL_62;
          v34 = v93;
          goto LABEL_61;
        }
        v75 = *(_QWORD *)(**a1 + 32);
        v76 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v90 = *(_QWORD *)(v76 + 416);
        *(_QWORD *)(v76 + 416) = &v90;
        *((_QWORD *)&v90 + 1) = v75;
        if ( v75 )
          HMLockObject(v75);
        v39 = 484;
        v38 = 0LL;
        goto LABEL_72;
      }
LABEL_134:
      xxxMNCancel(a2, 0, 0, 0LL);
      goto LABEL_135;
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
      goto LABEL_22;
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 != 112 )
        {
          if ( a3 != 121 )
            goto LABEL_135;
          goto LABEL_15;
        }
        v7 = MNGetpItem((__int64)a1, *(_DWORD *)(**a1 + 80));
        v6 = (__int64)*a1;
        if ( !*(_QWORD *)(**a1 + 8) || !v7 )
          goto LABEL_135;
        v8 = *(_QWORD *)(**a1 + 8);
        v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v90 = *(_QWORD *)(v9 + 416);
        *(_QWORD *)(v9 + 416) = &v90;
        *((_QWORD *)&v90 + 1) = v8;
        HMLockObject(v8);
        v10 = **a1;
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId(a1);
        xxxSendHelpMessage(*(_QWORD *)(v10 + 8), MenuInheritedContextHelpId);
LABEL_21:
        ThreadUnlock1(v13, v12, v14);
        goto LABEL_135;
      }
LABEL_22:
      if ( (*(_DWORD *)**a1 & 1) == 0 )
      {
        v15 = 0xFFFFFFFFLL;
        if ( a3 != 38 )
          v15 = 1LL;
        MNFindNextValidItem(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v15, 0LL);
LABEL_68:
        xxxMNSelectItem(a1, a2);
        goto LABEL_135;
      }
LABEL_131:
      xxxMNOpenHierarchy(a1, a2);
      goto LABEL_135;
    }
  }
  v16 = 1;
  v17 = 39;
  v18 = (*(_DWORD *)**a1 >> 22) & 1;
  v106 = (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1;
  if ( v106 != v18 )
  {
    v19 = 39;
    if ( a3 != 37 )
      v19 = 37;
    a3 = v19;
  }
  if ( (*(_DWORD *)**a1 & 1) != 0
    || a3 != 39
    || *(_QWORD *)(**a1 + 24)
    || xxxMNOpenHierarchy(a1, a2) != -1 && (v6 = **a1, (*(_DWORD *)v6 & 0x20) == 0) )
  {
    if ( *(_QWORD *)(**a1 + 24) )
    {
      v105 = 1;
      if ( a3 == 37 && (*(_DWORD *)**a1 & 1) == 0 )
      {
        xxxMNCloseHierarchy(**a1, a2);
        goto LABEL_135;
      }
    }
    else
    {
      v105 = (*(_DWORD *)**a1 & 0x400) != 0;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v92, **a1);
    v20 = (*(_DWORD *)**a1 & 2) != 0 && **a1 == *(_QWORD *)(**a1 + 64);
    v21 = -1LL;
    if ( a3 != 37 )
      v21 = 1LL;
    v22 = MNFindItemInColumn(*(_QWORD *)(**a1 + 40), *(unsigned int *)(**a1 + 80), v21, v20);
    if ( v22 != -1 )
      goto LABEL_66;
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      if ( v106 != v18 )
      {
        if ( a3 != 37 )
          v17 = 37;
        a3 = v17;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v94, *(_QWORD *)(**a1 + 64));
      xxxMNKeyDown(v94, a2, a3);
      v23 = KeGetCurrentThread();
      v24 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v25)
        || (v29 = PsGetCurrentProcess(v27, v26, v28),
            v30 = PsGetProcessSessionIdEx(v29),
            v32 = PsGetCurrentThreadProcess(v31),
            v30 == (unsigned int)PsGetProcessSessionIdEx(v32)) )
      {
        v33 = (__int64 *)PsGetThreadWin32Thread(v23);
        if ( v33 )
          v24 = *v33;
      }
      if ( v94[0] == gSmartObjNullRef )
        goto LABEL_62;
      if ( --*(_DWORD *)(v94[0] + 8LL) || !*(_BYTE *)(v94[0] + 12LL) )
        goto LABEL_62;
      v34 = v94[0];
LABEL_61:
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v34);
LABEL_62:
      v35 = *(_QWORD **)(v24 + 1472);
      if ( v35 )
        *(_QWORD *)(v24 + 1472) = *v35;
      goto LABEL_135;
    }
    v6 = **a1;
    if ( v6 == *(_QWORD *)(v6 + 64) )
    {
      if ( (*(_DWORD *)v6 & 1) == 0 )
        goto LABEL_135;
LABEL_66:
      v6 = **a1;
      if ( (*(_DWORD *)v6 & 1) == 0 )
      {
        if ( v22 == -1 )
          goto LABEL_135;
        goto LABEL_68;
      }
      if ( v22 == -1 )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
        {
          v99[2] = 0LL;
          v100[2] = 0LL;
          v96 = 0LL;
          v40 = **a1;
          if ( (*(_DWORD *)v40 & 4) != 0 )
            SubMenu = (__int64 *)GetSubMenu(*(_QWORD *)(v40 + 40));
          else
            SubMenu = *(__int64 **)(v40 + 40);
          if ( SubMenu )
            v95 = *SubMenu;
          else
            v95 = 0LL;
          v42 = *(_QWORD *)(**a1 + 8);
          v43 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v90 = *(_QWORD *)(v43 + 416);
          *(_QWORD *)(v43 + 416) = &v90;
          *((_QWORD *)&v90 + 1) = v42;
          if ( v42 )
            HMLockObject(v42);
          xxxSendMessage(*(_QWORD *)(**a1 + 8), 0x213u, v104, (struct _LARGE_STRING *)&v95);
          ThreadUnlock1(v45, v44, v46);
          v47 = HMValidateHandleNoSecure(*((unsigned __int64 *)&v96 + 1), 1);
          v48 = (_QWORD *)v47;
          if ( v47 )
          {
            if ( *(_QWORD *)(v47 + 16) == gptiCurrent )
            {
              v49 = HMValidateHandleNoRip(v96, 2);
              if ( v49 )
              {
                v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v99[0] = *(_QWORD *)(v50 + 416);
                *(_QWORD *)(v50 + 416) = v99;
                v99[1] = v49;
                HMLockObject(v49);
                v51 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v100[0] = *(_QWORD *)(v51 + 416);
                *(_QWORD *)(v51 + 416) = v100;
                v100[1] = v48;
                HMLockObject(v48);
                v52 = v105;
                if ( (*(_BYTE *)(v48[5] + 31LL) & 0x20) != 0 )
                  v52 = 1;
                xxxMNSelectItem(a1, a2);
                *(_DWORD *)(a2 + 8) |= 2u;
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 48));
                *(_DWORD *)**a1 &= ~0x80u;
                v53 = v48[20];
                if ( v53 && GetSubMenu(v53) == v49 )
                  v49 = v48[20];
                UnlockPopupMenu((__int64)a1, (__int64 *)(**a1 + 40));
                v54 = *a1;
                v97[1] = v48;
                v97[0] = *v54 + 8;
                HMAssignmentLock(v97);
                v55 = *a1;
                v98[1] = v48;
                v98[0] = *v55 + 16;
                HMAssignmentLock(v98);
                SmartObjStackRefBase<tagMENU>::Init(v101, v49);
                v56 = *a1;
                v101[2] = 0LL;
                LockPopupMenu((__int64)a1, (__int64 *)(*v56 + 40), (__int64)v101);
                SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v101);
                if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
                  xxxMNSetCapture(a1, a2);
                }
                if ( (*(_BYTE *)(v48[5] + 31LL) & 0x40) == 0 )
                {
                  v58 = **a1;
                  if ( *(_QWORD *)(v58 + 40) )
                  {
                    if ( v48[21] == *(_QWORD *)(**a1 + 40) )
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v102, v48[20]);
                      v60 = *a1;
                      v102[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v60 + 48), (__int64)v102);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v102);
                      *(_DWORD *)(a2 + 8) &= ~2u;
                    }
                    else
                    {
                      SmartObjStackRefBase<tagMENU>::Init(v103, v48[21]);
                      v61 = *a1;
                      v103[2] = 0LL;
                      LockPopupMenu((__int64)a1, (__int64 *)(*v61 + 48), (__int64)v103);
                      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v103);
                    }
                  }
                }
                ThreadUnlock1(v58, v57, v59);
                ThreadUnlock1(v63, v62, v64);
                *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
LABEL_105:
                if ( *(_QWORD *)(*(_QWORD *)v92[0] + 24LL) )
                  xxxMNCloseHierarchy(*(_QWORD *)v92[0], a2);
                xxxMNSelectItem(a1, a2);
                if ( v52 )
                  goto LABEL_131;
                goto LABEL_135;
              }
            }
          }
        }
        if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
          goto LABEL_135;
        if ( a3 != 39 )
          v16 = -1;
        if ( (unsigned int)MNFindNextValidItem(*(_QWORD *)(**a1 + 40), 0xFFFFFFFFLL, v16, 0LL) == -1 )
          goto LABEL_135;
      }
      v52 = v105;
      goto LABEL_105;
    }
    v36 = *(_QWORD *)(v6 + 32);
    v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v90 = *(_QWORD *)(v37 + 416);
    *(_QWORD *)(v37 + 416) = &v90;
    *((_QWORD *)&v90 + 1) = v36;
    if ( v36 )
      HMLockObject(v36);
    v38 = v104;
    v39 = 256;
LABEL_72:
    xxxSendMessage(*(_QWORD *)(**a1 + 32), v39, v38, 0LL);
    goto LABEL_21;
  }
LABEL_135:
  v79 = KeGetCurrentThread();
  v80 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v6)
    || (v84 = PsGetCurrentProcess(v82, v81, v83),
        v85 = PsGetProcessSessionIdEx(v84),
        v87 = PsGetCurrentThreadProcess(v86),
        v85 == (unsigned int)PsGetProcessSessionIdEx(v87)) )
  {
    v88 = (__int64 *)PsGetThreadWin32Thread(v79);
    if ( v88 )
      v80 = *v88;
  }
  if ( v92[0] != gSmartObjNullRef && !--*(_DWORD *)(v92[0] + 8LL) )
  {
    if ( *(_BYTE *)(v92[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v92[0]);
  }
  result = *(_QWORD **)(v80 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v80 + 1472) = result;
  }
  return result;
}
