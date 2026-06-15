/*
 * XREFs of sub_180139A5C @ 0x180139A5C
 * Callers:
 *     sub_1800F2D78 @ 0x1800F2D78 (sub_1800F2D78.c)
 *     sub_1800F40E0 @ 0x1800F40E0 (sub_1800F40E0.c)
 * Callees:
 *     sub_18000C5F0 @ 0x18000C5F0 (sub_18000C5F0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180139B30 @ 0x180139B30 (sub_180139B30.c)
 */

__int64 __fastcall sub_180139A5C(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, int a5, _DWORD *a6, _QWORD *a7)
{
  int v8; // ebp
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // [rsp+28h] [rbp-420h]
  _DWORD v12[4]; // [rsp+50h] [rbp-3F8h] BYREF
  __int128 v13; // [rsp+60h] [rbp-3E8h] BYREF
  _WORD v14[208]; // [rsp+70h] [rbp-3D8h] BYREF
  _BYTE v15[528]; // [rsp+210h] [rbp-238h] BYREF

  v8 = a1;
  *a7 = 0LL;
  *a6 = 0;
  result = sub_18000C5F0(a1, a2, v14, (int)a4, (__int64)v15, v11, v12);
  if ( (int)result >= 0 )
  {
    v13 = *a4;
    return sub_180139B30(
             v8,
             (unsigned int)v14,
             v10,
             (unsigned int)v15,
             v12[0],
             (__int64)&v13,
             a5,
             (__int64)a6,
             (__int64)a7);
  }
  return result;
}
