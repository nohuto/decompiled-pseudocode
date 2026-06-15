/*
 * XREFs of sub_180048308 @ 0x180048308
 * Callers:
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     sub_180001C6C @ 0x180001C6C (sub_180001C6C.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 * Callees:
 *     sub_18000E6E0 @ 0x18000E6E0 (sub_18000E6E0.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 */

__int64 __fastcall sub_180048308(_QWORD *a1, __int32 a2, _OWORD *a3, LPVOID *a4)
{
  __int64 result; // rax
  __m256i v8; // [rsp+30h] [rbp-40h] BYREF
  __m256i v9; // [rsp+50h] [rbp-20h]

  *(_OWORD *)v8.m256i_i8 = *a3;
  result = sub_18000E6E0((__int64)a1, a2, (__int128 *)v8.m256i_i8, a4);
  if ( (int)result < 0 )
  {
    sub_180022AC0(a1, (__int128 *)v8.m256i_i8, a2, 1);
    v9.m256i_i64[0] = (__int64)a1;
    v9.m256i_i32[2] = a2;
    *(_OWORD *)((char *)&v9.m256i_u64[1] + 4) = *(_OWORD *)v8.m256i_i8;
    v8 = v9;
    return sub_18001F9C0((__int64)a1, 0, 0, a2, (__int128 *)v8.m256i_i8, a4);
  }
  return result;
}
