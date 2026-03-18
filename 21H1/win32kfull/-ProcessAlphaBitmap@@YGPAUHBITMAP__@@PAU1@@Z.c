/*
 * XREFs of ?ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z @ 0x77B00
 * Callers:
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreGetDIBitsInternal@36 @ 0x4B3C0 (_GreGetDIBitsInternal@36.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

HBITMAP __thiscall ProcessAlphaBitmap(struct HLFONT__ *this)
{
  HBITMAP result; // eax
  unsigned int v3; // edx
  int DIBitsInternal; // ebx
  unsigned int v5; // eax
  int v6; // edi
  _BYTE *v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  HBITMAP v10; // esi
  int v11; // eax
  volatile signed __int32 *v12; // eax
  int v13; // [esp+10h] [ebp-58h] BYREF
  int v14; // [esp+14h] [ebp-54h]
  HBITMAP v15; // [esp+18h] [ebp-50h]
  unsigned int v16; // [esp+1Ch] [ebp-4Ch]
  _DWORD v17[6]; // [esp+20h] [ebp-48h] BYREF
  int v18; // [esp+38h] [ebp-30h] BYREF
  int v19; // [esp+3Ch] [ebp-2Ch]
  int v20; // [esp+40h] [ebp-28h]
  char *v21; // [esp+44h] [ebp-24h]
  int v22; // [esp+48h] [ebp-20h]
  int v23; // [esp+4Ch] [ebp-1Ch]
  int v24; // [esp+50h] [ebp-18h]
  int v25; // [esp+54h] [ebp-14h]
  int v26; // [esp+58h] [ebp-10h]
  int v27; // [esp+5Ch] [ebp-Ch]
  int v28; // [esp+60h] [ebp-8h]

  if ( !this )
    return 0;
  memset(v17, 0, sizeof(v17));
  if ( !GreExtGetObjectW(this, 24, v17) || v17[4] != 2097153 )
    return 0;
  v19 = v17[1];
  v20 = v17[2];
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v18 = 40;
  v21 = (char *)&loc_1FFFFC + 5;
  v22 = 0;
  v13 = 0;
  result = (HBITMAP)GreCreateDIBitmapReal(*(HDC *)(_gpDispInfo + 28), 0, (int)&v18, 0, 0x2Cu, 0, 0, 0, 0, 0, 0, &v13);
  v15 = result;
  if ( !result )
    return result;
  v19 = v17[1];
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v18 = 40;
  v20 = v17[2];
  v21 = (char *)&loc_1FFFFC + 5;
  v22 = 0;
  DIBitsInternal = GreGetDIBitsInternal(
                     *(HDC *)(_gpDispInfo + 28),
                     this,
                     0,
                     (HBITMAP)v17[2],
                     v13,
                     &v18,
                     0,
                     (struct tagBITMAPINFO *)(v17[2] * (((32 * v17[1]) >> 3) & 0xFFFFFFFC)),
                     0x28u);
  if ( DIBitsInternal )
  {
    DIBitsInternal = 0;
    v5 = v19 * v20;
    v3 = 0;
    v6 = v13;
    v14 = 0;
    v16 = v19 * v20;
    if ( v19 * v20 )
    {
      v7 = (_BYTE *)(v13 + 3);
      while ( !*v7 )
      {
        ++v3;
        v7 += 4;
        if ( v3 >= v5 )
          goto LABEL_12;
      }
      DIBitsInternal = 1;
      v14 = 1;
    }
LABEL_12:
    if ( DIBitsInternal )
    {
      v8 = 0;
      if ( v5 )
      {
        while ( 1 )
        {
          v9 = *(_DWORD *)(v6 + 4 * v8);
          *(_BYTE *)(v6 + 4 * v8 + 2) = HIBYTE(v9) * BYTE2(v9) / 0xFFu;
          *(_BYTE *)(v13 + 4 * v8 + 1) = HIBYTE(v9) * BYTE1(v9) / 0xFFu;
          v3 = HIBYTE(v9) * (unsigned __int8)v9 / 0xFFu;
          *(_BYTE *)(v13 + 4 * v8++) = v3;
          if ( v8 >= v16 )
            break;
          v6 = v13;
        }
        DIBitsInternal = v14;
      }
    }
  }
  v10 = v15;
  LOBYTE(v3) = 5;
  v11 = HmgLock(v15, v3);
  if ( v11 )
  {
    v12 = (volatile signed __int32 *)(v11 + 8);
    _InterlockedDecrement(v12);
    _InterlockedDecrement(v12);
  }
  if ( !DIBitsInternal )
  {
    GreDeleteObject(v10);
    return 0;
  }
  return v10;
}
