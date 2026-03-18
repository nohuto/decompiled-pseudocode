/*
 * XREFs of ?_ShouldMaximizeWindow@@YGHPAUtagWND@@@Z @ 0x15DE6
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _xxxComputeProposedPerMonRect@12 @ 0x15354 (_xxxComputeProposedPerMonRect@12.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall _ShouldMaximizeWindow(_DWORD *this)
{
  int v1; // edx

  v1 = this[5];
  return (*(_BYTE *)(v1 + 23) & 1) != 0
      && (((*(_BYTE *)(v1 + 22) & 0xC0) == 0xC0) & *(_BYTE *)(v1 + 22)) != 0
      && (*(_DWORD *)(v1 + 144) & 0x40000000) == 0;
}
