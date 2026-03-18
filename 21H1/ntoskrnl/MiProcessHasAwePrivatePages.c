/*
 * XREFs of MiProcessHasAwePrivatePages @ 0x140547828
 * Callers:
 *     MiScrubProcesses @ 0x1408D76C0 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiProcessHasAwePrivatePages(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 392LL) != 0LL;
}
