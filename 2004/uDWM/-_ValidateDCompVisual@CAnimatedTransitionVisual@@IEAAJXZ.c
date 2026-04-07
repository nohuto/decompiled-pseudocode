/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180005854
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000F780 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x180005B34 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180015F54 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027A04 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x18003DC70 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F820 (-InternalRelease@-$ComPtr@VCDrawGeometryInstruction@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v6; // eax
  __int64 v7; // rax
  LONG v8; // r8d
  CVisual *v9; // rcx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-58h]
  bool v12; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CDrawGeometryInstruction *v14; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT v15; // [rsp+88h] [rbp+10h] BYREF

  v14 = 0LL;
  v2 = *((_DWORD *)this + 22);
  if ( (v2 & 0x1000) == 0 && (v2 & 0x2000) == 0 && (v2 & 0x20) == 0 )
    goto LABEL_7;
  if ( *((_BYTE *)this + 967) )
  {
    v7 = *((_QWORD *)this + 90);
    v8 = *((_DWORD *)this + 213);
    v15.x = *((_DWORD *)this + 212);
    v15.y = v8;
    v9 = **(CVisual ***)(v7 + 48);
    if ( *((_DWORD *)v9 + 28) != v15.x || *((_DWORD *)v9 + 29) != v8 )
      CVisual::SetOffset(v9, &v15);
    goto LABEL_6;
  }
  if ( (v2 & 0x2000) != 0 )
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 90));
  if ( !*(_DWORD *)(*((_QWORD *)this + 90) + 272LL) )
  {
    CRectangleGeometryProxy::SetRectangle(
      *((CRectangleGeometryProxy **)this + 88),
      (float)*((int *)this + 212),
      (float)*((int *)this + 213),
      (float)*((int *)this + 214),
      (float)*((int *)this + 215),
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      v12);
    Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v14);
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
    v6 = CDrawGeometryInstruction::Create(BrushNoRef, *((struct CBaseGeometryProxy **)this + 88), &v14);
    v3 = v6;
    if ( v6 < 0 )
    {
      v10 = 1417LL;
    }
    else
    {
      v6 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 90), v14);
      v3 = v6;
      if ( v6 >= 0 )
        goto LABEL_6;
      v10 = 1418LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v6,
      v11);
    goto LABEL_8;
  }
LABEL_6:
  *((_DWORD *)this + 22) &= 0xFFFFCFDF;
LABEL_7:
  v3 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<CDrawGeometryInstruction>::InternalRelease(&v14);
  return v3;
}
