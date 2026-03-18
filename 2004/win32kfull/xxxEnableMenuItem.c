/*
 * XREFs of xxxEnableMenuItem @ 0x1C005C848
 * Callers:
 *     xxxSetSysMenu @ 0x1C005C610 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C011F9C0 (NtUserEnableMenuItem.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C000ECB8 (DwmGetClassStyle.c)
 *     xxxRedrawTitle @ 0x1C0033990 (xxxRedrawTitle.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C005C53C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C005CAD8 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     MNGetPopupFromMenu @ 0x1C00A287C (MNGetPopupFromMenu.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C024A8BC (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 v16; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD v28[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+50h] [rbp-20h]
  _QWORD v31[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v29, 0LL);
  v30 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, 0LL);
  v6 = v30;
  if ( !v30 )
    v6 = *(_QWORD *)v29[0];
  v32 = v6;
  v7 = MenuItemState(a1, a2, a3, 3, (__int64)&v32);
  SmartObjStackRefBase<tagMENU>::operator=(v29);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x100) != 0 && a3 != v7 )
  {
    if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    {
      v31[2] = 0LL;
      if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
      {
        v16 = *(_QWORD *)(**(_QWORD **)a1 + 80LL);
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v31[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v31;
        v31[1] = v16;
        if ( v16 )
          HMLockObject(v16);
        xxxRedrawTitle(*(unsigned __int64 **)(**(_QWORD **)a1 + 80LL), 0x1000u);
        if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v16) )
        {
          DirtyVisRgnTrackers(v16);
          DwmGetClassStyle(v16);
          v24 = (void *)ReferenceDwmApiPort(v23);
          DwmAsyncChildStyleChange(v24);
        }
        ThreadUnlock1(v19, v18, v20);
      }
    }
  }
  if ( (a3 & 3) != v7 && SmartObjStackRef<tagMENU>::operator bool((__int64)v29) )
  {
    v21 = v30;
    if ( !v30 )
      v21 = *(_QWORD *)v29[0];
    v22 = MNGetPopupFromMenu(v21, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v28, v22);
    if ( *(_QWORD *)v28[0] )
      xxxMNUpdateShownMenu(v28, 0LL, 1LL);
  }
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v13 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v13 )
      v9 = *v13;
  }
  if ( v28[0] != gSmartObjNullRef && !--*(_DWORD *)(v28[0] + 8LL) )
  {
    if ( *(_BYTE *)(v28[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v28[0]);
  }
  v14 = *(_QWORD **)(v9 + 1464);
  if ( v14 )
    *(_QWORD *)(v9 + 1464) = *v14;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v29);
  return v7;
}
