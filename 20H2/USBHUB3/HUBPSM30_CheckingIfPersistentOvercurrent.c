/*
 * XREFs of HUBPSM30_CheckingIfPersistentOvercurrent @ 0x1C0010670
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax @ 0x1C0006A2C (HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax.c)
 */

__int64 __fastcall HUBPSM30_CheckingIfPersistentOvercurrent(__int64 a1)
{
  return HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax(*(_QWORD *)(a1 + 960));
}
