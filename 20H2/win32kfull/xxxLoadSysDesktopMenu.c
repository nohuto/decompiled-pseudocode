/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C007BB68
 * Callers:
 *     xxxGetSysMenuPtr @ 0x1C005C1EC (xxxGetSysMenuPtr.c)
 *     xxxSetDialogSystemMenu @ 0x1C007C530 (xxxSetDialogSystemMenu.c)
 *     xxxTranslateAccelerator @ 0x1C0103718 (xxxTranslateAccelerator.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0035170 (_DestroyMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxLoadSysMenu @ 0x1C0078CB0 (xxxLoadSysMenu.c)
 *     LockDesktopMenu @ 0x1C007C328 (LockDesktopMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxLoadSysDesktopMenu(__int64 *a1, int a2)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v8, 0LL);
  xxxLoadSysMenu(a2);
  v4 = 0LL;
  v9 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v8);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v8) )
  {
    if ( *a1 )
    {
      v6 = v9;
      if ( !v9 )
        v6 = *(_QWORD *)v8[0];
      DestroyMenu(v6);
      v4 = *a1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 40LL) + 40LL) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, v8) )
      {
        v7 = v9;
        if ( !v9 )
          v7 = *(_QWORD *)v8[0];
        DestroyMenu(v7);
        v9 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v8);
      }
      if ( v9 )
        v4 = v9;
      else
        v4 = *(_QWORD *)v8[0];
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
  return v4;
}
