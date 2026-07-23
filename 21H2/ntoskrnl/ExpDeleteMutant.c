/*
 * XREFs of ExpDeleteMutant @ 0x140228180
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x140228198 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
