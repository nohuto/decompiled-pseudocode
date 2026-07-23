/*
 * XREFs of BgpGxConvertRectangleEx @ 0x14039C5BC
 * Callers:
 *     BgpGxDrawRectangle @ 0x14039BFE8 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14039C078 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x1403B19F8 (BgpTxtDisplayCharacter.c)
 *     BgpGxConvertRectangle @ 0x1403CE804 (BgpGxConvertRectangle.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     BgpGxRectangleCreate @ 0x1409F42C0 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangleEx(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r15
  unsigned int v5; // esi
  __int64 v6; // rdi
  char v7; // bp
  char v8; // r14
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  _BYTE *v12; // r9
  char *v13; // r10
  unsigned int v14; // r11d
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r13d
  unsigned int v18; // r8d
  __int64 v19; // r14
  signed __int64 v20; // rdi
  unsigned int v21; // esi
  unsigned __int8 *v22; // r15
  __int64 v23; // r11
  int v24; // ecx
  int v25; // eax
  char v26; // cl
  unsigned int v27; // eax
  _BYTE *v28; // rax
  int v29; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+28h] [rbp-60h] BYREF
  _DWORD v31[4]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v32[9]; // [rsp+40h] [rbp-48h] BYREF
  char v35; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v31[2] = 0;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  if ( (a4 & 1) != 0 )
  {
    v8 = 1;
    v35 = 1;
    if ( (unsigned int)a2 > *(_DWORD *)(a1 + 8) )
      return 3221225485LL;
    v10 = *a3;
    *(_DWORD *)v10 = *(_DWORD *)a1;
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v10 + 8) = a2;
    *(_DWORD *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 12) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v31[1] = *(_DWORD *)a1;
    v8 = 0;
    v35 = 0;
    v31[0] = *(_DWORD *)(a1 + 4);
    v32[0] = 0LL;
    result = BgpGxRectangleCreate(v31, a2, v32);
    if ( (int)result < 0 )
      return result;
    v10 = v32[0];
  }
  v11 = *(_DWORD *)(v6 + 8);
  v12 = *(_BYTE **)(v10 + 24);
  v13 = *(char **)(v6 + 24);
  v14 = v11 >> 3;
  LODWORD(v32[0]) = v11 >> 3;
  if ( v11 != v5 )
  {
    if ( v5 == 4 )
    {
      v17 = 0;
      if ( *(_DWORD *)v10 )
      {
        do
        {
          v18 = 0;
          if ( *(_DWORD *)(v10 + 4) )
          {
            v19 = v14;
            do
            {
              v31[0] = -1;
              v20 = (char *)FourBitPalette - (char *)&v30;
              v29 = 0;
              v30 = *(_DWORD *)v13;
              do
              {
                v21 = 0;
                v22 = (unsigned __int8 *)&v30;
                v23 = 3LL;
                do
                {
                  v24 = v22[v20];
                  v25 = *v22++;
                  v21 += abs32(v25 - v24) + 2 * abs32(v25 - v24);
                  --v23;
                }
                while ( v23 );
                v26 = v29;
                if ( v21 >= v31[0] )
                  v26 = v7;
                v27 = v29 + 1;
                v20 += 4LL;
                ++v29;
                v7 = v26;
                if ( v21 >= v31[0] )
                  v21 = v31[0];
                v31[0] = v21;
              }
              while ( v27 < 0x10 );
              if ( (v18 & 1) != 0 )
                *v12++ |= v26;
              else
                *v12 = 16 * v26;
              v13 += v19;
              ++v18;
            }
            while ( v18 < *(_DWORD *)(v10 + 4) );
            v14 = v32[0];
          }
          ++v17;
          v28 = v12 + 1;
          if ( (v18 & 1) == 0 )
            v28 = v12;
          v12 = v28;
        }
        while ( v17 < *(_DWORD *)v10 );
        v6 = a1;
        v8 = v35;
        v4 = a3;
      }
    }
    else
    {
      v15 = *(_DWORD *)v10 * *(_DWORD *)(v10 + 4);
      if ( v15 )
      {
        v16 = v15;
        do
        {
          v12[2] = v13[2];
          v12[1] = v13[1];
          *v12 = *v13;
          if ( v5 == 32 )
            v12[3] = 0;
          v13 += v14;
          v12 += v5 >> 3;
          --v16;
        }
        while ( v16 );
      }
    }
    if ( v8 )
      *(_DWORD *)(v6 + 16) |= 0x10u;
    goto LABEL_7;
  }
  if ( !v8 )
  {
    memmove(v12, v13, *(unsigned int *)(v6 + 12));
LABEL_7:
    *v4 = v10;
  }
  return 0LL;
}
