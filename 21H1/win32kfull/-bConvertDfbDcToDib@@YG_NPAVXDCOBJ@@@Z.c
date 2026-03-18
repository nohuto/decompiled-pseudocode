/*
 * XREFs of ?bConvertDfbDcToDib@@YG_NPAVXDCOBJ@@@Z @ 0x220CE2
 * Callers:
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

bool __thiscall bConvertDfbDcToDib(void *this)
{
  return pProcessDfbSurfaces(*(_DWORD *)(*(_DWORD *)this + 504), 1, 0) != 0;
}
