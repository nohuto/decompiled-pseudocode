/*
 * XREFs of _IsGhostWindow@4 @ 0x72B1C
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     __HungWindowFromGhostWindow@4 @ 0x72334 (__HungWindowFromGhostWindow@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxDW_DestroyOwnedWindows@4 @ 0x7315A (_xxxDW_DestroyOwnedWindows@4.c)
 *     _NtUserQueryWindow@8 @ 0x920B2 (_NtUserQueryWindow@8.c)
 *     _xxxDestroyCorrespondingGhostWindow@4 @ 0x170530 (_xxxDestroyCorrespondingGhostWindow@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsGhostWindow(_DWORD *this)
{
  return (*(_WORD *)(this[5] + 30) & 0x3FFF) == 682;
}
