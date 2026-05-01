/*
 * XREFs of sub_180027598 @ 0x180027598
 * Callers:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_180023FA0 @ 0x180023FA0 (sub_180023FA0.c)
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 *     sub_18007FD78 @ 0x18007FD78 (sub_18007FD78.c)
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 * Callees:
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 */

unsigned __int64 __fastcall sub_180027598(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rbx
  unsigned __int64 i; // rax
  unsigned __int64 v6; // rdi
  __int64 v8; // rax

  v2 = a2[4] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 == a1 + 40 )
    return sub_180027434(a2);
  v4 = v2 - 40;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
    __fastfail(0xEu);
  for ( i = sub_180027434(a2); ; i = sub_180025F18(v8, 1) )
  {
    v6 = i;
    if ( i )
      break;
    v8 = sub_180027598(a1, v4);
    v4 = v8;
    if ( !v8 )
    {
      v6 = 0LL;
      break;
    }
  }
  if ( v4 )
    sub_1800274E0((_QWORD *)v4);
  return v6;
}
