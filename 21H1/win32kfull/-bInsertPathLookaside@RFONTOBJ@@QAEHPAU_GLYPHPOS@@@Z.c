/*
 * XREFs of ?bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z @ 0x24114B
 * Callers:
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z @ 0x240DE1 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vInit@EPATHFONTOBJ@@QAEXK@Z @ 0x1E57D8 (-vInit@EPATHFONTOBJ@@QAEXK@Z.c)
 *     ?bEnsureAuxCacheBuffer@RFONTOBJ@@QAEHK@Z @ 0x240D7F (-bEnsureAuxCacheBuffer@RFONTOBJ@@QAEHK@Z.c)
 */

int __thiscall RFONTOBJ::bInsertPathLookaside(RFONTOBJ *this, struct _GLYPHPOS *a2)
{
  int v2; // esi
  int v4; // ecx
  GLYPHDEF *v5; // edi
  EPATHOBJ *v6; // ecx
  GLYPHDEF *v7; // eax
  _BYTE v9[8]; // [esp+10h] [ebp-A4h] BYREF
  int v10; // [esp+18h] [ebp-9Ch]
  struct _GLYPHPOS *v11; // [esp+58h] [ebp-5Ch]
  int v12; // [esp+5Ch] [ebp-58h] BYREF
  GLYPHDEF *v13; // [esp+60h] [ebp-54h]
  size_t v14; // [esp+64h] [ebp-50h]
  struct _GLYPHDATA v15; // [esp+68h] [ebp-4Ch] BYREF

  v2 = 0;
  v11 = a2;
  memset(&v15, 0, sizeof(v15));
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v9);
  if ( v10 )
  {
    v4 = *(_DWORD *)this;
    v12 = *(_DWORD *)(*(_DWORD *)this + 84);
    if ( PFFOBJ::QueryFontData(
           (PFFOBJ *)&v12,
           *(struct DHPDEV__ **)(v4 + 76),
           (struct _FONTOBJ *)v4,
           2u,
           a2->hg,
           &v15,
           v9,
           0) != -1 )
    {
      v14 = EPATHOBJ::cjSize((EPATHOBJ *)v9) + 396;
      if ( RFONTOBJ::bEnsureAuxCacheBuffer(this, v14) )
      {
        v5 = *(GLYPHDEF **)(*(_DWORD *)this + 624);
        v13 = v5;
        EPATHFONTOBJ::vInit((EPATHFONTOBJ *)&v5[16], v14 - 64);
        EPATHOBJ::bClone(v6, (struct EPATHOBJ *)v9);
        v7 = v13;
        qmemcpy(v5, &v15, 0x40u);
        v2 = 1;
        v11->pgdf = v7;
        v7->pgb = (GLYPHBITS *)&v5[16];
      }
    }
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v9);
  return v2;
}
