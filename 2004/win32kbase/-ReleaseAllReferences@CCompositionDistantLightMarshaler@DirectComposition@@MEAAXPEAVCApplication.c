/*
 * XREFs of ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0053810
 * Callers:
 *     ?ReleaseAllReferences@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0053790 (-ReleaseAllReferences@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCAppli.c)
 *     ?ReleaseAllReferences@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00537D0 (-ReleaseAllReferences@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAAXPEAVCApplicat.c)
 * Callees:
 *     ?ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0053860 (-ReleaseAllReferences@CCompositionLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionDistantLightMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  DirectComposition::CCompositionLightMarshaler::ReleaseAllReferences(this, a2);
}
