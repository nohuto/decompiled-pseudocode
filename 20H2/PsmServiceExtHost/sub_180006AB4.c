/*
 * XREFs of sub_180006AB4 @ 0x180006AB4
 * Callers:
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 * Callees:
 *     sub_180006904 @ 0x180006904 (sub_180006904.c)
 *     sub_18000699C @ 0x18000699C (sub_18000699C.c)
 *     sub_180009F5C @ 0x180009F5C (sub_180009F5C.c)
 *     sub_18000CE90 @ 0x18000CE90 (sub_18000CE90.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180006AB4(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  _QWORD *v4; // rbx
  _BYTE v5[544]; // [rsp+20h] [rbp-238h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  result = sub_180009F5C(a1 + 88, v5);
  if ( (int)result >= 0 )
  {
    v4 = (_QWORD *)sub_18000CE90(v1, v5);
    if ( v4 )
    {
      result = sub_180006904((__int64)v4, a1);
      if ( (int)result >= 0 )
      {
        if ( v4[72] == a1 + 64 )
          v4[72] = 0LL;
        sub_18000699C(*(_QWORD *)(a1 + 48), v4);
        return 0LL;
      }
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
