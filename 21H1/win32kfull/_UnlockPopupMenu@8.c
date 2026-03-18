/*
 * XREFs of _UnlockPopupMenu@8 @ 0x197868
 * Callers:
 *     _MNFreePopup@8 @ 0x184632 (_MNFreePopup@8.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@@Z @ 0x196A86 (-UnlockPopupMenuWindow@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@@Z.c)
 */

int __fastcall UnlockPopupMenu(int a1, int *a2)
{
  int result; // eax
  _DWORD v4[3]; // [esp+8h] [ebp-Ch] BYREF

  result = *a2;
  if ( *a2 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v4, *a2);
    v4[2] = 0;
    UnlockPopupMenuWindow(v4);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v4);
    return HMAssignmentUnlock(a2);
  }
  return result;
}
