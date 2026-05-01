/*
 * XREFs of sub_180025F18 @ 0x180025F18
 * Callers:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_180023FA0 @ 0x180023FA0 (sub_180023FA0.c)
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 *     sub_18007FD78 @ 0x18007FD78 (sub_18007FD78.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 * Callees:
 *     sub_180025704 @ 0x180025704 (sub_180025704.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 */

unsigned __int64 __fastcall sub_180025F18(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v7; // esi

  v2 = a1 + 40;
  if ( a2 == 1 )
    return sub_180025704(v2);
  v6 = sub_180025704(v2);
  if ( !v6 )
    return 0LL;
  v7 = a2 - 1;
  while ( 1 )
  {
    v4 = sub_180025F18(v6, v7);
    if ( v4 )
      break;
    v6 = sub_180027434(v6);
    if ( !v6 )
      return 0LL;
  }
  sub_1800274E0(v6);
  return v4;
}
