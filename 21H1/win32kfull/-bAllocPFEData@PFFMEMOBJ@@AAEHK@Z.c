/*
 * XREFs of ?bAllocPFEData@PFFMEMOBJ@@AAEHK@Z @ 0xDE4D6
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC500 (-bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x221B4A (-bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

BOOL __thiscall PFFMEMOBJ::bAllocPFEData(PFFMEMOBJ *this, unsigned int a2)
{
  int v3; // edi
  unsigned int v4; // ecx

  *(_DWORD *)(*(_DWORD *)this + 128) = gcfsCharSetTable + 92;
  *(_DWORD *)(*(_DWORD *)this + 128) = (*(_DWORD *)(*(_DWORD *)this + 128) + 3) & 0xFFFFFFFC;
  v3 = *(_DWORD *)this;
  v4 = *(_DWORD *)(*(_DWORD *)this + 128);
  if ( a2 > 0xFFFFFFFF / v4 )
    *(_DWORD *)(v3 + 132) = 0;
  else
    *(_DWORD *)(*(_DWORD *)this + 132) = PALLOCMEM2(a2 * v4, 1701212231, 1);
  return *(_DWORD *)(*(_DWORD *)this + 132) != 0;
}
