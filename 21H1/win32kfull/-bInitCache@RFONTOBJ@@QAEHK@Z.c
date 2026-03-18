/*
 * XREFs of ?bInitCache@RFONTOBJ@@QAEHK@Z @ 0x846D4
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall RFONTOBJ::bInitCache(RFONTOBJ *this, unsigned int a2)
{
  _DWORD *v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // esi
  int v9; // [esp+Ch] [ebp-58h] BYREF
  unsigned __int16 v10[2]; // [esp+10h] [ebp-54h] BYREF
  unsigned int v11; // [esp+14h] [ebp-50h] BYREF
  struct _GLYPHDATA v12; // [esp+18h] [ebp-4Ch] BYREF

  v3 = *(_DWORD **)this;
  v3[141] = 0;
  v3[142] = 0;
  v3[145] = 0;
  v3[146] = 0;
  v3[144] = 0;
  v3[149] = 0;
  v3[148] = 0;
  v3[151] = 0;
  v3[150] = 0;
  v3[143] = 0;
  v3[147] = 0;
  v3[152] = 0;
  v3[156] = 0;
  v3[157] = 0;
  *(_DWORD *)(*(_DWORD *)this + 536) = 0;
  if ( *(_DWORD *)(*(_DWORD *)this + 60) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)this + 60) - 1;
    if ( *(_DWORD *)(*(_DWORD *)this + 60) == 1 )
    {
      if ( v3[158] > 0x8000u )
        a2 |= 1u;
    }
    else
    {
      v3[159] = 0;
      if ( v4 == 1 )
        v3[158] = 0x8000;
      else
        v3[158] = 0;
    }
  }
  *(_DWORD *)(*(_DWORD *)this + 56) = a2;
  v5 = *(_DWORD *)this;
  v11 = 0;
  *(_DWORD *)v10 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v5 + 80) + 20) + 118);
  RFONTOBJ::vXlatGlyphArray(this, v10, 1u, &v11, 2u, 0);
  *(_DWORD *)(*(_DWORD *)this + 708) &= ~0x40u;
  v6 = *(_DWORD *)this;
  v7 = *(_DWORD *)(*(_DWORD *)this + 60);
  memset(&v12, 0, sizeof(v12));
  v9 = *(_DWORD *)(v6 + 84);
  if ( PFFOBJ::QueryFontData(
         (PFFOBJ *)&v9,
         *(struct DHPDEV__ **)(v6 + 76),
         (struct _FONTOBJ *)v6,
         (v7 == 2) + 1,
         v11,
         &v12,
         0,
         0) == -1 )
    return 0;
  *(_DWORD *)(*(_DWORD *)this + 528) = v12.fxD;
  *(_DWORD *)(*(_DWORD *)this + 524) = v11;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)this + 80) + 8) & 8) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)this + 788) = 0;
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)this + 788) = GreCreateSemaphore();
    if ( !*(_DWORD *)(*(_DWORD *)this + 788) )
      return 0;
  }
  *(_DWORD *)(*(_DWORD *)this + 548) = GreCreateSemaphore();
  if ( *(_DWORD *)(*(_DWORD *)this + 548) )
    return 1;
  if ( *(_DWORD *)(*(_DWORD *)this + 788) )
  {
    GreDeleteSemaphore(*(_DWORD *)(*(_DWORD *)this + 788));
    *(_DWORD *)(*(_DWORD *)this + 788) = 0;
  }
  return 0;
}
