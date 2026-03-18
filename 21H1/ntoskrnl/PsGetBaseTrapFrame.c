/*
 * XREFs of PsGetBaseTrapFrame @ 0x14057B8A0
 * Callers:
 *     PsPicoWalkUserStack @ 0x14090736C (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x140908B50 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x14032EDA0 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
