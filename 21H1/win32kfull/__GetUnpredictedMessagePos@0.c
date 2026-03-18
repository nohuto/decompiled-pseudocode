/*
 * XREFs of __GetUnpredictedMessagePos@0 @ 0xB53CE
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(_gptiCurrent + 728) | (*(unsigned __int16 *)(_gptiCurrent + 732) << 16);
}
