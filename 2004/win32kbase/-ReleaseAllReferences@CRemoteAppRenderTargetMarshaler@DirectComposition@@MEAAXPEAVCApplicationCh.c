/*
 * XREFs of ?ReleaseAllReferences@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E87E0
 * Callers:
 *     ?ReleaseAllReferences@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F4E90 (-ReleaseAllReferences@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 11) = 0LL;
  }
}
