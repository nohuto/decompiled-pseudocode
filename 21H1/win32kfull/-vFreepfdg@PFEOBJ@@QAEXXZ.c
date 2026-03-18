/*
 * XREFs of ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C
 * Callers:
 *     _GreGetFontUnicodeRanges@8 @ 0x840D4 (_GreGetFontUnicodeRanges@8.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QAEXH@Z @ 0xD08C4 (-vDestroyFont@RFONTOBJ@@QAEXH@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ?bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z @ 0xDCAD6 (-bComputeGISET@@YGHPAU_IFIMETRICS@@PAVPFE@@PAPAU_GISET@@@Z.c)
 *     ?bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z @ 0x1F826B (-bComputeQuickLookup@@YGHPAU_QUICKLOOKUP@@PAVPFE@@H@Z.c)
 * Callees:
 *     _UmfdTrueTypeFreeGlyphset@12 @ 0xD3248 (_UmfdTrueTypeFreeGlyphset@12.c)
 */

void __thiscall PFEOBJ::vFreepfdg(int **this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int *v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // ecx

  v2 = 0;
  v3 = **this;
  GreAcquireSemaphore(ghsemGlyphSet);
  v4 = (*this)[22];
  if ( v4 )
  {
    (*this)[22] = v4 - 1;
    v5 = *this;
    if ( !(*this)[22] )
    {
      v6 = *(_DWORD *)(v3 + 60);
      if ( v6 == dword_2785B8 && !*(_DWORD *)(*(_DWORD *)(v3 + 56) + 4) )
      {
        UmfdTrueTypeFreeGlyphset((void *)v5[3]);
        (*this)[3] = 0;
      }
      else if ( (*(_DWORD *)(v6 + 24) & 0x8000) != 0 && *(_DWORD *)(v6 + 2068) )
      {
        if ( *(_BYTE *)(v5[5] + 44) == 2 && (v7 = v5[3]) != 0 && (*(_BYTE *)(v7 + 4) & 0x10) != 0 )
        {
          Win32FreePool(v5[3]);
          v5 = *this;
          v8 = 0;
        }
        else
        {
          v2 = v5[3];
          v8 = v5[4];
        }
        v5[3] = 0;
        if ( v2 )
          (*(void (__stdcall **)(int, int))(*(_DWORD *)(v3 + 60) + 2068))(v2, v8);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
}
