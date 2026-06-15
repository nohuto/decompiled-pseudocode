/*
 * XREFs of sub_180139880 @ 0x180139880
 * Callers:
 *     sub_18013983C @ 0x18013983C (sub_18013983C.c)
 *     sub_180139B30 @ 0x180139B30 (sub_180139B30.c)
 * Callees:
 *     sub_1801398F0 @ 0x1801398F0 (sub_1801398F0.c)
 *     sub_180139BF8 @ 0x180139BF8 (sub_180139BF8.c)
 */

__int64 __fastcall sub_180139880(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a2;
  v4 = 0;
  *a4 = 0LL;
  *a3 = 0;
  if ( (unsigned __int8)sub_180139BF8(a1 + 128, &v11, &v12) )
  {
    return (unsigned int)sub_1801398F0(v7, v12, v8, v9, (__int64)a3, (__int64)a4);
  }
  else
  {
    *a3 = 0;
    *a4 = 0LL;
  }
  return v4;
}
