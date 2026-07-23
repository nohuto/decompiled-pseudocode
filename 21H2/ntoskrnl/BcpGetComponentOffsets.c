/*
 * XREFs of BcpGetComponentOffsets @ 0x1405C537C
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1405C5934 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BcpDisplayProgress @ 0x1405C5170 (BcpDisplayProgress.c)
 */

__int64 __fastcall BcpGetComponentOffsets(__int64 *a1, _DWORD *a2, int *a3, int a4, int a5, char a6)
{
  int *v6; // r13
  int v8; // edi
  __int64 v9; // r11
  int v11; // r9d
  int v12; // r10d
  __int64 v13; // rbx
  int v14; // ecx
  int v15; // r12d
  unsigned int v16; // esi
  unsigned int v17; // ebp
  int v18; // edx
  int v19; // ecx
  __int64 v21; // [rsp+20h] [rbp-48h]
  int *v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v6 = (int *)(a1 + 1);
  *a1 = BcpCursor;
  v8 = 0;
  v9 = a4;
  v11 = dword_140C4C628;
  v12 = 0;
  *((_DWORD *)a1 + 2) = dword_140C4C628;
  v13 = 9 * v9;
  *(_DWORD *)a1 = dword_140C10EF0[18 * v9 + 4] + dword_140C10EF0[18 * v9 + 8];
  v14 = v11 + dword_140C10EF0[18 * v9 + 11];
  *((_DWORD *)a1 + 1) = v14;
  *v6 = dword_140C10EF0[18 * v9 + 11] + v14;
  v15 = *((_DWORD *)a1 + 2);
  v21 = *a1;
  if ( a6 )
  {
    dword_140C134F0 |= 0x1000000u;
    v16 = 0;
    v17 = HIDWORD(v21);
    while ( 1 )
    {
      v12 = BcpDisplayProgress(v16, v9, (__int64)a3);
      if ( v12 < 0 )
        break;
      if ( __PAIR64__(v17, v21) < BcpProgressEnd )
      {
        v15 = dword_140C13408;
        LODWORD(v21) = BcpProgressEnd;
        v17 = HIDWORD(BcpProgressEnd);
      }
      BcpCursor = *a1;
      if ( v6 )
        dword_140C4C628 = *v6;
      LODWORD(v9) = a4;
      if ( ++v16 > 0x64 )
      {
        dword_140C134F0 &= ~0x1000000u;
        a3 = v22;
        goto LABEL_10;
      }
    }
  }
  else
  {
LABEL_10:
    v18 = dword_140C10EF0[2 * v13 + 4] + dword_140C10EF0[2 * v13 + 8];
    *a3 = v18;
    a3[1] = v15 + dword_140C10EF0[2 * v13 + 13];
    if ( a5 )
      v8 = a5 + dword_140C10EF0[2 * v13 + 14];
    *a2 = v18 + v8;
    v19 = v15 + dword_140C10EF0[2 * v13 + 15];
    a2[1] = v19;
    a2[2] = dword_140C10EF0[2 * v13 + 11] + v19;
  }
  return (unsigned int)v12;
}
