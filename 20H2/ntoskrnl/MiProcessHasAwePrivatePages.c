/*
 * XREFs of MiProcessHasAwePrivatePages @ 0x14054B848
 * Callers:
 *     MiScrubProcesses @ 0x1408DE850 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiProcessHasAwePrivatePages(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 392LL) != 0LL;
}
