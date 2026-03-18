/*
 * XREFs of _CreateStandardMonoPattern @ 0x1BBAAF
 * Callers:
 *     _FindCachedSMP @ 0x1BA0CA (_FindCachedSMP.c)
 *     _GetCachedSMP @ 0x1BA272 (_GetCachedSMP.c)
 * Callees:
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _ComputeBytesPerScanLine @ 0x1BB37B (_ComputeBytesPerScanLine.c)
 *     _DrawCornerLine @ 0x1BBE84 (_DrawCornerLine.c)
 */

int __fastcall CreateStandardMonoPattern(int a1, int *a2)
{
  unsigned __int8 v2; // bl
  unsigned __int8 v3; // al
  unsigned int v4; // esi
  unsigned int v5; // ecx
  unsigned __int16 v6; // bx
  unsigned int v7; // ecx
  int result; // eax
  unsigned int v9; // ecx
  int v10; // eax
  _BYTE *v11; // edi
  int v12; // ecx
  __int16 v13; // si
  _BYTE *v14; // ecx
  unsigned __int16 v15; // ax
  int v16; // edx
  _BYTE *v17; // ebx
  int v18; // eax
  __int16 v19; // cx
  char v20; // dl
  unsigned __int16 v21; // bx
  char *v22; // edi
  unsigned __int16 v23; // ax
  __int16 i; // ax
  int v25; // [esp+Ch] [ebp-4Ch]
  int v26; // [esp+10h] [ebp-48h]
  __int16 v27[2]; // [esp+14h] [ebp-44h]
  _BYTE *Src; // [esp+18h] [ebp-40h]
  int v30; // [esp+24h] [ebp-34h]
  unsigned int v31; // [esp+28h] [ebp-30h]
  int v32; // [esp+2Ch] [ebp-2Ch]
  int v33; // [esp+30h] [ebp-28h]
  int v34; // [esp+34h] [ebp-24h]
  unsigned __int16 v35; // [esp+38h] [ebp-20h]
  unsigned __int16 v36; // [esp+3Ch] [ebp-1Ch]
  __int16 v37; // [esp+40h] [ebp-18h]
  unsigned __int16 MaxCount; // [esp+44h] [ebp-14h]
  int v39; // [esp+48h] [ebp-10h]
  BOOL v40; // [esp+4Ch] [ebp-Ch]
  unsigned int v41; // [esp+50h] [ebp-8h]
  unsigned __int16 v42; // [esp+50h] [ebp-8h]

  v37 = 0;
  MaxCount = *(_WORD *)(a1 + 168);
  v25 = *a2;
  v35 = *(_WORD *)(a1 + 170);
  v26 = a2[1];
  Src = (_BYTE *)a2[3];
  v2 = v26;
  v34 = DivFD6(100, *(_DWORD *)(a1 + 172)) - 100;
  if ( !(_BYTE)v26 )
  {
    v2 = 8;
    LOBYTE(v26) = 8;
  }
  v3 = BYTE1(v26);
  if ( !BYTE1(v26) )
  {
    v3 = 15;
    BYTE1(v26) = 15;
  }
  v4 = ((v3 >> 1) + 100 * (unsigned int)MaxCount) / v3;
  v30 = v2;
  v41 = (MaxCount * (unsigned int)v2 + 5) / 0xA;
  if ( HIBYTE(v25) <= 2u )
  {
    v40 = (v25 & 1) == 0;
    v6 = (v4 + 50) / 0x64;
    v27[0] = v6;
    if ( HIBYTE(v25) )
    {
      if ( HIBYTE(v25) == 1 )
      {
        v4 = 800;
        v40 = (v25 & 1) == 0;
      }
    }
    else
    {
      v6 = 8 * BYTE2(v25);
      v27[0] = v6;
    }
    v7 = v41;
  }
  else
  {
    if ( HIBYTE(v25) > 0x11u )
      return 0;
    v40 = (v25 & 1) == 0;
    v37 = (unsigned __int16)(HIBYTE(v25) - 3) % 3u;
    if ( v37 )
      v40 = (v25 & 1) != 0;
    v5 = MonoPatRatio[(unsigned __int16)(HIBYTE(v25) - 3) / 3u];
    v6 = ((v5 >> 17) + 100 * v4) / HIWORD(v5);
    v27[0] = v6;
    v4 = ((v5 >> 17) + v4 * (unsigned __int16)v5) / HIWORD(v5);
    v7 = ((v5 >> 17) + 10000 * v41) / HIWORD(v5);
  }
  v9 = v7 - v34;
  if ( MaxCount != v35 )
    v4 = ((MaxCount >> 1) + v4 * v35) / MaxCount;
  if ( !v6 )
  {
    v6 = 1;
    v27[0] = 1;
  }
  LOWORD(v4) = (v4 + 50) / 0x64;
  v42 = v4;
  v27[1] = v4;
  if ( !(_WORD)v4 )
  {
    LOWORD(v4) = 1;
    v42 = 1;
    v27[1] = 1;
  }
  v10 = (unsigned __int16)((v9 + 50) / 0x64);
  v39 = v10;
  if ( (unsigned __int16)v10 > v6 )
  {
    LOWORD(v10) = v27[0] - 1;
    v39 = (unsigned __int16)(v27[0] - 1);
  }
  if ( !(_WORD)v10 )
    v39 = 1;
  v32 = v6;
  v36 = ComputeBytesPerScanLine(1u, BYTE2(v25), v6);
  HIWORD(v26) = v36;
  v4 = (unsigned __int16)v4;
  v31 = (unsigned __int16)v4;
  v33 = (unsigned __int16)v4 * v36;
  v11 = Src;
  if ( Src )
  {
    memset(Src, 0, (unsigned __int16)v33);
    if ( HIBYTE(v25) )
    {
      if ( HIBYTE(v25) > 2u )
      {
        DrawCornerLine(Src, v27[1], v36, v39, v40);
        if ( v37 == 2 )
        {
          v12 = v36 * ((unsigned __int16)v4 - 1);
          v13 = v42 >> 1;
          v14 = &Src[v12];
          if ( v42 >> 1 )
          {
            v15 = v36;
            do
            {
              v16 = v15;
              --v13;
              if ( v15 )
              {
                do
                {
                  v16 += 0xFFFF;
                  *v14 |= *v11;
                  *v11++ = *v14++;
                }
                while ( (_WORD)v16 );
                v15 = v36;
              }
              v14 -= 2 * v36;
            }
            while ( v13 );
          }
          v11 = Src;
        }
LABEL_53:
        if ( (v25 & 2) != 0 )
        {
          for ( i = v33; i; --i )
          {
            *v11 = ~*v11;
            ++v11;
          }
        }
        goto LABEL_57;
      }
      v17 = &Src[(unsigned __int16)((v6 - (unsigned __int16)v39) >> 1) >> 3];
      v18 = 128 >> (((v32 - (unsigned __int16)v39) >> 1) & 7);
      if ( (_WORD)v39 )
      {
        v19 = v39;
        v20 = 0;
        do
        {
          do
          {
            --v19;
            v20 |= v18;
            LOBYTE(v18) = (unsigned __int8)v18 >> 1;
          }
          while ( (_BYTE)v18 && v19 );
          *v17 = v20;
          LOBYTE(v18) = 0x80;
          ++v17;
          v20 = 0;
        }
        while ( v19 );
      }
      v21 = v42;
      if ( !v42 )
      {
LABEL_47:
        if ( HIBYTE(v25) != 1 )
        {
          v23 = ((v30 * (unsigned int)v35 + 5) / 0xA - v34 + 50) / 0x64;
          if ( v23 >= v21 )
            v23 = v27[1] - 1;
          if ( !v23 )
            v23 = 1;
          memset(&Src[v36 * ((int)(v4 - v23) >> 1)], 255, v36 * v23);
        }
        goto LABEL_53;
      }
      v22 = Src;
      do
      {
        memcpy(v22, Src, v36);
        v22 += v36;
        --v4;
      }
      while ( v4 );
      v4 = v31;
      v11 = Src;
    }
    v21 = v42;
    goto LABEL_47;
  }
LABEL_57:
  result = v33;
  *a2 = v25;
  a2[1] = v26;
  a2[2] = *(_DWORD *)v27;
  a2[3] = (int)Src;
  return result;
}
