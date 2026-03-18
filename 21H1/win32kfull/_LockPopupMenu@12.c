/*
 * XREFs of _LockPopupMenu@12 @ 0x197533
 * Callers:
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@@Z @ 0x196A86 (-UnlockPopupMenuWindow@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@@Z.c)
 */

int __fastcall LockPopupMenu(_DWORD **a1, int *a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  _DWORD v7[3]; // [esp+8h] [ebp-10h] BYREF
  _DWORD **v8; // [esp+14h] [ebp-4h]

  v8 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v7, *a2);
  v7[2] = 0;
  UnlockPopupMenuWindow(v7);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v7);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3, v3) )
    HMAssignmentLock(*(_DWORD *)*a3 + 52, **v8);
  return HMAssignmentLock(v5, v4);
}
