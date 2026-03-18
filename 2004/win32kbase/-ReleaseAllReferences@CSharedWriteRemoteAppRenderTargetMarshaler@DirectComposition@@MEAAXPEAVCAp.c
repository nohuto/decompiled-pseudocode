/*
 * XREFs of ?ReleaseAllReferences@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01F4E90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E87E0 (-ReleaseAllReferences@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    ObfDereferenceObject((PVOID)(v4 - 24));
    *((_QWORD *)this + 12) = 0LL;
  }
  DirectComposition::CRemoteAppRenderTargetMarshaler::ReleaseAllReferences(this, a2);
}
