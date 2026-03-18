/*
 * XREFs of ACPIVectorDisable2 @ 0x1C0060C40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorDisable @ 0x1C0060B70 (ACPIVectorDisable.c)
 */

__int64 __fastcall ACPIVectorDisable2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorDisable(*(_QWORD *)(a1 + 728), a2);
}
