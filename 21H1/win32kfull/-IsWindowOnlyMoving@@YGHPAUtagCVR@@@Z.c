/*
 * XREFs of ?IsWindowOnlyMoving@@YGHPAUtagCVR@@@Z @ 0xBFC6E
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsWindowOnlyMoving(int this)
{
  return (*(_BYTE *)(this + 120) & 1) == 0
      && *(_DWORD *)(this + 60) == *(_DWORD *)(this + 8) - *(_DWORD *)(this + 68)
      && *(_DWORD *)(this + 64) == *(_DWORD *)(this + 12) - *(_DWORD *)(this + 72);
}
