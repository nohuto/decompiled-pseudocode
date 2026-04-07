/*
 * XREFs of ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800A55C4
 * Callers:
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800A5838 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800A58A0 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z @ 0x1800881A8 (-Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x1800A3EE8 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x1800A404C (--1Mesh2D@@QEAA@XZ.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x1800A4E58 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 *     ??$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x1800BD4CC (--$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800BD9A4 (--$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ?Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z @ 0x1800BE210 (-Update@CGeometry2dGroupProxy@@QEAAJPEBVCMeshGeometry2dProxy@@@Z.c)
 *     ?SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z @ 0x1800BE418 (-SetConstantOpacity@CMeshGeometry2dProxy@@QEAAJH@Z.c)
 *     ?Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1800BE440 (-Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 */

__int64 __fastcall CTetherVisual::UpdateInstructions(CTetherVisual *this)
{
  CBaseObject *v1; // rsi
  CMeshGeometry2dProxy **v2; // r14
  CBaseObject *v4; // rcx
  CGeometry2dGroupProxy **v5; // r15
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  const struct tagRECT *v9; // rdx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  CBaseObject *v18; // rcx
  struct MilPoint3F *v20[3]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+70h] [rbp-31h]
  struct MilPoint2D *v22; // [rsp+78h] [rbp-29h]
  unsigned int v23; // [rsp+90h] [rbp-11h]
  unsigned int *v24; // [rsp+98h] [rbp-9h]
  unsigned int v25; // [rsp+B0h] [rbp+Fh]
  unsigned int *v26; // [rsp+B8h] [rbp+17h]
  unsigned int v27; // [rsp+D0h] [rbp+2Fh]
  CBaseObject *v28; // [rsp+108h] [rbp+67h] BYREF

  v1 = 0LL;
  v2 = (CMeshGeometry2dProxy **)((char *)this + 384);
  v28 = 0LL;
  v4 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *v2 = 0LL;
  }
  v5 = (CGeometry2dGroupProxy **)((char *)this + 368);
  v6 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *v5 = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 47) = 0LL;
  }
  v8 = CRenderDataVisual::ClearInstructions(this);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xD9u);
    goto LABEL_26;
  }
  if ( !*((_QWORD *)this + 50) )
  {
    Mesh2D::Mesh2D((Mesh2D *)v20, v9);
    CTetherVisual::GenerateMesh(this, (struct Mesh2D *)v20);
    v11 = CCompositor::CreateProxy<CMeshGeometry2dProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            v2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v12 = CMeshGeometry2dProxy::Update(*v2, v20[0], v21, v22, v23, v26, v27, v24, v25);
      v10 = v12;
      if ( v12 >= 0 )
      {
        v14 = CMeshGeometry2dProxy::SetConstantOpacity(*v2, v13);
        v10 = v14;
        if ( v14 >= 0 )
        {
          v15 = CCompositor::CreateProxy<CGeometry2dGroupProxy>(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                  (char *)this + 368);
          v10 = v15;
          if ( v15 >= 0 )
          {
            v16 = CGeometry2dGroupProxy::Update(*v5, *v2);
            v10 = v16;
            if ( v16 >= 0 )
            {
              v17 = CDrawMesh2DInstruction::Create(
                      *v5,
                      *(struct CBitmapSourceProxy **)(*((_QWORD *)this + 43) + 16LL),
                      &v28);
              v10 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xEFu);
                Mesh2D::~Mesh2D((Mesh2D *)v20);
                v1 = v28;
                goto LABEL_26;
              }
              v1 = v28;
              CRenderDataVisual::AddInstruction(this, v28);
              if ( v1 )
                CBaseObject::Release(v1);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xEEu);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xEDu);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xEBu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xE9u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xE0u);
    }
    Mesh2D::~Mesh2D((Mesh2D *)v20);
  }
LABEL_26:
  if ( v10 < 0 )
  {
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
    if ( *v5 )
    {
      CBaseObject::Release(*v5);
      *v5 = 0LL;
    }
    v18 = (CBaseObject *)*((_QWORD *)this + 47);
    if ( v18 )
    {
      CBaseObject::Release(v18);
      *((_QWORD *)this + 47) = 0LL;
    }
    if ( v1 )
      CBaseObject::Release(v1);
  }
  return (unsigned int)v10;
}
