/*
 * XREFs of sub_18006F39C @ 0x18006F39C
 * Callers:
 *     sub_18006E0A8 @ 0x18006E0A8 (sub_18006E0A8.c)
 *     sub_18006ECD0 @ 0x18006ECD0 (sub_18006ECD0.c)
 *     sub_1800701C0 @ 0x1800701C0 (sub_1800701C0.c)
 * Callees:
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006EA3C @ 0x18006EA3C (sub_18006EA3C.c)
 */

char __fastcall sub_18006F39C(_QWORD *P)
{
  __int64 v1; // rdi
  _OWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  volatile signed __int64 *v6; // rcx

  v1 = P[4];
  RtlRbRemoveNode(v1 + 8, P + 1);
  if ( (P[18] & 1) != 0 )
  {
    v3 = P + 7;
    v4 = P[7];
    if ( *(_QWORD **)(v4 + 8) != P + 7 || (v5 = (_QWORD *)P[8], (_OWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    sub_18006E348(P);
  }
  *((_BYTE *)P + 170) &= ~1u;
  if ( sub_18006EA3C((__int64)P) )
    --*(_DWORD *)(v1 + 136);
  sub_18006E348(v6);
  return sub_18006EC84(v1);
}
