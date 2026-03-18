/*
 * XREFs of MiProcessHasAwePrivatePages @ 0x1405ABD04
 * Callers:
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiProcessHasAwePrivatePages(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 376LL) != 0LL;
}
