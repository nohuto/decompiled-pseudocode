/*
 * XREFs of ??9@YG_NABU_FD_KERNINGPAIR@@0@Z @ 0x20A183
 * Callers:
 *     ?ProbeAndReadFD_KERNINGPAIR@@YGPAU_FD_KERNINGPAIR@@PBU1@HK@Z @ 0x20A683 (-ProbeAndReadFD_KERNINGPAIR@@YGPAU_FD_KERNINGPAIR@@PBU1@HK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_WORD *a1, _WORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2];
}
