/*
 * XREFs of ExpDeleteMutant @ 0x1402AA040
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x1402AA058 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
