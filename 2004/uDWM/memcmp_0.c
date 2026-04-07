/*
 * XREFs of memcmp_0 @ 0x18005605E
 * Callers:
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x1800153DC (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18002FC80 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18003BE9C (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x180050054 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x1800802F0 (-IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18008B954 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x180095908 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
