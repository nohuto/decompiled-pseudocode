/*
 * XREFs of KiIsSecureProcessFlush @ 0x14033B4E0
 * Callers:
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140389ED8 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C951C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
}
