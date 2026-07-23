/*
 * XREFs of CmpFatalFilter @ 0x14086EFF0
 * Callers:
 *     CmpQueryKeyName @ 0x14065C3B0 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
