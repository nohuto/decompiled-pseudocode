/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x1C01092F8
 * Callers:
 *     NdisDllInitialize @ 0x1C0036110 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisGetVersionShim, 0LL, 0LL);
  KseRegisterShim(&NdisReadConfigShim, 0LL, 0LL);
}
