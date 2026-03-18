/*
 * XREFs of PsGetBaseTrapFrame @ 0x14057F910
 * Callers:
 *     PsPicoWalkUserStack @ 0x14090E23C (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1402D8700 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
