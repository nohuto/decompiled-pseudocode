/*
 * XREFs of sub_1C002DBF0 @ 0x1C002DBF0
 * Callers:
 *     sub_1C001A1A0 @ 0x1C001A1A0 (sub_1C001A1A0.c)
 * Callees:
 *     sub_1C00417F0 @ 0x1C00417F0 (sub_1C00417F0.c)
 */

void __fastcall __noreturn sub_1C002DBF0(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  if ( BugCheckParameter3 )
    sub_1C00417F0(BugCheckParameter3);
  KeBugCheckEx(0xFEu, 8uLL, 2uLL, BugCheckParameter3, BugCheckParameter4);
}
