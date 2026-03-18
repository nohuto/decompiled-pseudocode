/*
 * XREFs of ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C0005710
 * Callers:
 *     InitializeInputComponents @ 0x1C009C80C (InitializeInputComponents.c)
 *     ?IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z @ 0x1C01B53F4 (-IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z.c)
 *     ?IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z @ 0x1C01B547C (-IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01B54E0 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01B55EC (-TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01B56D0 (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 * Callees:
 *     <none>
 */

struct CDesktopInputTransform *CDesktopInputTransform::GetInstance(void)
{
  if ( (dword_1C024B068 & 1) == 0 )
  {
    dword_1C024B068 |= 1u;
    qword_1C024B070 = (__int64)&CPushLock::`vftable';
    xmmword_1C024B078 = 0LL;
    xmmword_1C024B088 = 0LL;
  }
  return (struct CDesktopInputTransform *)&qword_1C024B070;
}
