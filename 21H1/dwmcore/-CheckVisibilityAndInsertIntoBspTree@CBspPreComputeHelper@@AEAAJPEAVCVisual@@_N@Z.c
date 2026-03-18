/*
 * XREFs of ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18019D564
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180065300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18002FAF8 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800C14A0 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18019D67C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180212EB4 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3)
{
  unsigned int v6; // ebx
  const struct CMILMatrix *TopByReference; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  const struct CMILMatrix *v11; // rax
  _DWORD *v12; // rax
  bool v13; // r8
  bool v14; // cl
  int PolygonAndPushToBspTree; // eax
  __int64 v16; // rcx
  _OWORD v18[4]; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+70h] [rbp-18h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 264LL))(a2) || a3 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 64));
    v8 = *((_OWORD *)TopByReference + 1);
    v18[0] = *(_OWORD *)TopByReference;
    v9 = *((_OWORD *)TopByReference + 2);
    v18[1] = v8;
    v10 = *((_OWORD *)TopByReference + 3);
    LODWORD(TopByReference) = *((_DWORD *)TopByReference + 16);
    v18[2] = v9;
    v18[3] = v10;
    v19 = (int)TopByReference;
    v11 = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
    CMILMatrix::Multiply(v11, (const struct CMILMatrix *)v18, (struct CMILMatrix *)v18);
    CMILMatrix::IsFacingUser((CMILMatrix *)v18);
    v12 = (_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 128);
    v14 = 1;
    if ( !v13 )
    {
      if ( *v12 == 1 && !a3 )
        return v6;
      if ( *v12 )
        v14 = 0;
    }
    PolygonAndPushToBspTree = CBspPreComputeHelper::CreatePolygonAndPushToBspTree(this, a2, v13, v14, a3);
    v6 = PolygonAndPushToBspTree;
    if ( PolygonAndPushToBspTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, PolygonAndPushToBspTree, 0x11Eu, 0LL);
  }
  return v6;
}
