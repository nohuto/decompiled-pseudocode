/*
 * XREFs of ??0MDCOBJA@@QAE@PAUHDC__@@H@Z @ 0x7C2B6
 * Callers:
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 *     _DxgkEngGetDC@8 @ 0xBB5EA (_DxgkEngGetDC@8.c)
 *     _GreSetPaletteEntries@16 @ 0x21E422 (_GreSetPaletteEntries@16.c)
 *     _NtGdiResizePalette@8 @ 0x21E909 (_NtGdiResizePalette@8.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__thiscall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2, int a3)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = HmgShareLockEx(a2, 1, 0);
  return this;
}
