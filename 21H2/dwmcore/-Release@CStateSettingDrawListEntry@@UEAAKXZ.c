/*
 * XREFs of ?Release@CStateSettingDrawListEntry@@UEAAKXZ @ 0x180017E00
 * Callers:
 *     ?Release@CRadialGradientEffect@@WBA@EAAKXZ @ 0x1800F6450 (-Release@CRadialGradientEffect@@WBA@EAAKXZ.c)
 *     ?Release@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F6460 (-Release@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F95A0 (-Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CStateSettingDrawListEntry::Release(CStateSettingDrawListEntry *this)
{
  return CDrawListEntry::Release(this);
}
