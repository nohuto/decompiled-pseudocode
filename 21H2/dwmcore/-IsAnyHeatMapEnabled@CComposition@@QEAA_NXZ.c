/*
 * XREFs of ?IsAnyHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18008D854
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800941F8 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::IsAnyHeatMapEnabled(CComposition *this)
{
  return *((_DWORD *)this + 240) != 0;
}
