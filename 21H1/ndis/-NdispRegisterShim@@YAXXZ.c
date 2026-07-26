/*
 * XREFs of ?NdispRegisterShim@@YAXXZ @ 0x1C0109388
 * Callers:
 *     NdisDllInitialize @ 0x1C0035ED0 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void NdispRegisterShim(void)
{
  KseRegisterShim(&NdisShim, 0LL, 0LL);
}
