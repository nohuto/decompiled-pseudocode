/*
 * XREFs of _IsProcessForeground@4 @ 0x1419EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall IsProcessForeground(int a1)
{
  return _gptiForeground && a1 == ((unsigned int)PsGetThreadProcessId((PETHREAD)*_gptiForeground) & 0xFFFFFFFC);
}
