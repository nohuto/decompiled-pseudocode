/*
 * XREFs of ?Release@CRadialGradientEffect@@WBA@EAAKXZ @ 0x1800EDA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRadialGradientEffect::Release(__int64 a1)
{
  return CStateSettingDrawListEntry::Release((CStateSettingDrawListEntry *)(a1 - 16));
}
