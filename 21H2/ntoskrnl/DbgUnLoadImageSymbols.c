/*
 * XREFs of DbgUnLoadImageSymbols @ 0x1405E4210
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140A6BE04 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x140429850 (DebugService2.c)
 */

__int64 DbgUnLoadImageSymbols()
{
  return DebugService2();
}
