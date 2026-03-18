/*
 * XREFs of _GetUnpredictedMessagePos @ 0x1C012E840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 1292LL) | (*(unsigned __int16 *)(gptiCurrent + 1296LL) << 16);
}
