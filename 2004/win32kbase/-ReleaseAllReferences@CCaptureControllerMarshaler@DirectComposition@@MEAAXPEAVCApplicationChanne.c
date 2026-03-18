/*
 * XREFs of ?ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F1910
 * Callers:
 *     ?ReleaseAllReferences@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F5310 (-ReleaseAllReferences@CSharedReadCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplica.c)
 *     ?ReleaseAllReferences@CSharedWriteCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F5500 (-ReleaseAllReferences@CSharedWriteCaptureControllerMarshaler@DirectComposition@@MEAAXPEAVCApplic.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCaptureControllerMarshaler::ReleaseAllReferences(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 10) = 0LL;
  }
}
