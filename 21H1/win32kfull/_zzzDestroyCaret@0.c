/*
 * XREFs of _zzzDestroyCaret@0 @ 0x7DA96
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     ?xxxMoveFocusAway@@YGXPBUtagWND@@@Z @ 0x72D9A (-xxxMoveFocusAway@@YGXPBUtagWND@@@Z.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _zzzInternalDestroyCaret@0 @ 0x7DAB2 (_zzzInternalDestroyCaret@0.c)
 *     ?UT_CaretSet@@YGHPAUtagWND@@@Z @ 0x810C2 (-UT_CaretSet@@YGHPAUtagWND@@@Z.c)
 */

int __thiscall zzzDestroyCaret(struct tagWND *this)
{
  if ( !UT_CaretSet(this) )
    return 0;
  zzzInternalDestroyCaret();
  return 1;
}
