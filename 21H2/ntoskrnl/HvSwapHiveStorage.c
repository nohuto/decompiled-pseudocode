/*
 * XREFs of HvSwapHiveStorage @ 0x140873ACC
 * Callers:
 *     CmpSwapHiveStorage @ 0x14087326C (CmpSwapHiveStorage.c)
 * Callees:
 *     HvpSwapDual @ 0x140874988 (HvpSwapDual.c)
 */

__int64 __fastcall HvSwapHiveStorage(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // r11
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int128 v20; // xmm5
  __int64 v21; // xmm2_8
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  v10 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 16) = v9;
  v11 = 2LL;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)(a2 + 24) = v4;
  *(_QWORD *)(a2 + 32) = v6;
  *(_QWORD *)(a2 + 40) = v7;
  *(_QWORD *)(a2 + 48) = v8;
  v12 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v10;
  LODWORD(v10) = *(_DWORD *)(a2 + 108);
  *(_QWORD *)(a2 + 64) = v12;
  LODWORD(v12) = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 108) = v10;
  v13 = *(_QWORD *)(a2 + 96);
  *(_DWORD *)(a2 + 108) = v12;
  v14 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v13;
  LODWORD(v13) = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 96) = v14;
  LODWORD(v14) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = v13;
  LODWORD(v13) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 88) = v14;
  LODWORD(v14) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 104) = v13;
  v15 = *(_QWORD *)(a2 + 120);
  *(_DWORD *)(a2 + 104) = v14;
  v16 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 120) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 112) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 128) = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a2 + 128) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 132) = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a2 + 132) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 140);
  *(_DWORD *)(a2 + 136) = v16;
  LOBYTE(v16) = *(_BYTE *)(a1 + 140);
  *(_BYTE *)(a1 + 140) = v16 ^ (v16 ^ v15) & 1;
  *(_BYTE *)(a2 + 140) ^= (v16 ^ *(_BYTE *)(a2 + 140)) & 1;
  LOBYTE(v16) = *(_BYTE *)(a1 + 140);
  *(_BYTE *)(a1 + 140) = v16 ^ (v16 ^ *(_BYTE *)(a2 + 140)) & 2;
  *(_BYTE *)(a2 + 140) ^= (v16 ^ *(_BYTE *)(a2 + 140)) & 2;
  LOBYTE(v16) = *(_BYTE *)(a1 + 141);
  *(_BYTE *)(a1 + 141) = *(_BYTE *)(a2 + 141);
  LODWORD(v15) = *(_DWORD *)(a2 + 144);
  *(_BYTE *)(a2 + 141) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 144) = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a2 + 144) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 148) = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a2 + 148) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 152) = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(a2 + 152) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(a1 + 156) = v15;
  *(_DWORD *)(a2 + 156) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 160) = v16 & 0xFFE07FEC;
  v17 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 160) = v17 ^ (v16 ^ v17) & 0x1F8013;
  *(_DWORD *)(a1 + 160) |= v17 & 0x1F8013;
  v18 = *(_OWORD *)(a1 + 216);
  v19 = *(_OWORD *)(a1 + 232);
  v20 = *(_OWORD *)(a1 + 248);
  v21 = *(_QWORD *)(a1 + 264);
  *(_OWORD *)(a1 + 216) = *(_OWORD *)(a2 + 216);
  *(_OWORD *)(a1 + 232) = *(_OWORD *)(a2 + 232);
  *(_OWORD *)(a1 + 248) = *(_OWORD *)(a2 + 248);
  *(_QWORD *)(a1 + 264) = *(_QWORD *)(a2 + 264);
  v22 = a1 + 272;
  *(_OWORD *)(a2 + 216) = v18;
  *(_OWORD *)(a2 + 232) = v19;
  *(_OWORD *)(a2 + 248) = v20;
  *(_QWORD *)(a2 + 264) = v21;
  v23 = a2 - v22;
  do
  {
    result = HvpSwapDual(v22, v22 + v23 + 272);
    v22 += 632LL;
    --v11;
  }
  while ( v11 );
  return result;
}
