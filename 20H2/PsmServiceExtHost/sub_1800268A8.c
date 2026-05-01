/*
 * XREFs of sub_1800268A8 @ 0x1800268A8
 * Callers:
 *     sub_1800267AC @ 0x1800267AC (sub_1800267AC.c)
 * Callees:
 *     sub_18002698C @ 0x18002698C (sub_18002698C.c)
 *     sub_1800269AC @ 0x1800269AC (sub_1800269AC.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 *     sub_18003DAB4 @ 0x18003DAB4 (sub_18003DAB4.c)
 */

__int64 __fastcall sub_1800268A8(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rbx
  int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rax
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v7 = sub_1800269AC(a1, a3, &v14);
  v8 = v14;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = sub_18002698C(v14, a2);
    if ( v10 )
      goto LABEL_3;
    v12 = sub_18003DAB4(v8, a2, &v13);
    v5 = v13;
    v9 = v12;
    if ( v12 >= 0 )
    {
      sub_180032190(v8 + 40, a2, (unsigned int)sub_1800346E0, v13);
      v10 = v14;
      if ( v14 == v5 )
      {
        *a4 = v5;
        v5 = 0LL;
        goto LABEL_4;
      }
LABEL_3:
      *a4 = v10;
LABEL_4:
      v9 = 0;
    }
  }
  if ( v8 )
    sub_1800274E0(v8);
  if ( v5 )
    sub_1800274E0(v5);
  return v9;
}
