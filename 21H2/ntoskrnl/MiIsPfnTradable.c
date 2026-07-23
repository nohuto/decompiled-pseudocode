/*
 * XREFs of MiIsPfnTradable @ 0x14054F21C
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B1450 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
