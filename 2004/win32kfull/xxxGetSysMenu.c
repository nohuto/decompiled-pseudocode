/*
 * XREFs of xxxGetSysMenu @ 0x1C005C55C
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1C00A76D4 (xxxGetMenuBarInfo.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00ADDCC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BA9D4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C02221C8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxMNStartMenu @ 0x1C022302C (xxxMNStartMenu.c)
 * Callees:
 *     xxxSetSysMenu @ 0x1C005C610 (xxxSetSysMenu.c)
 *     _GetSubMenu @ 0x1C005CCA8 (_GetSubMenu.c)
 *     xxxGetSysMenuPtr @ 0x1C00A050C (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxGetSysMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v6, 0LL);
  xxxSetSysMenu(a1);
  xxxGetSysMenuPtr(a1);
  v7 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v6);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v6) && a2 )
  {
    GetSubMenu();
    v7 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v6);
  }
  v4 = v7;
  if ( !v7 )
    v4 = *(_QWORD *)v6[0];
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v6);
  return v4;
}
