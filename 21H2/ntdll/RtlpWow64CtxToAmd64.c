/*
 * XREFs of RtlpWow64CtxToAmd64 @ 0x180103778
 * Callers:
 *     RtlpWow64SetContextOnAmd64 @ 0x18006F210 (RtlpWow64SetContextOnAmd64.c)
 * Callees:
 *     RtlFnToFxFrame @ 0x1800FCF68 (RtlFnToFxFrame.c)
 */

__int64 __fastcall RtlpWow64CtxToAmd64(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r9
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  _QWORD *v9; // rcx
  __int64 v10; // r10
  unsigned int *v11; // rdx
  __int64 v12; // rax

  v4 = a1;
  if ( *(_WORD *)(a3 + 56) != 35 )
    v4 = a1 & 0xFFFEFFF8 | 0x10000;
  if ( (v4 & 0x10001) == 0x10001 )
  {
    *(_WORD *)(a3 + 56) = 35;
    *(_WORD *)(a3 + 66) = 43;
    *(_QWORD *)(a3 + 248) = *(unsigned int *)(a2 + 184);
    *(_QWORD *)(a3 + 160) = *(unsigned int *)(a2 + 180);
    *(_QWORD *)(a3 + 152) = *(unsigned int *)(a2 + 196);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a2 + 192);
  }
  if ( (v4 & 0x10002) == 0x10002 )
  {
    *(_QWORD *)(a3 + 176) = *(unsigned int *)(a2 + 156);
    *(_QWORD *)(a3 + 168) = *(unsigned int *)(a2 + 160);
    *(_QWORD *)(a3 + 144) = *(unsigned int *)(a2 + 164);
    *(_QWORD *)(a3 + 136) = *(unsigned int *)(a2 + 168);
    *(_QWORD *)(a3 + 128) = *(unsigned int *)(a2 + 172);
    *(_QWORD *)(a3 + 120) = *(unsigned int *)(a2 + 176);
  }
  if ( (v4 & 0x10020) == 0x10020 )
  {
    v5 = 2LL;
    v6 = (_OWORD *)(a2 + 204);
    v7 = (_OWORD *)(a3 + 256);
    do
    {
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      v7[4] = v6[4];
      v7[5] = v6[5];
      v7[6] = v6[6];
      v7 += 8;
      v8 = v6[7];
      v6 += 8;
      *(v7 - 1) = v8;
      --v5;
    }
    while ( v5 );
    *v7 = *v6;
    v7[1] = v6[1];
    *(_DWORD *)(a3 + 52) = *(_DWORD *)(a3 + 280);
  }
  if ( (v4 & 0x10008) == 0x10008 )
    RtlFnToFxFrame(a3 + 256, a2 + 28);
  if ( (v4 & 0x10010) == 0x10010 )
  {
    v9 = (_QWORD *)(a3 + 72);
    v10 = 6LL;
    v11 = (unsigned int *)(a2 + 4);
    do
    {
      v12 = *v11++;
      *v9++ = v12;
      --v10;
    }
    while ( v10 );
    if ( (*(_BYTE *)(a2 + 24) & 0x55) == 0
      && (*(_DWORD *)(a2 + 4) || *(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 12) || *(_DWORD *)(a2 + 16)) )
    {
      *(_QWORD *)(a3 + 112) |= 0x100uLL;
    }
  }
  return 0LL;
}
