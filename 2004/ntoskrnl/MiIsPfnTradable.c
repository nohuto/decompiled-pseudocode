/*
 * XREFs of MiIsPfnTradable @ 0x140549B0C
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x1409AD6B0 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
