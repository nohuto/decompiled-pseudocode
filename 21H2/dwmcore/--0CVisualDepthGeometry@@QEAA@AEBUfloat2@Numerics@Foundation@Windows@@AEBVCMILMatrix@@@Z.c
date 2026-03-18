/*
 * XREFs of ??0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x18025A290
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1802364F8 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x18025AAF4 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 */

CVisualDepthGeometry *__fastcall CVisualDepthGeometry::CVisualDepthGeometry(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        const struct CMILMatrix *a3)
{
  `vector constructor iterator'((char *)this + 84, 16LL, 4LL, (void (__fastcall *)(char *))CMilPoint2F::CMilPoint2F);
  CVisualDepthGeometry::Init(this, a2, a3);
  return this;
}
