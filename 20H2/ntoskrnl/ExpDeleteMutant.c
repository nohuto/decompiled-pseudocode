/*
 * XREFs of ExpDeleteMutant @ 0x14030B3E0
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x14030B3F8 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
