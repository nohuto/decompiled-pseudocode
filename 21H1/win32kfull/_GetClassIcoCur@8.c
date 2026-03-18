/*
 * XREFs of _GetClassIcoCur@8 @ 0xA7526
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 */

int __stdcall GetClassIcoCur(int a1, int a2)
{
  int v2; // esi
  _DWORD v4[2]; // [esp+4h] [ebp-8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v4, *(_DWORD *)(a1 + 76));
  switch ( a2 )
  {
    case -14:
      v2 = *(_DWORD *)(*(_DWORD *)v4[0] + 48);
      break;
    case -12:
      v2 = *(_DWORD *)(*(_DWORD *)v4[0] + 52);
      break;
    case -34:
      v2 = *(_DWORD *)(*(_DWORD *)v4[0] + 64);
      break;
    default:
      v2 = 0;
      break;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v4);
  return v2;
}
