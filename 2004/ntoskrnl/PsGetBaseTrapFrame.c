/*
 * XREFs of PsGetBaseTrapFrame @ 0x14057BEE0
 * Callers:
 *     PsPicoWalkUserStack @ 0x14090861C (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x140909E00 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1402E9C60 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
