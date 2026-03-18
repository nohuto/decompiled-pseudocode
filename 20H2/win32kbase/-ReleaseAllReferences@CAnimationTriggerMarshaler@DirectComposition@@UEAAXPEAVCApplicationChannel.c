/*
 * XREFs of ?ReleaseAllReferences@CAnimationTriggerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01D65C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00968D8 (-Clear@CResourceMarshalerArray@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CAnimationTriggerMarshaler::ReleaseAllReferences(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 9) = 0LL;
  }
  DirectComposition::CResourceMarshalerArray::Clear(
    (DirectComposition::CAnimationTriggerMarshaler *)((char *)this + 80),
    a2);
}
