/*
 * XREFs of ?ReleaseAllReferences@CSharedVisualReferenceControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F27D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0097F50 (-ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicati.c)
 */

void __fastcall DirectComposition::CSharedVisualReferenceControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 8) = 0LL;
  }
  DirectComposition::CVisualReferenceControllerMarshaler::ReleaseAllReferences(this, a2);
}
