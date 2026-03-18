/*
 * XREFs of ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C0005710
 * Callers:
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 *     ?IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z @ 0x1C01B7764 (-IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z.c)
 *     ?IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z @ 0x1C01B77EC (-IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01B7850 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01B795C (-TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01B7A40 (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 * Callees:
 *     <none>
 */

struct CDesktopInputTransform *CDesktopInputTransform::GetInstance(void)
{
  if ( (dword_1C024D058 & 1) == 0 )
  {
    dword_1C024D058 |= 1u;
    qword_1C024D060 = (__int64)&CPushLock::`vftable';
    xmmword_1C024D068 = 0LL;
    xmmword_1C024D078 = 0LL;
  }
  return (struct CDesktopInputTransform *)&qword_1C024D060;
}
