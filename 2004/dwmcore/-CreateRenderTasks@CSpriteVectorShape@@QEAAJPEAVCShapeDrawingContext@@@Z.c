/*
 * XREFs of ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801EE264
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x18025F958 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180006498 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001BED8 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801EE718 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x18025F554 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::CreateRenderTasks(CSpriteVectorShape *this, struct CShapeDrawingContext *a2)
{
  CGeometry *v4; // rcx
  int ShapeData; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct CShapeRenderTask *v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rcx
  float v15; // xmm6_4
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct CShapeRenderTask *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int128 v24; // xmm0
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  struct CShapeRenderTask *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  struct CShapeRenderTask *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int128 v35; // xmm0
  int v36; // eax
  __int64 v37; // rcx
  struct CShapeRenderTask *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int128 v42; // xmm0
  CShape *v44; // [rsp+30h] [rbp-30h] BYREF
  char v45; // [rsp+38h] [rbp-28h]
  __int128 v46; // [rsp+40h] [rbp-20h]
  char v47; // [rsp+80h] [rbp+20h] BYREF
  struct CShapeRenderTask *v48; // [rsp+90h] [rbp+30h] BYREF

  v4 = (CGeometry *)*((_QWORD *)this + 14);
  v44 = 0LL;
  v45 = 0;
  ShapeData = CGeometry::GetShapeData(v4, 0LL, (struct CShapePtr *)&v44);
  v7 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ShapeData, 0x14Au, 0LL);
    goto LABEL_36;
  }
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v44) )
  {
    v8 = *((_QWORD *)this + 12);
    if ( v8
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v8 + 288LL))(v8, 0LL, &v47)
      && !v47 )
    {
      if ( !CShapePtr::IsAxisAlignedRectangle(&v44)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 56LL))(
             *((_QWORD *)this + 12),
             136LL) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 56LL))(
               *((_QWORD *)this + 12),
               20LL) )
        {
          v25 = CShapeDrawingContext::CreateRenderTask(a2, &v48);
          v7 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x15Du, 0LL);
            goto LABEL_36;
          }
          v27 = *((_QWORD *)this + 12);
          v28 = v48;
          v29 = *((_QWORD *)this + 14);
          *(_DWORD *)v48 = 2;
          *((_QWORD *)v28 + 1) = v29;
          *((_OWORD *)v28 + 1) = *(_OWORD *)(v27 + 80);
        }
        else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 56LL))(
                    *((_QWORD *)this + 12),
                    69LL) )
        {
          v30 = CShapeDrawingContext::CreateRenderTask(a2, &v48);
          v7 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x164u, 0LL);
            goto LABEL_36;
          }
          v32 = v48;
          v33 = *((_QWORD *)this + 14);
          v34 = *((_QWORD *)this + 12);
          *(_DWORD *)v48 = 3;
          *((_QWORD *)v32 + 1) = v33;
          v35 = *(_OWORD *)((char *)this + 136);
          *((_QWORD *)v32 + 4) = v34;
          v46 = v35;
          *((_OWORD *)v32 + 1) = v35;
        }
      }
      else
      {
        v9 = CShapeDrawingContext::CreateRenderTask(a2, &v48);
        v7 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x156u, 0LL);
          goto LABEL_36;
        }
        v11 = v48;
        v12 = *((_QWORD *)this + 12);
        *(_DWORD *)v48 = 4;
        v13 = *(_OWORD *)((char *)this + 136);
        *((_QWORD *)v11 + 3) = v12;
        v46 = v13;
        *(_OWORD *)((char *)v11 + 8) = v13;
      }
    }
    v14 = *((_QWORD *)this + 13);
    if ( v14
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v14 + 288LL))(v14, 0LL, &v47)
      && !v47
      && *((_QWORD *)this + 15) )
    {
      v15 = fmaxf(0.0, *((float *)this + 50));
      if ( *((_BYTE *)this + 204) )
        v15 = v15 * fminf(*((float *)a2 + 124), *((float *)a2 + 125));
      v16 = CSpriteVectorShape::EnsureStrokeStyleForRender(this);
      v7 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x176u, 0LL);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 56LL))(
                  *((_QWORD *)this + 13),
                  20LL) )
      {
        v18 = CShapeDrawingContext::CreateRenderTask(a2, &v48);
        v7 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x17Bu, 0LL);
        }
        else
        {
          v20 = *((_QWORD *)this + 13);
          v21 = v48;
          v22 = *((_QWORD *)this + 14);
          v23 = *((_QWORD *)this + 16);
          *(_DWORD *)v48 = 5;
          *((_QWORD *)v21 + 1) = v22;
          v24 = *(_OWORD *)(v20 + 80);
          *((_QWORD *)v21 + 5) = v23;
          *((float *)v21 + 8) = v15;
          *((_OWORD *)v21 + 1) = v24;
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 56LL))(
                  *((_QWORD *)this + 13),
                  69LL) )
      {
        v36 = CShapeDrawingContext::CreateRenderTask(a2, &v48);
        v7 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x186u, 0LL);
        }
        else
        {
          v38 = v48;
          v39 = *((_QWORD *)this + 14);
          v40 = *((_QWORD *)this + 13);
          v41 = *((_QWORD *)this + 16);
          *(_DWORD *)v48 = 6;
          *((_QWORD *)v38 + 1) = v39;
          v42 = *(_OWORD *)((char *)this + 136);
          *((_QWORD *)v38 + 4) = v40;
          *((float *)v38 + 10) = v15;
          v46 = v42;
          *((_QWORD *)v38 + 6) = v41;
          *((_OWORD *)v38 + 1) = v42;
        }
      }
    }
  }
LABEL_36:
  CShapePtr::Release((CShapePtr *)&v44);
  return v7;
}
