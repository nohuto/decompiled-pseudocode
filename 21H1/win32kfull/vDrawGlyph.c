/*
 * XREFs of vDrawGlyph @ 0xF70BE
 * Callers:
 *     vStringBitmapTextOut @ 0xF725E (vStringBitmapTextOut.c)
 * Callees:
 *     <none>
 */

char __fastcall vDrawGlyph(unsigned int *a1, int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  _BYTE *v12; // ecx
  int v13; // edx
  unsigned int v14; // esi
  unsigned int v15; // ebx
  _BYTE *v16; // edx
  unsigned int v17; // esi
  _BYTE *v18; // ebx
  unsigned __int8 *v19; // esi
  unsigned __int16 v20; // dx
  unsigned __int8 *v21; // esi
  int v22; // edi
  unsigned __int16 v23; // ax
  int v25; // [esp+Ch] [ebp-20h]
  int v26; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  char v28; // [esp+18h] [ebp-14h]
  unsigned int v29; // [esp+1Ch] [ebp-10h]
  int v31; // [esp+24h] [ebp-8h]
  _BYTE *v32; // [esp+24h] [ebp-8h]
  _BYTE *v34; // [esp+28h] [ebp-4h]
  unsigned __int8 *v35; // [esp+34h] [ebp+8h]

  v4 = **(_DWORD **)(a3 + 4);
  v5 = *(_DWORD *)(v4 + 8);
  v6 = *(_DWORD *)(v4 + 12);
  v31 = v6;
  if ( v5 && v6 )
  {
    v4 += 16;
    v29 = (v5 + 7) >> 3;
    v7 = *(_DWORD *)(a3 + 8);
    v8 = *(_DWORD *)(a3 + 12);
    v35 = (unsigned __int8 *)v4;
    if ( v7 < 0 )
    {
      v4 = -v7;
      if ( (int)v5 <= -v7 )
        return v4;
      v5 -= v7;
      v7 = 0;
    }
    if ( v8 < 0 )
    {
      v4 = -v8;
      if ( v6 <= -v8 )
        return v4;
      v6 -= v8;
      v8 = 0;
      v31 = v6;
    }
    v9 = *a1;
    if ( v7 < v9 )
    {
      v4 = a1[1];
      if ( v8 < v4 )
      {
        v10 = v9 - v7;
        if ( v10 < v5 )
          v5 = v10;
        v11 = v4 - v8;
        if ( v11 < v6 )
        {
          v6 = v11;
          v31 = v11;
        }
        v12 = (char *)a1 + (v7 >> 3) + a2 * v8 + 8;
        v34 = v12;
        if ( (v7 & 7) != 0 )
        {
          v17 = v7 + v5;
          v25 = v17 & 7;
          v28 = v7 & 7;
          v26 = (v17 >> 3) - (v7 >> 3);
          do
          {
            v18 = v12;
            v19 = v35;
            v35 += v29;
            v20 = *v19;
            v21 = v19 + 1;
            if ( v26 )
            {
              v22 = v26;
              do
              {
                --v22;
                *v18++ |= v20 >> v28;
                v20 <<= 8;
                if ( v21 != v35 )
                {
                  v23 = v20 | *v21++;
                  v20 = v23;
                }
              }
              while ( v22 );
              v6 = v31;
            }
            LOBYTE(v4) = v25;
            if ( v25 )
              *v18 |= byte_251CF8[v25] & (unsigned __int8)(v20 >> v28);
            v12 += a2;
            v31 = --v6;
          }
          while ( v6 );
        }
        else
        {
          v13 = v5 & 7;
          v14 = v5 >> 3;
          v27 = v13;
          do
          {
            v4 = (unsigned int)v35;
            v35 += v29;
            v34 += a2;
            v15 = v14;
            if ( v14 )
            {
              v16 = (_BYTE *)v4;
              do
              {
                *v12++ |= *v16++;
                --v15;
              }
              while ( v15 );
              v32 = v16;
              v13 = v27;
              v4 = (unsigned int)v32;
            }
            if ( v13 )
            {
              LOBYTE(v4) = byte_251CF8[v13] & *(_BYTE *)v4;
              *v12 |= v4;
            }
            v12 = v34;
            --v6;
          }
          while ( v6 );
        }
      }
    }
  }
  return v4;
}
