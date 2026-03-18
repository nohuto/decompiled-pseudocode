/*
 * XREFs of IopDebugPrint @ 0x140560D94
 * Callers:
 *     PnpCollectOpenHandles @ 0x140950424 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x1409504C0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140369C50 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(unsigned int a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, a1, a2, va, 1);
  return a1;
}
