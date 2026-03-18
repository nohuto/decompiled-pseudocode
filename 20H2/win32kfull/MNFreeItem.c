/*
 * XREFs of MNFreeItem @ 0x1C0036994
 * Callers:
 *     _DestroyMenu @ 0x1C0035170 (_DestroyMenu.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C0035B38 (xxxInsertMenuItem.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0035170 (_DestroyMenu.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0036A38 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0036A78 (-FreeItemString@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall MNFreeItem(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(*(_QWORD *)a2 + 96LL) = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v8, a1);
  v9 = 0LL;
  FreeItemString(v8, a2);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
  SmartObjStackRefBase<tagMENU>::Init(v8, a1);
  v9 = 0LL;
  v6 = UnlockSubMenu(v8, a2);
  result = SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
  if ( v6 )
  {
    if ( a3 )
      return DestroyMenu(v6);
  }
  return result;
}
