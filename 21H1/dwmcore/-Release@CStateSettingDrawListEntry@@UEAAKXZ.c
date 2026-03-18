/*
 * XREFs of ?Release@CStateSettingDrawListEntry@@UEAAKXZ @ 0x18001A270
 * Callers:
 *     ?Release@CRadialGradientEffect@@WBA@EAAKXZ @ 0x1800EDA60 (-Release@CRadialGradientEffect@@WBA@EAAKXZ.c)
 *     ?Release@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800EDA70 (-Release@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F0BB0 (-Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CStateSettingDrawListEntry::Release(CStateSettingDrawListEntry *this)
{
  return CDrawListEntry::Release(this);
}
