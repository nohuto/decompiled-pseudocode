/*
 * XREFs of ?bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x240FBD
 * Callers:
 *     _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A (_xInsertMetricsPlusRFONTOBJ@12.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x872CA (-QueryFontData@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z @ 0xA8B2A (-pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vInit@EPATHFONTOBJ@@QAEXK@Z @ 0x1E57D8 (-vInit@EPATHFONTOBJ@@QAEXK@Z.c)
 */

int __thiscall RFONTOBJ::bInsertMetricsPlusPath(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  RFONTOBJ *v3; // esi
  int v4; // ebx
  int v5; // edi
  int result; // eax
  unsigned int v7; // eax
  int v8; // ecx
  struct _GLYPHDATA *v9; // eax
  EPATHFONTOBJ *v10; // ecx
  unsigned int v11; // ebx
  EPATHOBJ *v12; // ecx
  _BYTE v13[8]; // [esp+10h] [ebp-A8h] BYREF
  int v14; // [esp+18h] [ebp-A0h]
  struct _GLYPHDATA **v15; // [esp+58h] [ebp-60h]
  int v16; // [esp+5Ch] [ebp-5Ch]
  int v17; // [esp+60h] [ebp-58h] BYREF
  unsigned __int16 v18[2]; // [esp+64h] [ebp-54h] BYREF
  RFONTOBJ *v19; // [esp+68h] [ebp-50h]
  unsigned int v20; // [esp+6Ch] [ebp-4Ch] BYREF
  struct _GLYPHDATA v21; // [esp+70h] [ebp-48h] BYREF

  v3 = this;
  v15 = a2;
  v4 = 0;
  v19 = this;
  v5 = *(_DWORD *)this;
  v16 = v5;
  if ( *(_DWORD *)(v5 + 536) || (result = RFONTOBJ::bAllocateCache(this, this)) != 0 )
  {
    v7 = a3;
    if ( (*(_BYTE *)(*(_DWORD *)v3 + 56) & 2) != 0 )
    {
      *(_DWORD *)v18 = a3;
      v20 = 0;
      RFONTOBJ::vXlatGlyphArray(v3, v18, 1u, &v20, 0, 0);
      v7 = v20;
    }
    v20 = v7;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v13);
    if ( v14 )
    {
      memset(&v21, 0, sizeof(v21));
      v8 = *(_DWORD *)v3;
      v17 = *(_DWORD *)(*(_DWORD *)v3 + 84);
      v9 = &v21;
      if ( !*(_DWORD *)(v8 + 640) )
        v9 = *(struct _GLYPHDATA **)(v5 + 552);
      if ( PFFOBJ::QueryFontData(
             (PFFOBJ *)&v17,
             *(struct DHPDEV__ **)(v8 + 76),
             (struct _FONTOBJ *)v8,
             2u,
             v20,
             v9,
             v13,
             0) != -1 )
      {
        if ( *(_DWORD *)(*(_DWORD *)v3 + 640) )
        {
          qmemcpy(*(void **)(v5 + 552), &v21, 0x14u);
          v5 = v16;
          v3 = v19;
        }
        v20 = EPATHOBJ::cjSize((EPATHOBJ *)v13) + 332;
        v10 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(v3, v20);
        v19 = v10;
        if ( v10 )
        {
          v11 = v20;
          EPATHFONTOBJ::vInit(v10, v20);
          EPATHOBJ::bClone(v12, (struct EPATHOBJ *)v13);
          v10 = v19;
          **(_DWORD **)(v5 + 552) = v19;
        }
        else
        {
          **(_DWORD **)(v5 + 552) = 0;
          v11 = v20;
        }
        *v15 = *(struct _GLYPHDATA **)(v5 + 552);
        *(_DWORD *)(v5 + 552) += *(_DWORD *)(*(_DWORD *)v3 + 640) != 0 ? 20 : 64;
        if ( v10 )
          *(_DWORD *)(v5 + 600) += v11;
        v4 = 1;
      }
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v13);
    return v4;
  }
  return result;
}
