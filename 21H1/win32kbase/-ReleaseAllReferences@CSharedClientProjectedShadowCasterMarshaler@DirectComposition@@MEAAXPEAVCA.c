/*
 * XREFs of ?ReleaseAllReferences@CSharedClientProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01FB320
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00052A0 (-ReleaseAllReferences@CProjectedShadowCasterMarshaler@DirectComposition@@MEAAXPEAVCApplicationCh.c)
 */

void __fastcall DirectComposition::CSharedClientProjectedShadowCasterMarshaler::ReleaseAllReferences(
        DirectComposition::CSharedClientProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rax

  DirectComposition::CProjectedShadowCasterMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 28) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 13) - 24LL));
    *((_QWORD *)this + 13) = 0LL;
  }
}
