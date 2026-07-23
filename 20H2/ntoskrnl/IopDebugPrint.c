/*
 * XREFs of IopDebugPrint @ 0x14050BC64
 * Callers:
 *     PnpCollectOpenHandles @ 0x1408AE634 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x1408AE6D0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, a2, va, 1);
  return Level;
}
