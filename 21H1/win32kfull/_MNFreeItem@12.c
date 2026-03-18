/*
 * XREFs of _MNFreeItem@12 @ 0x1EA10
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 * Callees:
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     ?UnlockSubMenu@@YGPAUtagMENU@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EA7C (-UnlockSubMenu@@YGPAUtagMENU@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     ?FreeItemString@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EAA0 (-FreeItemString@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 */

int __fastcall MNFreeItem(int a1, int a2, int a3)
{
  int v5; // esi
  int result; // eax
  _BYTE v7[8]; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-4h]

  *(_DWORD *)(*(_DWORD *)a2 + 64) = 0;
  SmartObjStackRefBase<tagMENU>::Init(a1);
  v8 = 0;
  FreeItemString(v7, a2);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v7);
  SmartObjStackRefBase<tagMENU>::Init(a1);
  v8 = 0;
  v5 = UnlockSubMenu(v7, a2);
  result = SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v7);
  if ( v5 )
  {
    if ( a3 )
      return _DestroyMenu(v5);
  }
  return result;
}
