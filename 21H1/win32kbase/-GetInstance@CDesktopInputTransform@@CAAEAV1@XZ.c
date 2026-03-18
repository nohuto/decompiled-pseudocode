/*
 * XREFs of ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C00518C0
 * Callers:
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 *     ?IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z @ 0x1C01BD4C4 (-IsDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEBUCompositionInputObject@@@Z.c)
 *     ?IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z @ 0x1C01BD54C (-IsDesktopVisualInputSinkMapIdentity@CDesktopInputTransform@@SA_NPEBU_LUID@@@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01BD5B0 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z @ 0x1C01BD6BC (-TransformMouseCoordinates@CDesktopInputTransform@@SA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01BD7A0 (-TransformPointerCoordinates@CDesktopInputTransform@@SA_NPEAUtagRIMPOINTERINFONODE@@@Z.c)
 * Callees:
 *     <none>
 */

struct CDesktopInputTransform *CDesktopInputTransform::GetInstance(void)
{
  if ( (dword_1C0253068 & 1) == 0 )
  {
    dword_1C0253068 |= 1u;
    qword_1C0253070 = (__int64)&CPushLock::`vftable';
    xmmword_1C0253078 = 0LL;
    xmmword_1C0253088 = 0LL;
  }
  return (struct CDesktopInputTransform *)&qword_1C0253070;
}
