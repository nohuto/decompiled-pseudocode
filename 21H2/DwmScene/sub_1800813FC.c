/*
 * XREFs of sub_1800813FC @ 0x1800813FC
 * Callers:
 *     sub_180071BE8 @ 0x180071BE8 (sub_180071BE8.c)
 *     sub_1800BA2BC @ 0x1800BA2BC (sub_1800BA2BC.c)
 * Callees:
 *     sub_180072698 @ 0x180072698 (sub_180072698.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800813FC(__int64 *a1, _QWORD *a2)
{
  __int64 j; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 i; // rcx
  __int64 v6; // rdx
  __int64 v8[2]; // [rsp+20h] [rbp-28h] BYREF

  sub_180072698(a1, v8, a2);
  j = v8[0];
  v3 = 0LL;
  while ( j != v8[1] )
  {
    v4 = *(_QWORD *)(j + 16);
    ++v3;
    if ( *(_BYTE *)(v4 + 25) )
    {
      for ( i = *(_QWORD *)(j + 8); !*(_BYTE *)(i + 25) && j == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        j = i;
      j = i;
    }
    else
    {
      v6 = *(_QWORD *)v4;
      for ( j = *(_QWORD *)(j + 16); !*(_BYTE *)(v6 + 25); v6 = *(_QWORD *)v6 )
        j = v6;
    }
  }
  return v3;
}
