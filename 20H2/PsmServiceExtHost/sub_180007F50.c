/*
 * XREFs of sub_180007F50 @ 0x180007F50
 * Callers:
 *     sub_1800079FC @ 0x1800079FC (sub_1800079FC.c)
 *     sub_180072A4C @ 0x180072A4C (sub_180072A4C.c)
 * Callees:
 *     sub_180009F5C @ 0x180009F5C (sub_180009F5C.c)
 *     sub_18000CE90 @ 0x18000CE90 (sub_18000CE90.c)
 *     sub_18001049C @ 0x18001049C (sub_18001049C.c)
 *     sub_180012DB4 @ 0x180012DB4 (sub_180012DB4.c)
 *     sub_18003C57C @ 0x18003C57C (sub_18003C57C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180007F50(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rbx
  _BYTE v8[544]; // [rsp+20h] [rbp-248h] BYREF

  result = ((__int64 (*)(void))sub_180012DB4)();
  if ( *(_DWORD *)(a2 + 624) == 2 )
  {
    result = sub_18001049C(a2);
    if ( !(_BYTE)result )
    {
      v5 = *(_QWORD *)(a2 + 48);
      v6 = 0LL;
      result = sub_180009F5C(a2 + 88, v8);
      if ( (int)result >= 0 )
      {
        result = sub_18000CE90(v5, v8);
        if ( result )
          v6 = result;
      }
      v7 = *(_QWORD *)(v6 + 568);
      if ( v7 )
      {
        result = sub_18003C57C(*(_QWORD *)(v6 + 568));
        if ( (_BYTE)result )
          return sub_180012DB4(a1, v7);
      }
    }
  }
  return result;
}
