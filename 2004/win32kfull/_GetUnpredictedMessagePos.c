/*
 * XREFs of _GetUnpredictedMessagePos @ 0x1C012C870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 1284LL) | (*(unsigned __int16 *)(gptiCurrent + 1288LL) << 16);
}
