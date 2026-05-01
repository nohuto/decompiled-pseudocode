/*
 * XREFs of sub_18000476C @ 0x18000476C
 * Callers:
 *     sub_180001EF8 @ 0x180001EF8 (sub_180001EF8.c)
 *     sub_180004474 @ 0x180004474 (sub_180004474.c)
 *     sub_180012DB4 @ 0x180012DB4 (sub_180012DB4.c)
 *     sub_180072A4C @ 0x180072A4C (sub_180072A4C.c)
 *     sub_180073544 @ 0x180073544 (sub_180073544.c)
 * Callees:
 *     sub_180004818 @ 0x180004818 (sub_180004818.c)
 *     sub_180009F5C @ 0x180009F5C (sub_180009F5C.c)
 *     sub_18000CE90 @ 0x18000CE90 (sub_18000CE90.c)
 *     sub_18001049C @ 0x18001049C (sub_18001049C.c)
 *     sub_18003C57C @ 0x18003C57C (sub_18003C57C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 */

__int64 __fastcall sub_18000476C(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v18[544]; // [rsp+40h] [rbp-258h] BYREF

  v6 = a3;
  if ( a3 )
  {
    v8 = a4 + 16;
    v9 = a3;
    do
    {
      if ( *(_BYTE *)(v8 + 5) )
        *(_DWORD *)v8 = 101;
      v8 += 24LL;
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned __int8)sub_18001049C(a5) && (unsigned __int8)sub_18003C57C(a5) )
  {
    v12 = *(_QWORD *)(a5 + 48);
    v13 = 0LL;
    if ( (int)sub_180009F5C(a5 + 88, v18) >= 0 )
    {
      v14 = sub_18000CE90(v12, v18);
      if ( v14 )
        v13 = v14;
    }
    v17 = (v13 + 552) & -(__int64)(*(_QWORD *)(v13 + 552) != 0LL);
    while ( 1 )
    {
      v15 = sub_180073444(&v17);
      if ( !v15 )
        break;
      if ( v15 != a5 && *(_DWORD *)(v15 + 624) == 2 )
        sub_180004818(v10, a2, v6, a4, v15);
    }
    if ( (_DWORD)v6 )
    {
      v16 = a4 + 16;
      v10 = v6;
      do
      {
        if ( *(_BYTE *)(v16 + 5) && *(_DWORD *)(v16 - 16) == 28 )
          *(_DWORD *)v16 = 101;
        v16 += 24LL;
        --v10;
      }
      while ( v10 );
    }
  }
  return sub_180004818(v10, a2, v6, a4, a5);
}
