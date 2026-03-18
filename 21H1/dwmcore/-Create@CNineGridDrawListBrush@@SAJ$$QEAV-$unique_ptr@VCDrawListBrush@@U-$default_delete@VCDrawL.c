/*
 * XREFs of ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180010428
 * Callers:
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180006FDC (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000F744 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180010030 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CDropShadow@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18001C9A0 (-CreateLayoutGeometryDrawListBrush@CDropShadow@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEA.c)
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18001E540 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x1800104E0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x180010550 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18001084C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ??0CNineGridDrawListBrush@@AEAA@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_N@Z @ 0x1800133DC (--0CNineGridDrawListBrush@@AEAA@$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawList.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Create(
        struct CNineGridDrawListBrush *a1,
        int a2,
        int a3,
        char a4,
        CNineGridDrawListBrush **a5)
{
  int v8; // ebp
  struct CObjectCache *ObjectCache; // r10
  _QWORD *v10; // rax
  int v11; // ecx
  unsigned int v12; // ecx
  CNineGridDrawListBrush *v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx

  v8 = (int)a1;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = DefaultHeap::Alloc(0x240uLL)) != 0LL )
    v13 = (CNineGridDrawListBrush *)CNineGridDrawListBrush::CNineGridDrawListBrush((_DWORD)v10, v8, a2, a3, a4);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v14 = CNineGridDrawListBrush::Initialize(v13);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x29u, 0LL);
      CNineGridDrawListBrush::`scalar deleting destructor'(v13, 1u);
    }
    else
    {
      *a5 = v13;
    }
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x27u, 0LL);
  }
  return v16;
}
