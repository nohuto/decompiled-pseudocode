/*
 * XREFs of ?ReleaseAllReferences@CGeometryMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004DD30
 * Callers:
 *     ?ReleaseAllReferences@CPathGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E4F90 (-ReleaseAllReferences@CPathGeometryMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseAllReferences@CProxyGeometryClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F22A0 (-ReleaseAllReferences@CProxyGeometryClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChanne.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CGeometryMarshaler::ReleaseAllReferences(
        DirectComposition::CGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 9) = 0LL;
  }
}
