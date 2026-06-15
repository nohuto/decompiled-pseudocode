/*
 * XREFs of sub_180023050 @ 0x180023050
 * Callers:
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 * Callees:
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 */

__int64 __fastcall sub_180023050(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = a2;
  if ( !a2 && !(unsigned int)sub_1800234D0(a1) )
    return a1 + 168;
  if ( !a3 )
  {
    v6 = sub_1800233B0(a1 + 1656, v3);
    sub_1800230F0(v6);
    v7 = sub_1800233B0(a1 + 1672, v3);
    sub_1800230F0(v7);
    v8 = sub_1800233B0(a1 + 1688, v3);
    sub_1800230F0(v8);
  }
  return sub_1800234A0(a1 + 152, v3);
}
