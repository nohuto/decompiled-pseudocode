/*
 * XREFs of ?Release@CStateSettingDrawListEntry@@UEAAKXZ @ 0x1800196F0
 * Callers:
 *     ?Release@CRadialGradientEffect@@WBA@EAAKXZ @ 0x1800F09F0 (-Release@CRadialGradientEffect@@WBA@EAAKXZ.c)
 *     ?Release@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F0A00 (-Release@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F3B40 (-Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CStateSettingDrawListEntry::Release(CStateSettingDrawListEntry *this)
{
  return CDrawListEntry::Release(this);
}
