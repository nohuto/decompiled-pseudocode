/*
 * XREFs of sub_1800E3758 @ 0x1800E3758
 * Callers:
 *     sub_1800E6DB0 @ 0x1800E6DB0 (sub_1800E6DB0.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_1800E3758()
{
  __int64 result; // rax
  __int64 *v1; // rdi
  __int64 *v2; // rbx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)qword_18019EE50 + 56LL))(qword_18019EE50, &v3);
  v1 = (__int64 *)*((_QWORD *)&v3 + 1);
  v2 = (__int64 *)v3;
  if ( (_QWORD)v3 != *((_QWORD *)&v3 + 1) )
  {
    do
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 376LL))(*v2);
      ++v2;
    }
    while ( v2 != v1 );
    v1 = (__int64 *)*((_QWORD *)&v3 + 1);
    v2 = (__int64 *)v3;
  }
  if ( v2 )
  {
    sub_1800CD58C(v2, v1);
    return sub_1800472E0((__int64)v2, (v4 - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return result;
}
