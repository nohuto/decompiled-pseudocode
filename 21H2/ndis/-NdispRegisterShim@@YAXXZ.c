/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x1C0109358
 * Callers:
 *     NdisDllInitialize @ 0x1C0036470 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisGetVersionShim, 0LL, 0LL);
  KseRegisterShim(&NdisReadConfigShim, 0LL, 0LL);
}
