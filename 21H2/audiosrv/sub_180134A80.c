/*
 * XREFs of sub_180134A80 @ 0x180134A80
 * Callers:
 *     sub_1800086D8 @ 0x1800086D8 (sub_1800086D8.c)
 * Callees:
 *     sub_1800308A0 @ 0x1800308A0 (sub_1800308A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180133BDC @ 0x180133BDC (sub_180133BDC.c)
 *     sub_180135100 @ 0x180135100 (sub_180135100.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180134A80(__int64 a1)
{
  char v2; // si
  __int64 i; // rbx
  _WORD *v4; // rdx
  __int64 v5; // rdx
  _BYTE *v6; // r8
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp-18h]

  v2 = 1;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)sub_180135100(a1, &v8) >= 0 )
  {
    for ( i = v8; i != *((_QWORD *)&v8 + 1); i += 32LL )
    {
      v4 = (_WORD *)i;
      if ( *(_QWORD *)(i + 24) >= 8uLL )
        v4 = *(_WORD **)i;
      sub_180060060(v11, v4);
      sub_1800308A0((_QWORD *)(a1 + 464), &v10, (char *)v11);
      if ( v12 >= 8 )
        sub_1800472E0(v11[0], 2 * v12 + 2);
      if ( v2 && v10 != *(_QWORD *)(a1 + 472) )
      {
        v5 = 0LL;
        v6 = (_BYTE *)(a1 + 272);
        while ( !*v6 || *(int *)(v5 + *(_QWORD *)(v10 + 48) + 8) >= 0 )
        {
          v6 += 32;
          v5 += 24LL;
          if ( v5 >= 144 )
            goto LABEL_16;
        }
        v2 = 0;
      }
LABEL_16:
      ;
    }
  }
  if ( (_QWORD)v8 )
  {
    sub_180133BDC((__int64 *)v8, *((__int64 **)&v8 + 1));
    sub_1800472E0(v8, (v9 - v8) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  return v2;
}
