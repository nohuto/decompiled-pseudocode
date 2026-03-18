/*
 * XREFs of ?ReleaseAllReferences@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0029830
 * Callers:
 *     ?ReleaseAllReferences@CSharedVisualReferenceControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F9B30 (-ReleaseAllReferences@CSharedVisualReferenceControllerMarshaler@DirectComposition@@MEAAXPEAVCApp.c)
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0029AC0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualReferenceControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CWeakReferenceBase *v4; // rdx

  v4 = (struct DirectComposition::CWeakReferenceBase *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v4);
    *((_QWORD *)this + 7) = 0LL;
  }
}
