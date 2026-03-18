/*
 * XREFs of ?ReleaseAllReferences@CSharedCompositionSpotLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00B3BE0 (-ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 */

void __fastcall DirectComposition::CSharedCompositionSpotLightMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedCompositionSpotLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  DirectComposition::CCompositionDistantLightMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 25) = 0LL;
  }
}
