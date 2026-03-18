/*
 * XREFs of UserIsDisconnectConnection @ 0x1C0094020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsDisconnectConnection()
{
  return gProtocolType == -1;
}
