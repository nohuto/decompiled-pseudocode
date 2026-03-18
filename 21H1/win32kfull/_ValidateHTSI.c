/*
 * XREFs of _ValidateHTSI @ 0x1BB56A
 * Callers:
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 * Callees:
 *     _ValidateRGBBitFields @ 0x1BB7F9 (_ValidateRGBBitFields.c)
 */

int __fastcall ValidateHTSI(int a1, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // eax
  int *v8; // esi
  int *v9; // esi
  _DWORD *v10; // esi
  int v11; // eax
  unsigned int *v12; // esi
  unsigned int *v13; // esi
  unsigned __int8 v14; // al
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edx
  char v22; // al
  unsigned int v23; // esi
  int v25; // [esp-4h] [ebp-24h]
  int v26; // [esp+Ch] [ebp-14h]
  unsigned int v27; // [esp+Ch] [ebp-14h]
  int v28; // [esp+10h] [ebp-10h]
  int v29; // [esp+10h] [ebp-10h]
  unsigned int v30; // [esp+14h] [ebp-Ch]
  int v31; // [esp+18h] [ebp-8h]
  _DWORD *v32; // [esp+18h] [ebp-8h]

  if ( !a2 )
  {
    v11 = *(_DWORD *)(a1 + 12);
    if ( !v11 )
      return -36;
    v12 = *(unsigned int **)(v11 + 24);
    if ( !v12 )
      return -17;
    v27 = *v12;
    v13 = v12 + 1;
    v29 = *v13++;
    v30 = *v13;
    v32 = (_DWORD *)v13[1];
    if ( (unsigned __int8)v27 > 2u )
      return -29;
    *(_BYTE *)(a1 + 52) = HIBYTE(v27);
    v14 = *(_BYTE *)(v11 + 6);
    *(_BYTE *)(a1 + 33) = v14;
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( !v18 )
          {
            v22 = 2;
LABEL_48:
            if ( (_BYTE)v27 || BYTE2(v27) != v22 || v30 != 3 || !v32 )
              return -18;
            *(_DWORD *)(a1 + 40) = *v32;
            *(_DWORD *)(a1 + 44) = v32[1];
            *(_DWORD *)(a1 + 48) = v32[2];
            goto LABEL_44;
          }
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 != 1 )
              return -9;
            v22 = 4;
            goto LABEL_48;
          }
          if ( !(_BYTE)v27 && *(_WORD *)((char *)&v27 + 1) == 769 && HIBYTE(v27) <= 5u && v29 == 255 )
          {
            v20 = SrcOrderTable[HIBYTE(v27)];
            *(_DWORD *)(a1 + 40) = 255 << (8 * BYTE1(v20));
            *(_DWORD *)(a1 + 44) = 255 << (8 * BYTE2(v20));
            *(_DWORD *)(a1 + 48) = 255 << ((v20 >> 21) & 0xF8);
            goto LABEL_44;
          }
          return -24;
        }
        v23 = 256;
LABEL_57:
        if ( BYTE1(v27) == 1 )
        {
          if ( BYTE2(v27) < 3u )
            return -24;
          if ( HIBYTE(v27) > 5u )
            return -23;
          if ( !v32 )
            return -18;
          if ( v30 <= v23 && v30 )
          {
            if ( v29 != 255 )
              return -22;
LABEL_44:
            if ( ValidateRGBBitFields(a1 + 32) )
              return 1;
            return -18;
          }
        }
        return -20;
      }
      v25 = 16;
    }
    else
    {
      v25 = 2;
    }
    v23 = v25;
    goto LABEL_57;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v5 = *(_DWORD *)(a1 + 20);
    if ( !v5 )
      return -37;
    *(_DWORD *)(a1 + 28) = 0;
    v6 = *(unsigned __int8 *)(v5 + 6);
    if ( v6 <= 0xFD )
    {
      if ( v6 >= 0xFC || v6 == 1 || v6 == 2 || v6 > 4 && v6 <= 6 )
        return 1;
      return -11;
    }
    v7 = v6 - 254;
    if ( !v7 )
    {
      v8 = *(int **)(v5 + 24);
      if ( v8 )
      {
        v26 = *v8;
        v9 = v8 + 1;
        v28 = *v9;
        v10 = v9 + 1;
        v31 = v10[1];
        if ( v31 )
        {
          if ( *v10 == 256 && v28 == 255 && BYTE2(v26) == 1 && !(_BYTE)v26 )
            *(_DWORD *)(a1 + 28) = v31;
        }
      }
      return 1;
    }
    if ( v7 != 1 )
      return -11;
    return 1;
  }
  if ( v3 != 1 )
    return 1;
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v4 || *(_BYTE *)(v4 + 6) == 1 )
    return 1;
  return -10;
}
