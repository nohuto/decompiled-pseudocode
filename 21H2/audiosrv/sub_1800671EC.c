/*
 * XREFs of sub_1800671EC @ 0x1800671EC
 * Callers:
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180052B8C @ 0x180052B8C (sub_180052B8C.c)
 *     sub_180052DC4 @ 0x180052DC4 (sub_180052DC4.c)
 */

__int64 __fastcall sub_1800671EC(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]

  a1[2] = a3;
  v5 = sub_180052B8C(&v9, a2);
  sub_180052DC4(a1, v5);
  if ( v10 )
    sub_180052600(v10);
  v7 = *a1 == 0LL ? 0x8007000E : 0;
  unknown_libname_207(a2, v6);
  return v7;
}
