/*
 * XREFs of ?ReleaseAllReferences@CSharedCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0053790
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0053810 (-ReleaseAllReferences@CCompositionDistantLightMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 */

void __fastcall DirectComposition::CSharedCompositionDistantLightMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedCompositionDistantLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx

  DirectComposition::CCompositionDistantLightMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 17) = 0LL;
  }
}
