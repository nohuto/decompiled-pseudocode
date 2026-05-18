/*
 * XREFs of sub_180113EF0 @ 0x180113EF0
 * Callers:
 *     sub_1801144FC @ 0x1801144FC (sub_1801144FC.c)
 * Callees:
 *     sub_180113E64 @ 0x180113E64 (sub_180113E64.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180113EF0(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  void *v8; // rax
  __int64 v9; // rcx

  v8 = operator new(0x40uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = sub_180113E64((__int64)v8, a2, a3, a4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v9 + 16;
  *(_QWORD *)(a1 + 8) = v9;
  return a1;
}
