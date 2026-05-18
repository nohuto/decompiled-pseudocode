/*
 * XREFs of sub_180020E1C @ 0x180020E1C
 * Callers:
 *     sub_18001680C @ 0x18001680C (sub_18001680C.c)
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 *     sub_180036E3C @ 0x180036E3C (sub_180036E3C.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800D7DB8 @ 0x1800D7DB8 (sub_1800D7DB8.c)
 *     sub_1800D8598 @ 0x1800D8598 (sub_1800D8598.c)
 *     sub_1800D875C @ 0x1800D875C (sub_1800D875C.c)
 *     sub_1800D8BD8 @ 0x1800D8BD8 (sub_1800D8BD8.c)
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 *     sub_1800E1A88 @ 0x1800E1A88 (sub_1800E1A88.c)
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180020E1C(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  v4 = a1[3];
  if ( v4 >= 0x10 )
  {
    v5 = *a1;
    v6 = v4 + 1;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = v6 + 39;
      v9 = v5 - v7;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v8);
        JUMPOUT(0x180020E9ALL);
      }
      v5 = v7;
    }
    j_j__o_free(v5);
  }
  a1[2] = 0LL;
  *(_BYTE *)a1 = 0;
  result = 15LL;
  a1[3] = 15LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return result;
}
