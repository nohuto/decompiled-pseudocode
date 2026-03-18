/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1405E40E4
 * Callers:
 *     MiLoadUserSymbols @ 0x14096CCF8 (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x140429850 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
