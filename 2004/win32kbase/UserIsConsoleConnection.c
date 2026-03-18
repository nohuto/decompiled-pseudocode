/*
 * XREFs of UserIsConsoleConnection @ 0x1C00B5D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
