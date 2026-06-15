/*
 * XREFs of sub_18006EFB0 @ 0x18006EFB0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800E87A0 @ 0x1800E87A0 (sub_1800E87A0.c)
 *     sub_1800E91F0 @ 0x1800E91F0 (sub_1800E91F0.c)
 */

__int64 __fastcall sub_18006EFB0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall **v10)(); // [rsp+50h] [rbp-68h] BYREF
  __int128 v11; // [rsp+58h] [rbp-60h]
  int *v12; // [rsp+68h] [rbp-50h]
  __int64 (__fastcall ***v13)(); // [rsp+88h] [rbp-30h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v15; // [rsp+C8h] [rbp+10h] BYREF
  int v16; // [rsp+D0h] [rbp+18h] BYREF
  int v17; // [rsp+D8h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = a2;
  v6 = a5;
  sub_1800E91F0(a5);
  *(_QWORD *)&v9 = &v17;
  *((_QWORD *)&v9 + 1) = &v16;
  v10 = off_18014A998;
  v11 = v9;
  v12 = &v15;
  v13 = &v10;
  LODWORD(v6) = sub_1800E87A0(a1, v6, &v10);
  unknown_libname_207((__int64)&v10, v7);
  result = (unsigned int)v6;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      result = (unsigned int)sub_1800C437C(
                               retaddr,
                               711LL,
                               "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp");
      continue;
    }
    break;
  }
  return result;
}
