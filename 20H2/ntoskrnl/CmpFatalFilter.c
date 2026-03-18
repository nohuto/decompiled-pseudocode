/*
 * XREFs of CmpFatalFilter @ 0x140871688
 * Callers:
 *     CmpQueryKeyName @ 0x1406B1E00 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
