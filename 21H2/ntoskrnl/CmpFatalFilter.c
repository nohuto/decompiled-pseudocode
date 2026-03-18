/*
 * XREFs of CmpFatalFilter @ 0x1409150AC
 * Callers:
 *     CmpQueryKeyName @ 0x1407C05A0 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
