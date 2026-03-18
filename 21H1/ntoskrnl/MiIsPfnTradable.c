/*
 * XREFs of MiIsPfnTradable @ 0x1405494BC
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x1409AC850 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
