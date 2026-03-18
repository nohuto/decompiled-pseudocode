/*
 * XREFs of MiIsPfnTradable @ 0x14038DE3C
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x140A4F8B0 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
