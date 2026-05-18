/*
 * XREFs of sub_1800784C0 @ 0x1800784C0
 * Callers:
 *     sub_180080DEC @ 0x180080DEC (sub_180080DEC.c)
 *     sub_1800811D4 @ 0x1800811D4 (sub_1800811D4.c)
 *     sub_1800ABE14 @ 0x1800ABE14 (sub_1800ABE14.c)
 *     sub_1800ABE80 @ 0x1800ABE80 (sub_1800ABE80.c)
 *     sub_1800AC3FC @ 0x1800AC3FC (sub_1800AC3FC.c)
 *     sub_1800B3974 @ 0x1800B3974 (sub_1800B3974.c)
 *     sub_1800B3BA0 @ 0x1800B3BA0 (sub_1800B3BA0.c)
 *     sub_1800E97D8 @ 0x1800E97D8 (sub_1800E97D8.c)
 *     sub_1800E9B38 @ 0x1800E9B38 (sub_1800E9B38.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1800784C0(_QWORD *a1, char a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = a1[4];
  if ( v4 >= 0x10 )
  {
    v5 = a1[1];
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x180078539LL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[3] = 0LL;
  a1[4] = 15LL;
  *((_BYTE *)a1 + 8) = 0;
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
