/*
 * XREFs of sub_1800153B0 @ 0x1800153B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     sub_1800142F0 @ 0x1800142F0 (sub_1800142F0.c)
 */

__int64 __fastcall sub_1800153B0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( *a2 == 0x4BD1CD637052B94FLL && a2[1] == 0xDB6D126B7184B2B7uLL )
  {
    v5 = a1 + 16;
    sub_1800142F0(a1 + 16);
    *a3 = v5 & -(__int64)(a1 != 0);
    return 0LL;
  }
  else
  {
    sub_18000DC98(retaddr, 113, (__int64)"SpectreNode.cpp", 0x80070057);
    return 2147942487LL;
  }
}
