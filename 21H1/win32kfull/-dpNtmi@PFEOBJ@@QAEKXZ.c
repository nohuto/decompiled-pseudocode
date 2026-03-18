/*
 * XREFs of ?dpNtmi@PFEOBJ@@QAEKXZ @ 0x89722
 * Callers:
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 *     ?bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDC780 (-bInit@PFEMEMOBJ@@QAEHPAVPFF@@KPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KHPAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z @ 0x89762 (-IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z.c)
 */

int __thiscall PFEOBJ::dpNtmi(PFEOBJ *this)
{
  int v1; // esi
  _DWORD *v2; // ecx
  unsigned int v4; // eax
  __int64 v5; // [esp-4h] [ebp-8h]

  v1 = 368;
  v2 = *(_DWORD **)(*(_DWORD *)this + 20);
  if ( (v2[12] & 0x4000) != 0 || IsVariableFont((struct _IFIMETRICS *)HIDWORD(v5)) )
  {
    v4 = v2[1];
    if ( v4 <= 0xC )
    {
      LODWORD(v5) = 12;
      _DbgPrint("Test it %d %llu \n", v4, v5);
    }
    else
    {
      return 4 * *(_DWORD *)((char *)v2 + v2[49] + 4) + 368;
    }
  }
  return v1;
}
