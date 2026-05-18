/*
 * XREFs of sub_18010B8D4 @ 0x18010B8D4
 * Callers:
 *     sub_18010B6C4 @ 0x18010B6C4 (sub_18010B6C4.c)
 * Callees:
 *     sub_18010BCA0 @ 0x18010BCA0 (sub_18010BCA0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18010B8D4(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)sub_18010BCA0(v15, a2, a1) )
  {
    v6 = *a2;
    *a2 = *a1;
    v7 = a1[1];
    *a1 = v6;
    v8 = a2[1];
    a2[1] = v7;
    a1[1] = v8;
  }
  result = sub_18010BCA0(v15, a3, a2);
  if ( (_BYTE)result )
  {
    v10 = *a3;
    *a3 = *a2;
    v11 = a2[1];
    *a2 = v10;
    v12 = a3[1];
    a3[1] = v11;
    a2[1] = v12;
    result = sub_18010BCA0(v15, a2, a1);
    if ( (_BYTE)result )
    {
      v13 = *a2;
      *a2 = *a1;
      result = a1[1];
      *a1 = v13;
      v14 = a2[1];
      a2[1] = result;
      a1[1] = v14;
    }
  }
  return result;
}
