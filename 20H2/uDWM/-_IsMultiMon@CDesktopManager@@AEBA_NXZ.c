/*
 * XREFs of ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x18000C5C8
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000C484 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800B5E88 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 */

bool __fastcall CDesktopManager::_IsMultiMon(CDesktopManager *this)
{
  LONG v1; // r8d
  int v2; // edx
  RECT rc1; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 112);
  rc1.left = *((_DWORD *)this + 111);
  rc1.right = *((_DWORD *)this + 113) + rc1.left;
  v2 = *((_DWORD *)this + 114);
  rc1.top = v1;
  rc1.bottom = v1 + v2;
  return !EqualRect(&rc1, (const RECT *)((char *)this + 460));
}
