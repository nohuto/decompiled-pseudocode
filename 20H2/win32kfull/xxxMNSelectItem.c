/*
 * XREFs of xxxMNSelectItem @ 0x1C023A6BC
 * Callers:
 *     xxxMNButtonDown @ 0x1C0236DBC (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B434 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C025048C (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235CF0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0236944 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C024BE4C (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v36; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  struct _KTHREAD *v75; // r14
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 *v84; // rax
  _QWORD *v85; // rax
  _QWORD v87[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v88[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v89; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v90; // [rsp+60h] [rbp-A0h]
  __int128 v91; // [rsp+68h] [rbp-98h] BYREF
  __int64 v92; // [rsp+78h] [rbp-88h]
  _QWORD v93[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v94; // [rsp+90h] [rbp-70h]
  _QWORD v95[3]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v96; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-40h]
  _QWORD v98[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v99[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v100[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v101[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v102; // [rsp+160h] [rbp+60h]
  struct _KTHREAD *CurrentThread; // [rsp+178h] [rbp+78h]

  v3 = a3;
  v90 = 0LL;
  v97 = 0LL;
  v92 = 0LL;
  v89 = 0LL;
  v96 = 0LL;
  v91 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v93, 0LL);
  v9 = *a1;
  v10 = 0LL;
  v94 = 0LL;
  if ( *(_DWORD *)(*v9 + 80) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != -1 && (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      v10 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96 * v3;
    goto LABEL_75;
  }
  v11 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32), v6, v7, v8);
  v12 = v11;
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v11 )
    goto LABEL_75;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  SmartObjStackRefBase<tagMENU>::operator=(v93, *(_QWORD *)(**a1 + 40));
  v13 = v94;
  if ( !v94 )
    v13 = *(_QWORD *)v93[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v91 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v91;
  *((_QWORD *)&v91 + 1) = v13;
  if ( v13 )
    HMLockObject(v13);
  v15 = *(_QWORD *)(**a1 + 8);
  v102 = v15;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v89 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v89;
  *((_QWORD *)&v89 + 1) = v15;
  if ( v15 )
    HMLockObject(v15);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v17 = *(_QWORD *)(v12 + 8);
    if ( v17 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v87, v17);
      FindTimer(*(_QWORD *)(*(_QWORD *)v87[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v87[0] &= ~0x4000u;
      if ( (**(_DWORD **)v87[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v87[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v87[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v87[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v87[0] + 84LL) )
      {
        v99[2] = 0LL;
        v100[2] = 0LL;
        SmartObjStackRefBase<tagMENU>::Init(v95, *(_QWORD *)(*(_QWORD *)v87[0] + 40LL));
        v95[2] = 0LL;
        v18 = *(_QWORD *)(*(_QWORD *)v87[0] + 8LL);
        v19 = *(_QWORD *)v95[0];
        v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v99[0] = *(_QWORD *)(v20 + 416);
        *(_QWORD *)(v20 + 416) = v99;
        v99[1] = v19;
        if ( v19 )
          HMLockObject(v19);
        v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v100[0] = *(_QWORD *)(v21 + 416);
        *(_QWORD *)(v21 + 416) = v100;
        v100[1] = v18;
        if ( v18 )
          HMLockObject(v18);
        if ( *(_DWORD *)(*(_QWORD *)v87[0] + 80LL) != -1 )
          xxxMNInvertItem(v87, v95, *(unsigned int *)(*(_QWORD *)v87[0] + 80LL), v18, 0);
        *(_DWORD *)(*(_QWORD *)v87[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v87[0] + 84LL);
        xxxMNInvertItem(v87, v95, *(unsigned int *)(*(_QWORD *)v87[0] + 84LL), v18, 1);
        ThreadUnlock1(v23, v22, v24);
        ThreadUnlock1(v26, v25, v27);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v95);
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v28 = **a1;
      v98[0] = *(_QWORD *)(v28 + 64) + 56LL;
      v98[1] = *(_QWORD *)(v28 + 16);
      HMAssignmentLock(v98);
      v29 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v30)
        || (CurrentProcess = PsGetCurrentProcess(v32, v31, v33),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v36),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v38 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v38 )
          v29 = *v38;
      }
      if ( v87[0] != gSmartObjNullRef && !--*(_DWORD *)(v87[0] + 8LL) )
      {
        if ( *(_BYTE *)(v87[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v87[0]);
      }
      v39 = *(_QWORD **)(v29 + 1472);
      v15 = v102;
      if ( v39 )
        *(_QWORD *)(v29 + 1472) = *v39;
    }
  }
  v40 = **a1;
  if ( *(int *)(v40 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v40 + 80) + 4) > 1 )
      goto LABEL_45;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v40 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, a2);
    else
      MNSetTimerToCloseHierarchy((_DWORD ***)a1);
  }
  xxxMNInvertItem(a1, v93, *(unsigned int *)(**a1 + 80), v15, 0);
LABEL_45:
  *(_DWORD *)(**a1 + 80) = v3;
  if ( (_DWORD)v3 != -1 )
  {
    *(_DWORD *)(a2 + 8) &= 0xFFFFAFFF;
    if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
      xxxMNDoScroll((__int64)a1, v3, 1);
    v10 = xxxMNInvertItem(a1, v93, (unsigned int)v3, v15, 1);
    ThreadUnlock1(v42, v41, v43);
    ThreadUnlock1(v45, v44, v46);
    goto LABEL_75;
  }
  if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
    v47 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
  else
    v47 = -4;
  xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v47, 0, 0);
  ThreadUnlock1(v49, v48, v50);
  ThreadUnlock1(v52, v51, v53);
  if ( !*(_QWORD *)(**a1 + 32) )
    goto LABEL_75;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v88, 0LL);
  if ( (*(_DWORD *)**a1 & 2) != 0 )
  {
    v54 = **a1;
    if ( *(_QWORD *)(v54 + 32) == *(_QWORD *)(v54 + 8) )
    {
      v57 = *(_QWORD *)(**a1 + 64);
      goto LABEL_58;
    }
  }
  v58 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32), v54, v55, v56);
  if ( v58 )
  {
    v57 = *(_QWORD *)(v58 + 8);
    if ( v57 )
    {
LABEL_58:
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v88, v57);
      if ( *(_QWORD *)v88[0] )
      {
        v59 = *(_QWORD *)v88[0];
        if ( *(_QWORD *)(*(_QWORD *)v88[0] + 8LL) )
        {
          v60 = *(_QWORD *)(*(_QWORD *)v88[0] + 8LL);
          v61 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v89 = *(_QWORD *)(v61 + 416);
          *(_QWORD *)(v61 + 416) = &v89;
          *((_QWORD *)&v89 + 1) = v60;
          HMLockObject(v60);
          v62 = *(_QWORD *)(*(_QWORD *)v88[0] + 16LL);
          v63 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v96 = *(_QWORD *)(v63 + 416);
          *(_QWORD *)(v63 + 416) = &v96;
          *((_QWORD *)&v96 + 1) = v62;
          if ( v62 )
            HMLockObject(v62);
          v64 = *(_QWORD *)(*(_QWORD *)v88[0] + 40LL);
          v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v91 = *(_QWORD *)(v65 + 416);
          *(_QWORD *)(v65 + 416) = &v91;
          *((_QWORD *)&v91 + 1) = v64;
          if ( v64 )
            HMLockObject(v64);
          SmartObjStackRefBase<tagMENU>::Init(v101, *(_QWORD *)(*(_QWORD *)v88[0] + 40LL));
          v101[2] = 0LL;
          xxxSendMenuSelect(
            *(_QWORD *)(*(_QWORD *)v88[0] + 8LL),
            *(_QWORD *)(*(_QWORD *)v88[0] + 16LL),
            (unsigned int)v101,
            *(_DWORD *)(*(_QWORD *)v88[0] + 80LL),
            a2);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v101);
          ThreadUnlock1(v67, v66, v68);
          ThreadUnlock1(v70, v69, v71);
          ThreadUnlock1(v73, v72, v74);
        }
      }
    }
  }
  v75 = KeGetCurrentThread();
  v76 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v59)
    || (v80 = PsGetCurrentProcess(v78, v77, v79),
        v81 = PsGetProcessSessionIdEx(v80),
        v83 = PsGetCurrentThreadProcess(v82),
        v81 == (unsigned int)PsGetProcessSessionIdEx(v83)) )
  {
    v84 = (__int64 *)PsGetThreadWin32Thread(v75);
    if ( v84 )
      v76 = *v84;
  }
  if ( v88[0] != gSmartObjNullRef && !--*(_DWORD *)(v88[0] + 8LL) )
  {
    if ( *(_BYTE *)(v88[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v88[0]);
  }
  v85 = *(_QWORD **)(v76 + 1472);
  if ( v85 )
    *(_QWORD *)(v76 + 1472) = *v85;
LABEL_75:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v93);
  return v10;
}
