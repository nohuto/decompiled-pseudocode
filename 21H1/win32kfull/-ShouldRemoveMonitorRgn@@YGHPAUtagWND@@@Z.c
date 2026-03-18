/*
 * XREFs of ?ShouldRemoveMonitorRgn@@YGHPAUtagWND@@@Z @ 0x2D436
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     _IsSmallerThanScreen@8 @ 0x19E5B1 (_IsSmallerThanScreen@8.c)
 */

int __thiscall ShouldRemoveMonitorRgn(_DWORD *this)
{
  int v2; // esi

  v2 = 0;
  if ( (*(_BYTE *)(this[5] + 13) & 8) != 0 && (IsSmallerThanScreen() || *(_DWORD *)(this[5] + 108)) )
    return 1;
  return v2;
}
