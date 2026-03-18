/*
 * XREFs of _xxxLoadSysDesktopMenu@8 @ 0xCC3A8
 * Callers:
 *     _xxxGetSysMenuPtr@4 @ 0x31E72 (_xxxGetSysMenuPtr@4.c)
 *     _xxxTranslateAccelerator@12 @ 0xA8452 (_xxxTranslateAccelerator@12.c)
 *     _xxxSetDialogSystemMenu@4 @ 0xC5750 (_xxxSetDialogSystemMenu@4.c)
 * Callees:
 *     _xxxLoadSysMenu@4 @ 0x1D24C (_xxxLoadSysMenu@4.c)
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _LockDesktopMenu@8 @ 0xCC438 (_LockDesktopMenu@8.c)
 */

int __fastcall xxxLoadSysDesktopMenu(int *a1, int a2)
{
  int v3; // edi
  _DWORD *SysMenu; // eax
  int v6; // ecx
  int v7; // ecx
  int v9; // eax
  int v10; // eax
  _DWORD v11[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-4h]

  v3 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v11, 0);
  SysMenu = xxxLoadSysMenu(a2);
  v12 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v11, (int)SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator==(v11, v6) )
  {
    if ( *a1 )
    {
      v9 = v12;
      if ( !v12 )
        v9 = *(_DWORD *)v11[0];
      _DestroyMenu(v9);
      v3 = *a1;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11[0] + 20) + 20) |= 0x80u;
      if ( !LockDesktopMenu(a1, v7) )
      {
        v10 = v12;
        if ( !v12 )
          v10 = *(_DWORD *)v11[0];
        _DestroyMenu(v10);
        v12 = 0;
        SmartObjStackRefBase<tagMENU>::operator=(v11, 0);
      }
      v3 = v12;
      if ( !v12 )
        v3 = *(_DWORD *)v11[0];
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v11);
  return v3;
}
