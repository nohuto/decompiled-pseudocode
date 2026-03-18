/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x221B4A
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0 (-bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z @ 0x85878 (-QueryFontTree@PFFOBJ@@QAEPAXPAUDHPDEV__@@KKKPAK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC606 (-bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOA.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AAEHK@Z @ 0xDE4D6 (-bAllocPFEData@PFFMEMOBJ@@AAEHK@Z.c)
 *     ??0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0xE7E30 (--0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?bExtendGlyphSet@@YG_NPAPAU_FD_GLYPHSET@@0@Z @ 0x22173E (-bExtendGlyphSet@@YG_NPAPAU_FD_GLYPHSET@@0@Z.c)
 */

BOOL __thiscall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, struct PDEVOBJ *a2)
{
  PFFOBJ *v2; // esi
  unsigned int v3; // ebx
  int v4; // edi
  int v5; // eax
  BOOL result; // eax
  unsigned int v7; // edx
  struct _IFIMETRICS *v8; // eax
  PATHOBJ *v9; // esi
  void (__stdcall *v10)(PATHOBJ *, unsigned int); // eax
  struct _IFIMETRICS *v11; // ecx
  void (__stdcall *v12)(PATHOBJ *, unsigned int); // eax
  void (__stdcall *v13)(struct _IFIMETRICS *, unsigned int); // eax
  int *v14; // [esp+10h] [ebp-24h] BYREF
  int v15; // [esp+14h] [ebp-20h]
  PATHOBJ *v16; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v17; // [esp+1Ch] [ebp-18h] BYREF
  PATHOBJ *v18; // [esp+20h] [ebp-14h] BYREF
  PFFOBJ *v19; // [esp+24h] [ebp-10h]
  unsigned int v20; // [esp+28h] [ebp-Ch]
  unsigned int v21; // [esp+2Ch] [ebp-8h] BYREF
  struct _IFIMETRICS *v22; // [esp+30h] [ebp-4h]

  v2 = this;
  v19 = this;
  v3 = PDEVOBJ::cFonts(a2);
  v4 = 0;
  v5 = *(_DWORD *)(*(_DWORD *)a2 + 24) & 0x8000;
  v17 = 0;
  v15 = v5;
  v21 = 0;
  if ( v3 )
  {
    result = PFFMEMOBJ::bAllocPFEData(v2, v3);
    if ( !result )
      return result;
  }
  v7 = 1;
  v20 = 1;
  if ( !v3 )
  {
LABEL_17:
    if ( v3 )
    {
      FHMEMOBJ::FHMEMOBJ(&v14, (int *)(*(_DWORD *)v2 + 68), 0, v3);
      FHMEMOBJ::FHMEMOBJ(&v14, (int *)(*(_DWORD *)v2 + 72), 1, v3);
      FHMEMOBJ::FHMEMOBJ(&v14, (int *)(*(_DWORD *)v2 + 76), 2, v3);
    }
    return 1;
  }
  while ( 1 )
  {
    v8 = (struct _IFIMETRICS *)(*(int (__stdcall **)(_DWORD, _DWORD, unsigned int, unsigned int *))(*(_DWORD *)a2 + 2004))(
                                 *(_DWORD *)(*(_DWORD *)v2 + 64),
                                 0,
                                 v7,
                                 &v17);
    v22 = v8;
    if ( !v8 )
    {
      EngSetLastError(0x3EBu);
      return v4;
    }
    if ( v15 )
    {
      v9 = 0;
      v21 = 0;
      goto LABEL_15;
    }
    v9 = (PATHOBJ *)PFFOBJ::QueryFontTree(v19, *(struct DHPDEV__ **)(*(_DWORD *)v19 + 64), 0, v20, 3u, &v21);
    v18 = v9;
    if ( !v9 )
      break;
    v8 = v22;
    if ( v22->jWinCharSet == 2 )
    {
      v16 = 0;
      if ( bExtendGlyphSet((int *)&v18, &v16) )
      {
        v10 = *(void (__stdcall **)(PATHOBJ *, unsigned int))(*(_DWORD *)a2 + 2068);
        if ( v10 )
          v10(v18, v21);
        v9 = v16;
      }
      else
      {
        v9 = v18;
      }
      v8 = v22;
    }
LABEL_15:
    if ( !PFFMEMOBJ::bAddEntry(v19, (wchar_t *)v20, (struct _FD_GLYPHSET *)v9, v21, v8, v17, 0, 0) )
      goto LABEL_23;
    v2 = v19;
    v7 = v20 + 1;
    v20 = v7;
    if ( v7 > v3 )
      goto LABEL_17;
  }
  EngSetLastError(0x3EBu);
LABEL_23:
  v11 = v22;
  if ( v22->jWinCharSet != 2 )
    goto LABEL_27;
  if ( v9 )
  {
    if ( (v9->cCurves & 0x10) != 0 )
    {
      Win32FreePool(v9);
      goto LABEL_30;
    }
LABEL_27:
    if ( v9 )
    {
      v12 = *(void (__stdcall **)(PATHOBJ *, unsigned int))(*(_DWORD *)a2 + 2068);
      if ( v12 )
      {
        v12(v9, v21);
LABEL_30:
        v11 = v22;
      }
    }
  }
  v13 = *(void (__stdcall **)(struct _IFIMETRICS *, unsigned int))(*(_DWORD *)a2 + 2068);
  if ( v13 )
    v13(v11, v17);
  return v4;
}
