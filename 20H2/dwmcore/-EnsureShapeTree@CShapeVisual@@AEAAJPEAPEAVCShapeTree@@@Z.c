/*
 * XREFs of ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801EB9F0
 * Callers:
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801EBAD4 (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1801EBBCC (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A86A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BC770 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CShapeTree@@QEAA@PEAVCComposition@@@Z @ 0x1801EB93C (--0CShapeTree@@QEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CShapeVisual::EnsureShapeTree(CShapeVisual *this, struct CShapeTree **a2)
{
  struct CShapeTree *v2; // rax
  unsigned int v3; // ebx
  CShapeTree *v6; // rax
  __int64 v7; // rcx
  CMILCOMBase *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  v2 = (struct CShapeTree *)*((_QWORD *)this + 31);
  v3 = 0;
  *a2 = 0LL;
  if ( !v2 )
  {
    v6 = (CShapeTree *)DefaultHeap::AllocClear(0xA0uLL);
    if ( v6 )
      v8 = CShapeTree::CShapeTree(v6, *((struct CComposition **)this + 2));
    else
      v8 = 0LL;
    if ( !v8 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x59u, 0LL);
      return v3;
    }
    CMILCOMBase::InternalAddRef(v8);
    v9 = CVisual::SetContent((struct CResource **)this, v8);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5Bu, 0LL);
      CRenderTargetBitmap::Release(v8);
      return v3;
    }
    CRenderTargetBitmap::Release(v8);
    v2 = (struct CShapeTree *)*((_QWORD *)this + 31);
  }
  *a2 = v2;
  return v3;
}
