/*
 * XREFs of sub_18012ACAC @ 0x18012ACAC
 * Callers:
 *     sub_18012B740 @ 0x18012B740 (sub_18012B740.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012ACAC(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int16 v5; // ax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  *(_DWORD *)(a1 + 116) = 262142;
  v3 = *a2;
  *(_WORD *)(a1 + 124) = 0;
  *(_OWORD *)(a1 + 100) = v3;
  *(_DWORD *)(a1 + 120) = 1;
  *(_OWORD *)(a1 + 126) = xmmword_180174BA0;
  *(_OWORD *)(a1 + 142) = xmmword_180174BB0;
  *(_OWORD *)(a1 + 158) = xmmword_180174BC0;
  *(_OWORD *)(a1 + 174) = xmmword_180174BD0;
  *(_OWORD *)(a1 + 190) = xmmword_180174BE0;
  *(_OWORD *)(a1 + 206) = xmmword_180174BF0;
  *(_OWORD *)(a1 + 222) = xmmword_180174C00;
  *(_DWORD *)(a1 + 238) = 0;
  v4 = a1 + 242;
  v5 = *(_WORD *)(a1 + 240);
  v6 = *(_OWORD *)(a1 + 112);
  *(_OWORD *)v4 = *(_OWORD *)(a1 + 96);
  v7 = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(v4 + 16) = v6;
  v8 = *(_OWORD *)(a1 + 144);
  *(_OWORD *)(v4 + 32) = v7;
  v9 = *(_OWORD *)(a1 + 160);
  *(_OWORD *)(v4 + 48) = v8;
  v10 = *(_OWORD *)(a1 + 176);
  *(_OWORD *)(v4 + 64) = v9;
  v11 = *(_OWORD *)(a1 + 192);
  *(_OWORD *)(v4 + 80) = v10;
  v12 = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v4 + 96) = v11;
  *(_OWORD *)(v4 + 112) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v4 + 128) = v12;
  *(_WORD *)(v4 + 144) = v5;
  return 0LL;
}
