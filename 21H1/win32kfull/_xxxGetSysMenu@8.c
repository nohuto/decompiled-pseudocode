/*
 * XREFs of _xxxGetSysMenu@8 @ 0xB9DDC
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794 (-xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     ?xxxGetInitMenuParam@@YGPAUtagMENU@@PAUtagWND@@PAH@Z @ 0x184349 (-xxxGetInitMenuParam@@YGPAUtagMENU@@PAUtagWND@@PAH@Z.c)
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     ?xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z @ 0x1A1C90 (-xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _xxxGetSysMenuPtr@4 @ 0x31E72 (_xxxGetSysMenuPtr@4.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     __GetSubMenu@8 @ 0x8F1F4 (__GetSubMenu@8.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 */

_DWORD *__fastcall xxxGetSysMenu(_DWORD *a1, int a2)
{
  int SysMenuPtr; // eax
  int v5; // ecx
  _DWORD *v6; // ecx
  int SubMenu; // eax
  _DWORD *v8; // esi
  _DWORD v10[2]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v11; // [esp+10h] [ebp-4h]

  SmartObjStackRefBase<tagMENU>::Init(v10, 0);
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v11 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v10, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==(v10, v5) && a2 )
  {
    v6 = v11;
    if ( !v11 )
      v6 = *(_DWORD **)v10[0];
    SubMenu = _GetSubMenu(v6);
    v11 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v10, SubMenu);
  }
  v8 = v11;
  if ( !v11 )
    v8 = *(_DWORD **)v10[0];
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v10);
  return v8;
}
