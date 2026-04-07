/*
 * XREFs of ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800A39F8
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800A4360 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016EB4 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x180087A88 (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 *     ??$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x1800BCE0C (--$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800BD2E4 (--$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x1800BDB50 (-Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z.c)
 *     ?SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z @ 0x1800BDD58 (-SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z.c)
 *     ?Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1800BDD80 (-Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 */

__int64 __fastcall CTouchDragVisual::CreateDrawMesh2DInstruction(
        CTouchDragVisual *this,
        const struct Mesh2D *a2,
        struct CGeometry2dGroupProxy **a3,
        struct CMeshGeometry2dProxy **a4)
{
  CBaseObject *v6; // rdi
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v18; // [rsp+50h] [rbp-28h] BYREF

  v6 = 0LL;
  v18 = 0LL;
  v9 = CCompositor::CreateProxy<CMeshGeometry2dProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), a4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = CMeshGeometry2dProxy::Update(
            *a4,
            *(const struct MilPoint3F **)a2,
            *((_DWORD *)a2 + 6),
            *((const struct MilPoint2D **)a2 + 4),
            *((_DWORD *)a2 + 14),
            *((const unsigned int **)a2 + 12),
            *((_DWORD *)a2 + 30),
            *((const unsigned int **)a2 + 8),
            *((_DWORD *)a2 + 22));
    v10 = v11;
    if ( v11 >= 0 )
    {
      v13 = CMeshGeometry2dProxy::SetConstantOpacity(*a4, v12);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v14 = CCompositor::CreateProxy<CGeometry2dGroupProxy>(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                a3);
        v10 = v14;
        if ( v14 >= 0 )
        {
          v15 = CGeometry2dGroupProxy::Update(*a3, *a4);
          v10 = v15;
          if ( v15 >= 0 )
          {
            v16 = CDrawMesh2DInstruction::Create(
                    *a3,
                    *(struct CBitmapSourceProxy **)(*((_QWORD *)this + 48) + 16LL),
                    &v18);
            v10 = v16;
            if ( v16 >= 0 )
            {
              v6 = v18;
              CRenderDataVisual::AddInstruction(this, v18);
              if ( v6 )
                CBaseObject::Release(v6);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x108u);
              v6 = v18;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x107u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x106u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x104u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x102u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xF9u);
  }
  if ( v10 < 0 )
  {
    if ( *a4 )
    {
      CBaseObject::Release(*a4);
      *a4 = 0LL;
    }
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return (unsigned int)v10;
}
