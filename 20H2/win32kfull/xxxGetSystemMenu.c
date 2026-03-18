/*
 * XREFs of xxxGetSystemMenu @ 0x1C0078FF4
 * Callers:
 *     NtUserGetSystemMenu @ 0x1C0078F20 (NtUserGetSystemMenu.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0035170 (_DestroyMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxLoadSysMenu @ 0x1C0078CB0 (xxxLoadSysMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C007920C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     _GetSubMenu @ 0x1C007922C (_GetSubMenu.c)
 *     GetpwndNotifypMenuState @ 0x1C0079474 (GetpwndNotifypMenuState.c)
 *     DwmGetClassStyle @ 0x1C0081AD0 (DwmGetClassStyle.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01129EC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C011B2E0 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  void *v20; // rax
  __int64 v21; // rcx
  struct _KTHREAD *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v37; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD v39[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v41[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v44; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v43, 0LL);
  v4 = 0LL;
  v44 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v43);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v43, v5)
      && *(_QWORD *)(*(_QWORD *)v43[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v43[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v43[0] + 80LL)) & 0x200) != 0 )
    {
      DirtyVisRgnTrackers(*(_QWORD *)(*(_QWORD *)v43[0] + 80LL));
      v20 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 80LL) + 136LL));
      DwmAsyncChildStyleChange(v20);
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v43)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      v21 = v44;
      if ( !v44 )
        v21 = *(_QWORD *)v43[0];
      DestroyMenu(v21);
    }
    goto LABEL_14;
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v43)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 40LL) & 0x80u) == 0
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) == 0 )
  {
LABEL_14:
    if ( *((_QWORD *)a1 + 20) )
    {
      GetSubMenu();
      v44 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v43);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v43, v18) )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v43[0] + 40LL) + 40LL) |= 0x100u;
        v42[1] = a1;
        v42[0] = *(_QWORD *)v43[0] + 80LL;
        HMAssignmentLock(v42);
      }
      if ( v44 )
        v4 = v44;
      else
        v4 = *(_QWORD *)v43[0];
    }
    goto LABEL_19;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v39, 0LL);
  xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
  v44 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v43);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v43) )
  {
    LOBYTE(v6) = 1;
    LockWndMenuWorker(a1, v6, v43);
    v44 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v43);
    v8 = (__int64 *)GetpwndNotifypMenuState(a1);
    if ( v8 )
      v9 = *v8;
    else
      v9 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v39, v9);
    if ( *(_QWORD *)v39[0] )
    {
      v10 = *(_QWORD *)v39[0];
      if ( (**(_DWORD **)v39[0] & 8) == 0 )
      {
        v10 = *(_QWORD *)v39[0];
        if ( *(struct tagWND **)(*(_QWORD *)v39[0] + 16LL) == a1 )
        {
          v33 = v44;
          if ( (**(_DWORD **)v39[0] & 4) != 0 )
          {
            if ( !v44 )
              v33 = *(_QWORD *)v43[0];
            v40[1] = v33;
            v40[0] = *(_QWORD *)v39[0] + 40LL;
            v34 = v40;
          }
          else
          {
            if ( !v44 )
              v33 = *(_QWORD *)v43[0];
            v41[1] = v33;
            v41[0] = *(_QWORD *)v39[0] + 48LL;
            v34 = v41;
          }
          HMAssignmentLock(v34);
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v10)
      || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v37),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    if ( v39[0] != gSmartObjNullRef && !--*(_DWORD *)(v39[0] + 8LL) )
    {
      if ( *(_BYTE *)(v39[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v39[0]);
    }
    v17 = *(_QWORD **)(v12 + 1472);
    if ( v17 )
      *(_QWORD *)(v12 + 1472) = *v17;
    goto LABEL_14;
  }
  v22 = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (v27 = PsGetCurrentProcess(v25, v24, v26),
        v28 = PsGetProcessSessionIdEx(v27),
        v30 = PsGetCurrentThreadProcess(v29),
        v28 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
  {
    v31 = (__int64 *)PsGetThreadWin32Thread(v22);
    if ( v31 )
      v23 = *v31;
  }
  if ( v39[0] != gSmartObjNullRef && !--*(_DWORD *)(v39[0] + 8LL) )
  {
    if ( *(_BYTE *)(v39[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v39[0]);
  }
  v32 = *(_QWORD **)(v23 + 1472);
  if ( v32 )
    *(_QWORD *)(v23 + 1472) = *v32;
LABEL_19:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
  return v4;
}
