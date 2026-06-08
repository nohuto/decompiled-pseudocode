/*
 * XREFs of CpcReadFeedback @ 0x1C0008F90
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x1C00090A4 (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcReadFeedback(__int64 a1)
{
  __int64 v2; // r8

  KeClearEvent(&Event);
  LOBYTE(v2) = 1;
  return CpcSegregateCommandActuation(CpcSubspaceReadFeedback, a1, v2);
}
