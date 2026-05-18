/*
 * XREFs of sub_1800CD340 @ 0x1800CD340
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C9880 @ 0x1800C9880 (sub_1800C9880.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800CD340(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  void *v10; // rcx
  __int64 v11; // rax

  v10 = operator new(0x20uLL);
  v11 = 0LL;
  if ( v10 )
    v11 = sub_1800C9880((__int64)v10, a3, a4, a5, a7, a6);
  *a2 = v11;
  return a2;
}
