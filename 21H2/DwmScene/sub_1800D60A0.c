/*
 * XREFs of sub_1800D60A0 @ 0x1800D60A0
 * Callers:
 *     sub_1800D61D0 @ 0x1800D61D0 (sub_1800D61D0.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18006832C @ 0x18006832C (sub_18006832C.c)
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     sub_18006AE58 @ 0x18006AE58 (sub_18006AE58.c)
 *     sub_1800D6594 @ 0x1800D6594 (sub_1800D6594.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D60A0(__int64 a1)
{
  __int64 **v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 i; // rax
  __int64 j; // rcx
  __int64 v8; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v9[136]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v10[3]; // [rsp+B8h] [rbp-30h] BYREF

  sub_180067278(a1);
  sub_18006AE58((__int64)v9);
  v2 = *(__int64 ***)(a1 + 48);
  v3 = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    do
    {
      if ( (unsigned int)sub_1801090C0(*(_QWORD *)(a1 + 16 * (v3[4] + 4)), v9, 0LL) == 3 )
      {
        sub_1800D6594(a1 + 8, v3 + 4);
        v3 = (__int64 *)*sub_18006832C((_QWORD *)(a1 + 48), &v8, v3);
      }
      else
      {
        v4 = v3[2];
        if ( *(_BYTE *)(v4 + 25) )
        {
          for ( i = v3[1]; !*(_BYTE *)(i + 25) && v3 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
            v3 = (__int64 *)i;
          v3 = (__int64 *)i;
        }
        else
        {
          v3 = (__int64 *)v3[2];
          for ( j = *(_QWORD *)v4; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
            v3 = (__int64 *)j;
        }
      }
    }
    while ( v3 != *(__int64 **)(a1 + 48) );
  }
  sub_180069FBC(v10, (__int64)v10);
  return sub_180067304(a1);
}
