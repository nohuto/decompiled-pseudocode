/*
 * XREFs of ?Release@CStateSettingDrawListEntry@@UEAAKXZ @ 0x1800194E0
 * Callers:
 *     ?Release@CRadialGradientEffect@@WBA@EAAKXZ @ 0x1800F0640 (-Release@CRadialGradientEffect@@WBA@EAAKXZ.c)
 *     ?Release@CWARPDrawListEntry@@WCA@EAAKXZ @ 0x1800F0650 (-Release@CWARPDrawListEntry@@WCA@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F3790 (-Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CStateSettingDrawListEntry::Release(CStateSettingDrawListEntry *this)
{
  return CDrawListEntry::Release(this);
}
