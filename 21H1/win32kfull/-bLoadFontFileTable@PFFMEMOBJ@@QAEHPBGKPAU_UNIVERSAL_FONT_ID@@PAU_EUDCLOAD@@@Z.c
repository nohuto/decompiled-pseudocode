/*
 * XREFs of ?bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC500
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 * Callees:
 *     ?bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC606 (-bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOA.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AAEHK@Z @ 0xDE4D6 (-bAllocPFEData@PFFMEMOBJ@@AAEHK@Z.c)
 *     ?FindDefaultLinkedFontEntry@@YGHPBG0@Z @ 0x1F7A45 (-FindDefaultLinkedFontEntry@@YGHPBG0@Z.c)
 */

int __thiscall PFFMEMOBJ::bLoadFontFileTable(
        PFFMEMOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4,
        struct _EUDCLOAD *a5)
{
  int v5; // esi
  int v6; // edi
  unsigned int v7; // ebx
  struct _IFIMETRICS *v8; // eax
  void (__stdcall *v10)(struct _IFIMETRICS *, unsigned int); // eax
  const unsigned __int16 *v11; // [esp+0h] [ebp-18h]
  const unsigned __int16 *v12; // [esp+4h] [ebp-14h]
  struct _IFIMETRICS *v13; // [esp+Ch] [ebp-Ch]
  unsigned int v15; // [esp+14h] [ebp-4h] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)this + 60);
  if ( !PFFMEMOBJ::bAllocPFEData(this, a3) )
    return 0;
  v6 = 1;
  v7 = 1;
  if ( a3 )
  {
    while ( 1 )
    {
      v15 = 0;
      v8 = (struct _IFIMETRICS *)(*(int (__stdcall **)(_DWORD, _DWORD, unsigned int, unsigned int *))(v5 + 2004))(
                                   *(_DWORD *)(*(_DWORD *)this + 64),
                                   *(_DWORD *)(*(_DWORD *)this + 56),
                                   v7,
                                   &v15);
      v13 = v8;
      v6 = 1;
      if ( !v8 )
        return 0;
      if ( bReadyToInitializeFontAssocDefault && !a5 )
      {
        if ( !FindDefaultLinkedFontEntry(v11, v12) )
        {
LABEL_12:
          v10 = *(void (__stdcall **)(struct _IFIMETRICS *, unsigned int))(v5 + 2068);
          if ( v10 )
            v10(v13, v15);
          return 0;
        }
        v8 = v13;
      }
      if ( !PFFMEMOBJ::bAddEntry(this, v7, 0, 0, v8, v15, a4, a5) )
        goto LABEL_12;
      if ( ++v7 > a3 )
        return v6;
    }
  }
  return v6;
}
