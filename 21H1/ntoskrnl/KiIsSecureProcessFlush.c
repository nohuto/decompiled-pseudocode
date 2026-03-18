/*
 * XREFs of KiIsSecureProcessFlush @ 0x1402933D0
 * Callers:
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140386658 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C4F7C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
}
