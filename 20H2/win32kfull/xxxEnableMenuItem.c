/*
 * XREFs of xxxEnableMenuItem @ 0x1C0034648
 * Callers:
 *     xxxSetSysMenu @ 0x1C0034410 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C0120ED0 (NtUserEnableMenuItem.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C00363BC (MNGetPopupFromMenu.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C0036CD4 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C007920C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     DwmGetClassStyle @ 0x1C0081AD0 (DwmGetClassStyle.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxRedrawTitle @ 0x1C00BF060 (xxxRedrawTitle.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02492B4 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 **a1, int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 v17; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  void *v25; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD v29[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+50h] [rbp-20h]
  _QWORD v32[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v30, 0LL);
  v31 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, 0LL);
  v6 = v31;
  if ( !v31 )
    v6 = *(_QWORD *)v30[0];
  v33 = v6;
  v7 = MenuItemState((_DWORD)a1, a2, a3, 3, (__int64)&v33);
  SmartObjStackRefBase<tagMENU>::operator=(v30);
  v8 = **a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 40LL) & 0x100) != 0 )
  {
    v8 = **a1;
    if ( a3 != v7 )
    {
      if ( *(_QWORD *)(v8 + 80) )
      {
        v32[2] = 0LL;
        if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
        {
          v17 = *(_QWORD *)(**a1 + 80);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v32[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v32;
          v32[1] = v17;
          if ( v17 )
            HMLockObject(v17);
          xxxRedrawTitle(*(_QWORD *)(**a1 + 80), 4096LL);
          if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v17) )
          {
            DirtyVisRgnTrackers(v17);
            DwmGetClassStyle(v17);
            v25 = (void *)ReferenceDwmApiPort(v24);
            DwmAsyncChildStyleChange(v25);
          }
          ThreadUnlock1(v20, v19, v21);
        }
      }
    }
  }
  if ( (a3 & 3) != v7 && (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v30, v8) )
  {
    v22 = v31;
    if ( !v31 )
      v22 = *(_QWORD *)v30[0];
    v23 = MNGetPopupFromMenu(v22, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v29, v23);
    if ( *(_QWORD *)v29[0] )
      xxxMNUpdateShownMenu(v29, 0LL, 1LL);
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v14 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v14 )
      v10 = *v14;
  }
  if ( v29[0] != gSmartObjNullRef && !--*(_DWORD *)(v29[0] + 8LL) )
  {
    if ( *(_BYTE *)(v29[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v29[0]);
  }
  v15 = *(_QWORD **)(v10 + 1472);
  if ( v15 )
    *(_QWORD *)(v10 + 1472) = *v15;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v30);
  return v7;
}
