/*
 * XREFs of sub_180019400 @ 0x180019400
 * Callers:
 *     unknown_libname_39 @ 0x180126DCE (unknown_libname_39.c)
 *     sub_18012B7C1 @ 0x18012B7C1 (sub_18012B7C1.c)
 *     sub_18012BC33 @ 0x18012BC33 (sub_18012BC33.c)
 *     sub_18012C7A1 @ 0x18012C7A1 (sub_18012C7A1.c)
 *     sub_18012F1E9 @ 0x18012F1E9 (sub_18012F1E9.c)
 *     sub_18012F20F @ 0x18012F20F (sub_18012F20F.c)
 *     sub_18012F235 @ 0x18012F235 (sub_18012F235.c)
 *     unknown_libname_152 @ 0x18012F241 (unknown_libname_152.c)
 *     sub_18012F851 @ 0x18012F851 (sub_18012F851.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

void __fastcall sub_180019400(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x18001945CLL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
