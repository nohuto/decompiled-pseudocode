/*
 * XREFs of sub_180139B30 @ 0x180139B30
 * Callers:
 *     sub_180139A5C @ 0x180139A5C (sub_180139A5C.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180138CA4 @ 0x180138CA4 (sub_180138CA4.c)
 *     sub_180139880 @ 0x180139880 (sub_180139880.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180139B30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int128 *a6,
        int a7,
        _DWORD *a8,
        _QWORD *a9)
{
  __int128 v11; // [rsp+30h] [rbp-3F8h] BYREF
  _BYTE v12[976]; // [rsp+40h] [rbp-3E8h] BYREF

  *a9 = 0LL;
  *a8 = 0;
  v11 = *a6;
  sub_180138CA4((__int64)v12, a2, a4, a5, &v11, a7);
  return sub_180139880(a1, (__int64)v12, a8, a9);
}
