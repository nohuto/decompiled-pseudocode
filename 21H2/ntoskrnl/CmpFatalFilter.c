/*
 * XREFs of CmpFatalFilter @ 0x14086EE90
 * Callers:
 *     CmpQueryKeyName @ 0x140667590 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
