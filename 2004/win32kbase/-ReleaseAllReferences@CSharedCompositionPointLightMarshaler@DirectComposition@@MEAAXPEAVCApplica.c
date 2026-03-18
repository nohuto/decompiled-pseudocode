/*
 * XREFs of ?ReleaseAllReferences@CSharedCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F5710
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01EE2C0 (-ReleaseAllReferences@CCompositionPointLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CSharedCompositionPointLightMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedCompositionPointLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  DirectComposition::CCompositionPointLightMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 20) = 0LL;
  }
}
