/*
 * XREFs of ?zzzHideCursorNoCapture@@YGKXZ @ 0x143231
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 */

unsigned int __stdcall zzzHideCursorNoCapture()
{
  PKTHREAD CurrentThread; // eax
  int v1; // esi
  PKTHREAD v2; // eax
  int ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  LOWORD(v1) = 0;
  if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 236) + 56) )
  {
    v2 = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(v2);
    if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x400u )
      v1 = *(_DWORD *)(ThreadWin32Thread + 352);
    if ( (v1 & 0x100) == 0 && ((unsigned int)_gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
      zzzSetCursor(0);
  }
  return 0;
}
