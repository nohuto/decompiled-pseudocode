/*
 * XREFs of ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C002D8A4
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C002A9E8 (xxxComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C002C7DC (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ShouldMaximizeWindow(struct tagWND *a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *((_QWORD *)a1 + 5);
  v2 = 1;
  if ( (*(_BYTE *)(v1 + 31) & 1) == 0
    || (((*(_BYTE *)(v1 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v1 + 30)) == 0
    || (*(_DWORD *)(v1 + 232) & 0x40000000) != 0 )
  {
    return 0;
  }
  return v2;
}
