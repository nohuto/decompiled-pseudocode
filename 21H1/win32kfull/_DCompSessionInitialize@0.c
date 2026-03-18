/*
 * XREFs of _DCompSessionInitialize@0 @ 0x29329E
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_DWMTouchTargeting__private_IsEnabledPreCheck@@YGHXZ @ 0xEC5E6 (-Feature_DWMTouchTargeting__private_IsEnabledPreCheck@@YGHXZ.c)
 */

int __thiscall DCompSessionInitialize(void *this)
{
  Feature_DWMTouchTargeting__private_IsEnabledPreCheck(this);
  g_bHitTestDwmFirstForTouch = 1;
  return DCompositionSessionInitialize(0);
}
