/*
 * XREFs of InitializeInteractionStateInfo @ 0x180032B58
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800DB4D4 (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeInteractionStateInfo(__int64 a1)
{
  __int64 v2; // r8
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 result; // rax
  _OWORD v16[3]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-1A8h]
  int v18; // [rsp+78h] [rbp-160h]
  int v19; // [rsp+BCh] [rbp-11Ch]
  int v20; // [rsp+100h] [rbp-D8h]
  int v21; // [rsp+144h] [rbp-94h]
  int v22; // [rsp+188h] [rbp-50h]
  int v23; // [rsp+1CCh] [rbp-Ch]

  v17 = 0LL;
  memset(v16, 0, sizeof(v16));
  v18 = 0;
  v2 = 3LL;
  v3 = (_OWORD *)a1;
  v19 = 0;
  v20 = 0;
  v4 = v16;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  do
  {
    v5 = v4[1];
    *v3 = *v4;
    v6 = v4[2];
    v3[1] = v5;
    v7 = v4[3];
    v3[2] = v6;
    v8 = v4[4];
    v3[3] = v7;
    v9 = v4[5];
    v3[4] = v8;
    v10 = v4[6];
    v3[5] = v9;
    v11 = v4[7];
    v4 += 8;
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v2;
  }
  while ( v2 );
  v12 = v4[1];
  *v3 = *v4;
  v3[1] = v12;
  v13 = v4[3];
  v3[2] = v4[2];
  v14 = v4[4];
  v3[3] = v13;
  v3[4] = v14;
  *(_BYTE *)(a1 + 24) &= 0xC0u;
  result = 1065353216LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 1065353216LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 76) = 1065353216LL;
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_DWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 96) = 1065353216LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 1065353216;
  *(_WORD *)(a1 + 120) = 32085;
  *(_QWORD *)(a1 + 124) = 1065353216LL;
  *(_QWORD *)(a1 + 132) = 0LL;
  *(_DWORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 144) = 1065353216LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 164) = 1065353216LL;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 1065353216;
  *(_WORD *)(a1 + 188) = 32085;
  *(_OWORD *)(a1 + 192) = _xmm;
  *(_WORD *)(a1 + 256) = 32085;
  *(_OWORD *)(a1 + 208) = _xmm;
  *(_OWORD *)(a1 + 224) = _xmm;
  *(_OWORD *)(a1 + 240) = _xmm;
  *(_WORD *)(a1 + 324) = 32085;
  *(_OWORD *)(a1 + 260) = _xmm;
  *(_OWORD *)(a1 + 276) = _xmm;
  *(_OWORD *)(a1 + 292) = _xmm;
  *(_OWORD *)(a1 + 308) = _xmm;
  *(_WORD *)(a1 + 392) = 32085;
  *(_OWORD *)(a1 + 328) = _xmm;
  *(_OWORD *)(a1 + 344) = _xmm;
  *(_OWORD *)(a1 + 360) = _xmm;
  *(_OWORD *)(a1 + 376) = _xmm;
  *(_WORD *)(a1 + 460) = 32085;
  *(_OWORD *)(a1 + 396) = _xmm;
  *(_OWORD *)(a1 + 412) = _xmm;
  *(_OWORD *)(a1 + 428) = _xmm;
  *(_OWORD *)(a1 + 444) = _xmm;
  return result;
}
