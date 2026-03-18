/*
 * XREFs of KiInitializePriorityState @ 0x1403C1398
 * Callers:
 *     KiInitializeIdleThread @ 0x140A590DC (KiInitializeIdleThread.c)
 *     KiConfigureSchedulingInformation @ 0x140A59154 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140266BBC (KiIsThreadRankNonZero.c)
 */

char __fastcall KiInitializePriorityState(_BYTE *a1, struct _KPRCB *a2, __int64 a3)
{
  bool IsThreadRankNonZero; // al
  char v6; // dl
  char result; // al

  IsThreadRankNonZero = KiIsThreadRankNonZero(a3, a2);
  v6 = 1;
  if ( !IsThreadRankNonZero )
    v6 = *(_BYTE *)(a3 + 195);
  *a1 ^= (v6 ^ *a1) & 0x7F;
  result = *a1 & 0x7F;
  *a1 = result | (*(_BYTE *)(a3 + 119) << 7);
  return result;
}
