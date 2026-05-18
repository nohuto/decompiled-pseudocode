/*
 * XREFs of sub_18000D088 @ 0x18000D088
 * Callers:
 *     sub_18000E728 @ 0x18000E728 (sub_18000E728.c)
 * Callees:
 *     sub_18000C330 @ 0x18000C330 (sub_18000C330.c)
 *     sub_18000CDA0 @ 0x18000CDA0 (sub_18000CDA0.c)
 */

char *__fastcall sub_18000D088(char a1)
{
  __int64 v1; // rbx
  char *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = qword_18021F470;
  v2 = 0LL;
  if ( qword_18021F470 )
  {
    if ( !*(_QWORD *)(qword_18021F470 + 8) )
    {
      v4 = *(_QWORD *)qword_18021F470;
      v8 = 0LL;
      if ( (int)sub_18000C330(v4, &v8) >= 0 && !*(_QWORD *)(v1 + 8) )
        *(_QWORD *)(v1 + 8) = v8;
    }
    v5 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v5 )
    {
      v6 = sub_18000CDA0(v5 + 8, a1);
      v2 = v6;
      if ( v6 )
      {
        if ( !*((_QWORD *)v6 + 1) )
          *((_QWORD *)v6 + 1) = v5 + 4;
      }
    }
  }
  return v2;
}
