/*
 * XREFs of ACPIVectorClear2 @ 0x1C00618C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorClear @ 0x1C0061880 (ACPIVectorClear.c)
 */

__int64 __fastcall ACPIVectorClear2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorClear(*(_QWORD *)(a1 + 768), a2);
}
