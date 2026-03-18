/*
 * XREFs of ?ReleaseAllReferences@CContainerShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E45E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E44E0 (-ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CContainerShapeMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CContainerShapeMarshaler::ClearShapes((DirectComposition::CContainerShapeMarshaler *)this, a2);
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[7]);
  this[7] = 0LL;
}
