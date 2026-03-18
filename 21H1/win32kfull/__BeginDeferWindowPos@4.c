/*
 * XREFs of __BeginDeferWindowPos@4 @ 0x9BF2E
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     ?xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x9BDF2 (-xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     _AllocateCvr@8 @ 0x9BF80 (_AllocateCvr@8.c)
 */

int __stdcall _BeginDeferWindowPos(int a1)
{
  int v1; // esi
  int v2; // eax

  v1 = HMAllocObject(_gptiCurrent, 0, 4, 28);
  if ( v1 )
  {
    v2 = a1;
    if ( !a1 )
      v2 = 8;
    if ( AllocateCvr(v1, v2) )
    {
      *(_DWORD *)(v1 + 12) |= 2u;
      return v1;
    }
    HMFreeObject(v1);
  }
  return 0;
}
