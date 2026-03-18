/*
 * XREFs of ?ReleaseAllReferences@CHostVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00306C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0030780 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CHostVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CHostVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rax

  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
  v3 = *((_QWORD *)this + 46);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 32) = 0;
    ObfDereferenceObject((PVOID)(*((_QWORD *)this + 46) - 24LL));
    *((_QWORD *)this + 46) = 0LL;
  }
}
