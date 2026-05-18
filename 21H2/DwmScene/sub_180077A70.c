/*
 * XREFs of sub_180077A70 @ 0x180077A70
 * Callers:
 *     sub_1800727E0 @ 0x1800727E0 (sub_1800727E0.c)
 *     sub_1800729EC @ 0x1800729EC (sub_1800729EC.c)
 *     sub_180074B90 @ 0x180074B90 (sub_180074B90.c)
 *     sub_180080E20 @ 0x180080E20 (sub_180080E20.c)
 *     sub_18008A128 @ 0x18008A128 (sub_18008A128.c)
 *     sub_18012B3CE @ 0x18012B3CE (sub_18012B3CE.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180077A70(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8

  v1 = a1[7];
  if ( v1 >= 0x10 )
  {
    v3 = a1[4];
    v4 = v1 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
        goto LABEL_12;
      v3 = v5;
    }
    j_j__o_free(v3);
  }
  a1[6] = 0LL;
  a1[7] = 15LL;
  *((_BYTE *)a1 + 32) = 0;
  v8 = a1[3];
  if ( v8 >= 0x10 )
  {
    v9 = *a1;
    v10 = v8 + 1;
    if ( v10 < 0x1000 )
    {
LABEL_10:
      j_j__o_free(v9);
      goto LABEL_11;
    }
    v11 = *(_QWORD *)(v9 - 8);
    v6 = v10 + 39;
    v7 = v9 - v11;
    if ( (unsigned __int64)(v7 - 8) <= 0x1F )
    {
      v9 = v11;
      goto LABEL_10;
    }
LABEL_12:
    o__invalid_parameter_noinfo_noreturn(v7, v6);
    JUMPOUT(0x180077B13LL);
  }
LABEL_11:
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
}
