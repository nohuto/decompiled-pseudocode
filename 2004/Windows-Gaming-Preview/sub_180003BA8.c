/*
 * XREFs of sub_180003BA8 @ 0x180003BA8
 * Callers:
 *     sub_180003D50 @ 0x180003D50 (sub_180003D50.c)
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 * Callees:
 *     sub_1800080A4 @ 0x1800080A4 (sub_1800080A4.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 */

__int64 __fastcall sub_180003BA8(char a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = qword_18005AB80;
  v3 = 0LL;
  if ( qword_18005AB80 )
  {
    if ( !*(_QWORD *)(qword_18005AB80 + 8) )
    {
      v5 = *(_QWORD *)qword_18005AB80;
      v9 = 0LL;
      if ( (int)sub_18000870C(v5, &v9) >= 0 && !*(_QWORD *)(v2 + 8) )
        *(_QWORD *)(v2 + 8) = v9;
    }
    v6 = (*(_QWORD *)(v2 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v2 + 8) != 0LL);
    if ( v6 )
    {
      LOBYTE(a2) = a1;
      v7 = sub_1800080A4(v6 + 8, a2);
      v3 = v7;
      if ( v7 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *(_QWORD *)(v7 + 8) = v6 + 4;
      }
    }
  }
  return v3;
}
