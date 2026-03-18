/*
 * XREFs of ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C003FD30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C003FE1C (-UpdateRootVisual@CVisualTargetMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVC.c)
 */

void __fastcall DirectComposition::CVisualTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v3; // rcx
  bool v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(this, a2, 0LL, &v4);
  *(_DWORD *)(*((_QWORD *)this + 7) + 28LL) = 0;
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    ObfDereferenceObject((PVOID)(v3 - 24));
    *((_QWORD *)this + 7) = 0LL;
  }
}
