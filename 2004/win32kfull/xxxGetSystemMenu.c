/*
 * XREFs of xxxGetSystemMenu @ 0x1C005C324
 * Callers:
 *     NtUserGetSystemMenu @ 0x1C005C250 (NtUserGetSystemMenu.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C000ECB8 (DwmGetClassStyle.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C005C53C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     _GetSubMenu @ 0x1C005CCA8 (_GetSubMenu.c)
 *     GetpwndNotifypMenuState @ 0x1C005E664 (GetpwndNotifypMenuState.c)
 *     xxxLoadSysMenu @ 0x1C005EC0C (xxxLoadSysMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C00AF380 (_DestroyMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01116BC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C011A250 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v14; // rax
  void *v16; // rax
  struct _KTHREAD *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rax
  __int64 *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD v32[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v37; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v36, 0LL);
  v4 = 0LL;
  v37 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v36);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v36)
      && *(_QWORD *)(*(_QWORD *)v36[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v36[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v36[0] + 80LL)) & 0x200) != 0 )
    {
      DirtyVisRgnTrackers(*(_QWORD *)(*(_QWORD *)v36[0] + 80LL));
      v16 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 80LL) + 136LL));
      DwmAsyncChildStyleChange(v16);
    }
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v36)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu();
    }
    goto LABEL_14;
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v36)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 40LL) & 0x80u) == 0
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) == 0 )
  {
LABEL_14:
    if ( *((_QWORD *)a1 + 20) )
    {
      GetSubMenu();
      v37 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v36);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v36) )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 40LL) |= 0x100u;
        v35[1] = a1;
        v35[0] = *(_QWORD *)v36[0] + 80LL;
        HMAssignmentLock(v35);
      }
      if ( v37 )
        v4 = v37;
      else
        v4 = *(_QWORD *)v36[0];
    }
    goto LABEL_19;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v32, 0LL);
  xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
  v37 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v36);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v36) )
  {
    LOBYTE(v5) = 1;
    LockWndMenuWorker(a1, v5, v36);
    v37 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v36);
    v6 = (__int64 *)GetpwndNotifypMenuState(a1);
    if ( v6 )
      v7 = *v6;
    else
      v7 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v32, v7);
    if ( *(_QWORD *)v32[0] && (**(_DWORD **)v32[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v32[0] + 16LL) == a1 )
    {
      v27 = v37;
      if ( (**(_DWORD **)v32[0] & 4) != 0 )
      {
        if ( !v37 )
          v27 = *(_QWORD *)v36[0];
        v33[1] = v27;
        v33[0] = *(_QWORD *)v32[0] + 40LL;
        v28 = v33;
      }
      else
      {
        if ( !v37 )
          v27 = *(_QWORD *)v36[0];
        v34[1] = v27;
        v34[0] = *(_QWORD *)v32[0] + 48LL;
        v28 = v34;
      }
      HMAssignmentLock(v28);
    }
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v9 = *ThreadWin32Thread;
    }
    if ( v32[0] != gSmartObjNullRef && !--*(_DWORD *)(v32[0] + 8LL) )
    {
      if ( *(_BYTE *)(v32[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v32[0]);
    }
    v14 = *(_QWORD **)(v9 + 1464);
    if ( v14 )
      *(_QWORD *)(v9 + 1464) = *v14;
    goto LABEL_14;
  }
  v17 = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v22 = PsGetCurrentProcess(v20, v19, v21),
        v23 = PsGetProcessSessionIdEx(v22),
        v24 = PsGetCurrentThreadProcess(),
        v23 == (unsigned int)PsGetProcessSessionIdEx(v24)) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v17);
    if ( v25 )
      v18 = *v25;
  }
  if ( v32[0] != gSmartObjNullRef && !--*(_DWORD *)(v32[0] + 8LL) )
  {
    if ( *(_BYTE *)(v32[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v32[0]);
  }
  v26 = *(_QWORD **)(v18 + 1464);
  if ( v26 )
    *(_QWORD *)(v18 + 1464) = *v26;
LABEL_19:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v36);
  return v4;
}
