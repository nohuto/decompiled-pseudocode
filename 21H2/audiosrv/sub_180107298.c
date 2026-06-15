/*
 * XREFs of sub_180107298 @ 0x180107298
 * Callers:
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180052B8C @ 0x180052B8C (sub_180052B8C.c)
 *     sub_180052DC4 @ 0x180052DC4 (sub_180052DC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180107298(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v4 = sub_180052B8C(&v8, a2);
    sub_180052DC4(a1, v4);
    if ( v9 )
      sub_180052600(v9);
    unknown_libname_207(a2, v5);
    result = 0LL;
  }
  catch ( std::bad_alloc )
  {
    sub_18004BD84(
      (int)retaddr,
      34,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
      -2147024882);
    unknown_libname_207(a2, v7);
    return 2147942414LL;
  }
  return result;
}
