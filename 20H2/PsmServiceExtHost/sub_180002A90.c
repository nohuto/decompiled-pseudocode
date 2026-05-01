/*
 * XREFs of sub_180002A90 @ 0x180002A90
 * Callers:
 *     sub_18000294C @ 0x18000294C (sub_18000294C.c)
 * Callees:
 *     sub_180002B14 @ 0x180002B14 (sub_180002B14.c)
 *     sub_180002B44 @ 0x180002B44 (sub_180002B44.c)
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 */

__int64 __fastcall sub_180002A90(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v9 = 0LL;
  v8[1] = a5;
  v8[0] = a4;
  sub_180002B44();
  sub_18000E718(a1, (unsigned int)&v10, a2, 0, (__int64)sub_180003140, (__int64)v8);
  sub_180002B14(a1);
  return (_DWORD)v9 == 0 ? 0xC0000225 : 0;
}
