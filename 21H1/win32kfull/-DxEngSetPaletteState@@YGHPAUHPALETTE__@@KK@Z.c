/*
 * XREFs of ?DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z @ 0xF62A8
 * Callers:
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     ??0EPALOBJ@@QAE@PAUHPALETTE__@@@Z @ 0xA9642 (--0EPALOBJ@@QAE@PAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QAE@XZ @ 0xAAD84 (--1EPALOBJ@@QAE@XZ.c)
 */

int __userpurge DxEngSetPaletteState@<eax>(HPALETTE a1@<ecx>, HPALETTE a2, unsigned int a3, unsigned int a4)
{
  int v4; // esi
  int v6; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) |= 0x8000u;
    v4 = 1;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  return v4;
}
