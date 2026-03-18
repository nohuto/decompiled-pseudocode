/*
 * XREFs of CmpFatalFilter @ 0x14086BC00
 * Callers:
 *     CmpQueryKeyName @ 0x1405E5AB0 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
