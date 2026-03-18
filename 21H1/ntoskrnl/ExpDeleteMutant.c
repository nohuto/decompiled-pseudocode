/*
 * XREFs of ExpDeleteMutant @ 0x1402FBC90
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x1402FBCA8 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
