/*
 * XREFs of sub_180033B40 @ 0x180033B40
 * Callers:
 *     sub_1801268AA @ 0x1801268AA (sub_1801268AA.c)
 *     unknown_libname_128 @ 0x180126F70 (unknown_libname_128.c)
 *     sub_180126F7C @ 0x180126F7C (sub_180126F7C.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_3 @ 0x18012C57D (-dtor$0@-0--_Getcat@-$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_3.c)
 *     sub_18012C589 @ 0x18012C589 (sub_18012C589.c)
 *     sub_18012C5EF @ 0x18012C5EF (sub_18012C5EF.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180033B40(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x180033B9CLL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
