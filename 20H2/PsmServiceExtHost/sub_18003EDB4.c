/*
 * XREFs of sub_18003EDB4 @ 0x18003EDB4
 * Callers:
 *     sub_18003ED34 @ 0x18003ED34 (sub_18003ED34.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_18003EDB4(__int64 a1, _OWORD *a2)
{
  __int128 v2; // xmm0
  _OWORD *v3; // rdx
  int v4; // eax

  *(_OWORD *)(a1 + 8) = *a2;
  *(_OWORD *)(a1 + 24) = a2[1];
  *(_OWORD *)(a1 + 40) = a2[2];
  *(_OWORD *)(a1 + 56) = a2[3];
  *(_OWORD *)(a1 + 72) = a2[4];
  *(_OWORD *)(a1 + 88) = a2[5];
  *(_OWORD *)(a1 + 104) = a2[6];
  v2 = a2[7];
  v3 = a2 + 8;
  *(_OWORD *)(a1 + 120) = v2;
  *(_OWORD *)(a1 + 136) = *v3;
  *(_OWORD *)(a1 + 152) = v3[1];
  *(_OWORD *)(a1 + 168) = v3[2];
  *(_OWORD *)(a1 + 184) = v3[3];
  *(_OWORD *)(a1 + 200) = v3[4];
  v4 = TpAllocWork(a1 + 264, sub_180031940, a1, 0LL);
  if ( v4 >= 0 )
    v4 = 0;
  return v4 | 0x10000000;
}
