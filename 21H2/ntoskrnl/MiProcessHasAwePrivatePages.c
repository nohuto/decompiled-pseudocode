/*
 * XREFs of MiProcessHasAwePrivatePages @ 0x14054D588
 * Callers:
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiProcessHasAwePrivatePages(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 392LL) != 0LL;
}
