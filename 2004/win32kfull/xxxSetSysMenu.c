/*
 * XREFs of xxxSetSysMenu @ 0x1C005C610
 * Callers:
 *     xxxGetSysMenu @ 0x1C005C55C (xxxGetSysMenu.c)
 *     xxxTranslateAccelerator @ 0x1C0103018 (xxxTranslateAccelerator.c)
 *     xxxHandleNCMouseGuys @ 0x1C02246E4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     xxxEnableMenuItem @ 0x1C005C848 (xxxEnableMenuItem.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C005CB40 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C005CB7C (_SetMenuDefaultItem.c)
 *     _GetSubMenu @ 0x1C005CCA8 (_GetSubMenu.c)
 *     IsSmallerThanScreen @ 0x1C005CD40 (IsSmallerThanScreen.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     xxxGetSysMenuPtr @ 0x1C00A050C (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  _BYTE *v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  char v11; // al
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // eax
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]

  SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
  v22 = 0LL;
  v21 = 0LL;
  xxxGetSysMenuPtr(a1);
  v2 = 0;
  v20 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v19);
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v19) )
    goto LABEL_18;
  GetSubMenu();
  v20 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v19);
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v19) )
    goto LABEL_18;
  v3 = v20;
  if ( !v20 )
    v3 = *(_QWORD *)v19[0];
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v21 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
  *((_QWORD *)&v21 + 1) = v3;
  HMLockObject(v3);
  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 3;
  v10 = 61536;
  if ( (v5[31] & 0x20) != 0 )
  {
    v9 = 0;
    v7 = 3;
    v2 = 3;
    v10 = 61728;
    v17 = IsTrayWindow(a1);
    v5 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( v17 )
      v6 = 3;
  }
  else if ( (v5[30] & 2) == 0 )
  {
    v7 = 3;
  }
  if ( (v5[30] & 1) == 0 )
    goto LABEL_23;
  v11 = v5[31];
  if ( (v11 & 1) != 0 )
  {
    v9 = 0;
    v6 = 3;
    if ( (v11 & 0x40) == 0 && (unsigned int)IsSmallerThanScreen(a1) )
      v6 = 0;
    v5 = (_BYTE *)*((_QWORD *)a1 + 5);
    v2 = 3;
LABEL_23:
    v8 = 3;
  }
  v12 = v5[30];
  if ( (v12 & 4) == 0 )
    v2 = 3;
  if ( (v5[30] & 0xC0) != 0x40 && (v5[24] & 1) == 0 || (v12 & 7) != 0 )
  {
    xxxEnableMenuItem(v19, 61440LL, v2);
    xxxEnableMenuItem(v19, 61472LL, v7);
    xxxEnableMenuItem(v19, 61488LL, v8);
    xxxEnableMenuItem(v19, 61728LL, v9);
  }
  xxxEnableMenuItem(v19, 61456LL, v6);
  if ( v10 == 61536 )
  {
    _SetCloseDefault(v19);
  }
  else
  {
    v18 = v20;
    if ( !v20 )
      v18 = *(_QWORD *)v19[0];
    SetMenuDefaultItem(v18, v10, 0LL);
  }
  ThreadUnlock1(v14, v13, v15);
LABEL_18:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
  return 1LL;
}
