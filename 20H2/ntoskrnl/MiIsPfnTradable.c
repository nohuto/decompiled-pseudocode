/*
 * XREFs of MiIsPfnTradable @ 0x14054D4DC
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B3620 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
