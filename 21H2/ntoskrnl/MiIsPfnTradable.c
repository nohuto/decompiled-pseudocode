/*
 * XREFs of MiIsPfnTradable @ 0x14054EFDC
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B0520 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
