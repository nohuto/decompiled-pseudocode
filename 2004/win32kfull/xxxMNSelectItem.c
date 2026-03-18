/*
 * XREFs of xxxMNSelectItem @ 0x1C023B54C
 * Callers:
 *     xxxMNButtonDown @ 0x1C0237C4C (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0238274 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023C2C4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0251A9C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0236B80 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02377D4 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C02386F0 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C025247C (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  struct _KTHREAD *v69; // r14
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  int v75; // ebx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 *v78; // rax
  _QWORD *v79; // rax
  _QWORD v81[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v82[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v83; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v84; // [rsp+60h] [rbp-A0h]
  __int128 v85; // [rsp+68h] [rbp-98h] BYREF
  __int64 v86; // [rsp+78h] [rbp-88h]
  _QWORD v87[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v88; // [rsp+90h] [rbp-70h]
  _QWORD v89[3]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v90; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-40h]
  _QWORD v92[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v93[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v94[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v95[4]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v96; // [rsp+160h] [rbp+60h]
  struct _KTHREAD *CurrentThread; // [rsp+178h] [rbp+78h]

  v3 = a3;
  v84 = 0LL;
  v91 = 0LL;
  v86 = 0LL;
  v83 = 0LL;
  v90 = 0LL;
  v85 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v87, 0LL);
  v6 = *a1;
  v7 = 0LL;
  v88 = 0LL;
  if ( *(_DWORD *)(*v6 + 80) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != -1 && (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      v7 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96 * v3;
    goto LABEL_75;
  }
  v8 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  v9 = v8;
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 && !v8 )
    goto LABEL_75;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  SmartObjStackRefBase<tagMENU>::operator=(v87, *(_QWORD *)(**a1 + 40));
  v10 = v88;
  if ( !v88 )
    v10 = *(_QWORD *)v87[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v85 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v85;
  *((_QWORD *)&v85 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  v12 = *(_QWORD *)(**a1 + 8);
  v96 = v12;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v83 = *(_QWORD *)(v13 + 408);
  *(_QWORD *)(v13 + 408) = &v83;
  *((_QWORD *)&v83 + 1) = v12;
  if ( v12 )
    HMLockObject(v12);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v14 = *(_QWORD *)(v9 + 8);
    if ( v14 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v81, v14);
      FindTimer(*(_QWORD *)(*(_QWORD *)v81[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v81[0] &= ~0x4000u;
      if ( (**(_DWORD **)v81[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v81[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v81[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v81[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v81[0] + 84LL) )
      {
        v93[2] = 0LL;
        v94[2] = 0LL;
        SmartObjStackRefBase<tagMENU>::Init(v89, *(_QWORD *)(*(_QWORD *)v81[0] + 40LL));
        v89[2] = 0LL;
        v15 = *(_QWORD *)(*(_QWORD *)v81[0] + 8LL);
        v16 = *(_QWORD *)v89[0];
        v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v93[0] = *(_QWORD *)(v17 + 408);
        *(_QWORD *)(v17 + 408) = v93;
        v93[1] = v16;
        if ( v16 )
          HMLockObject(v16);
        v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v94[0] = *(_QWORD *)(v18 + 408);
        *(_QWORD *)(v18 + 408) = v94;
        v94[1] = v15;
        if ( v15 )
          HMLockObject(v15);
        if ( *(_DWORD *)(*(_QWORD *)v81[0] + 80LL) != -1 )
          xxxMNInvertItem(v81, v89, *(unsigned int *)(*(_QWORD *)v81[0] + 80LL), v15, 0);
        *(_DWORD *)(*(_QWORD *)v81[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v81[0] + 84LL);
        xxxMNInvertItem(v81, v89, *(unsigned int *)(*(_QWORD *)v81[0] + 84LL), v15, 1);
        ThreadUnlock1(v20, v19, v21);
        ThreadUnlock1(v23, v22, v24);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v89);
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v25 = **a1;
      v92[0] = *(_QWORD *)(v25 + 64) + 56LL;
      v92[1] = *(_QWORD *)(v25 + 16);
      HMAssignmentLock(v92);
      v26 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v27)
        || (CurrentProcess = PsGetCurrentProcess(v29, v28, v30),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v35 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v35 )
          v26 = *v35;
      }
      if ( v81[0] != gSmartObjNullRef && !--*(_DWORD *)(v81[0] + 8LL) )
      {
        if ( *(_BYTE *)(v81[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v81[0]);
      }
      v36 = *(_QWORD **)(v26 + 1464);
      v12 = v96;
      if ( v36 )
        *(_QWORD *)(v26 + 1464) = *v36;
    }
  }
  v37 = **a1;
  if ( *(int *)(v37 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v37 + 80) + 4) > 1 )
      goto LABEL_45;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v37 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, a2);
    else
      MNSetTimerToCloseHierarchy(a1);
  }
  xxxMNInvertItem(a1, v87, *(unsigned int *)(**a1 + 80), v12, 0);
LABEL_45:
  *(_DWORD *)(**a1 + 80) = v3;
  if ( (_DWORD)v3 != -1 )
  {
    *(_DWORD *)(a2 + 8) &= 0xFFFFAFFF;
    if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
      xxxMNDoScroll((__int64)a1, v3, 1);
    v7 = xxxMNInvertItem(a1, v87, (unsigned int)v3, v12, 1);
    ThreadUnlock1(v39, v38, v40);
    ThreadUnlock1(v42, v41, v43);
    goto LABEL_75;
  }
  if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
    v44 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
  else
    v44 = -4;
  xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v44, 0, 0);
  ThreadUnlock1(v46, v45, v47);
  ThreadUnlock1(v49, v48, v50);
  if ( !*(_QWORD *)(**a1 + 32) )
    goto LABEL_75;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v82, 0LL);
  if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
  {
    v51 = *(_QWORD *)(**a1 + 64);
    goto LABEL_58;
  }
  v52 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  if ( v52 )
  {
    v51 = *(_QWORD *)(v52 + 8);
    if ( v51 )
    {
LABEL_58:
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v82, v51);
      if ( *(_QWORD *)v82[0] )
      {
        v53 = *(_QWORD *)v82[0];
        if ( *(_QWORD *)(*(_QWORD *)v82[0] + 8LL) )
        {
          v54 = *(_QWORD *)(*(_QWORD *)v82[0] + 8LL);
          v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v83 = *(_QWORD *)(v55 + 408);
          *(_QWORD *)(v55 + 408) = &v83;
          *((_QWORD *)&v83 + 1) = v54;
          HMLockObject(v54);
          v56 = *(_QWORD *)(*(_QWORD *)v82[0] + 16LL);
          v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v90 = *(_QWORD *)(v57 + 408);
          *(_QWORD *)(v57 + 408) = &v90;
          *((_QWORD *)&v90 + 1) = v56;
          if ( v56 )
            HMLockObject(v56);
          v58 = *(_QWORD *)(*(_QWORD *)v82[0] + 40LL);
          v59 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v85 = *(_QWORD *)(v59 + 408);
          *(_QWORD *)(v59 + 408) = &v85;
          *((_QWORD *)&v85 + 1) = v58;
          if ( v58 )
            HMLockObject(v58);
          SmartObjStackRefBase<tagMENU>::Init(v95, *(_QWORD *)(*(_QWORD *)v82[0] + 40LL));
          v95[2] = 0LL;
          xxxSendMenuSelect(
            *(_QWORD *)(*(_QWORD *)v82[0] + 8LL),
            *(_QWORD *)(*(_QWORD *)v82[0] + 16LL),
            (unsigned int)v95,
            *(_DWORD *)(*(_QWORD *)v82[0] + 80LL),
            a2);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v95);
          ThreadUnlock1(v61, v60, v62);
          ThreadUnlock1(v64, v63, v65);
          ThreadUnlock1(v67, v66, v68);
        }
      }
    }
  }
  v69 = KeGetCurrentThread();
  v70 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v53)
    || (v74 = PsGetCurrentProcess(v72, v71, v73),
        v75 = PsGetProcessSessionIdEx(v74),
        v77 = PsGetCurrentThreadProcess(v76),
        v75 == (unsigned int)PsGetProcessSessionIdEx(v77)) )
  {
    v78 = (__int64 *)PsGetThreadWin32Thread(v69);
    if ( v78 )
      v70 = *v78;
  }
  if ( v82[0] != gSmartObjNullRef && !--*(_DWORD *)(v82[0] + 8LL) )
  {
    if ( *(_BYTE *)(v82[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v82[0]);
  }
  v79 = *(_QWORD **)(v70 + 1464);
  if ( v79 )
    *(_QWORD *)(v70 + 1464) = *v79;
LABEL_75:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v87);
  return v7;
}
