/*
 * XREFs of ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0
 * Callers:
 *     _GreGetFontUnicodeRanges@8 @ 0x840D4 (_GreGetFontUnicodeRanges@8.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z @ 0xDCAD6 (-bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z.c)
 *     ?bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z @ 0x1F826B (-bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x22911D (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z @ 0x85878 (-QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z.c)
 *     ?bExtendGlyphSet@@YG_NPAPAU_FD_GLYPHSET@@0@Z @ 0x22173E (-bExtendGlyphSet@@YG_NPAPAU_FD_GLYPHSET@@0@Z.c)
 */

struct _FD_GLYPHSET *__thiscall PFEOBJ::pfdg(void ***this)
{
  void *v2; // ebx
  int v3; // esi
  void **v4; // ecx
  void *v5; // eax
  int v6; // edx
  int v7; // edx
  void *v8; // esi
  bool v10; // al
  void (__stdcall *v11)(void *, unsigned int); // eax
  struct _FD_GLYPHSET **v12; // [esp+0h] [ebp-28h]
  struct _FD_GLYPHSET **v13; // [esp+4h] [ebp-24h]
  void *v14; // [esp+10h] [ebp-18h] BYREF
  int v15; // [esp+18h] [ebp-10h]
  unsigned int v16; // [esp+1Ch] [ebp-Ch] BYREF
  void *v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]

  v18 = 0;
  v2 = 0;
  v17 = **this;
  v14 = v17;
  v3 = *((_DWORD *)v17 + 15);
  v16 = 0;
  GreAcquireSemaphore(ghsemGlyphSet);
  v4 = *this;
  if ( (*this)[3] )
    goto LABEL_9;
  v15 = *(_DWORD *)(v3 + 24) & 0x8000;
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
    GreReleaseSemaphoreInternal(ghsemGlyphSet);
    v4 = *this;
  }
  v5 = PFFOBJ::QueryFontTree(
         (PFFOBJ *)&v14,
         *((struct DHPDEV__ **)v17 + 16),
         *((_DWORD *)v17 + 14),
         (unsigned int)v4[1],
         3u,
         &v16);
  v6 = v15;
  v2 = v5;
  v17 = v5;
  if ( v15 )
  {
    GreAcquireSemaphore(ghsemGlyphSet);
    v6 = v15;
  }
  if ( !v2 )
    goto LABEL_9;
  if ( (*this)[3] )
  {
    v7 = 1;
    goto LABEL_10;
  }
  (*this)[3] = v2;
  (*this)[4] = (void *)v16;
  if ( !v6 || *((_BYTE *)(*this)[5] + 44) != 2 || (v15 = 0, v10 = bExtendGlyphSet(v12, v13), v2 = v17, !v10) )
  {
LABEL_9:
    v7 = v18;
    goto LABEL_10;
  }
  v7 = 1;
  (*this)[3] = (void *)v15;
LABEL_10:
  if ( (*this)[3] )
    (*this)[22] = (char *)(*this)[22] + 1;
  if ( v7 )
  {
    v11 = *(void (__stdcall **)(void *, unsigned int))(v3 + 2068);
    if ( v11 )
      v11(v2, v16);
  }
  v8 = (*this)[3];
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
  return (struct _FD_GLYPHSET *)v8;
}
