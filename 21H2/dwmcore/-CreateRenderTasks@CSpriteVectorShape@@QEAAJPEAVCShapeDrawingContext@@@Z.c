/*
 * XREFs of ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1800972E8
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180096A60 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180094E98 (--$_Emplace_reallocate@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@st.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x18011613C (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18023F4B0 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 */

__int64 __fastcall CSpriteVectorShape::CreateRenderTasks(CSpriteVectorShape *this, struct CShapeDrawingContext *a2)
{
  CGeometry *v4; // rcx
  int ShapeData; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rcx
  _BYTE *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  struct CShapeRenderTask *v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  float v24; // xmm6_4
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct CShapeRenderTask *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  __int128 v33; // xmm0
  int v34; // eax
  __int64 v35; // rcx
  struct CShapeRenderTask *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int128 v40; // xmm0
  __int64 v41; // [rsp+30h] [rbp-30h] BYREF
  char v42; // [rsp+38h] [rbp-28h]
  __int128 v43; // [rsp+40h] [rbp-20h]
  char v44; // [rsp+80h] [rbp+20h] BYREF
  struct CShapeRenderTask *v45; // [rsp+90h] [rbp+30h] BYREF

  v4 = (CGeometry *)*((_QWORD *)this + 15);
  v41 = 0LL;
  v42 = 0;
  ShapeData = CGeometry::GetShapeData(v4, 0LL, (struct CShapePtr *)&v41);
  v7 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, ShapeData, 0x14Fu);
    goto LABEL_15;
  }
  if ( v41 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41) )
  {
    v8 = *((_QWORD *)this + 13);
    if ( v8
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v8 + 288LL))(v8, 0LL, &v44)
      && !v44 )
    {
      if ( v41
        && (*(unsigned __int8 (__fastcall **)(__int64, struct CShapeRenderTask **))(*(_QWORD *)v41 + 64LL))(v41, &v45)
        && (_DWORD)v45 == 1
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 56LL))(
              *((_QWORD *)this + 13),
              135LL) )
      {
        v19 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x15Bu);
          goto LABEL_15;
        }
        v21 = v45;
        v22 = *((_QWORD *)this + 13);
        *(_DWORD *)v45 = 4;
        v23 = *((_OWORD *)this + 9);
        *((_QWORD *)v21 + 3) = v22;
        v43 = v23;
        *(_OWORD *)((char *)v21 + 8) = v23;
        goto LABEL_14;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 56LL))(
             *((_QWORD *)this + 13),
             20LL) )
      {
        v9 = (_BYTE *)*((_QWORD *)a2 + 64);
        if ( v9 == *((_BYTE **)a2 + 65) )
        {
          std::vector<CShapeRenderTask>::_Emplace_reallocate<>((void **)a2 + 63, v9);
        }
        else
        {
          *(_DWORD *)v9 = 0;
          *((_QWORD *)a2 + 64) += 56LL;
        }
        v10 = *((_QWORD *)this + 13);
        v11 = *((_QWORD *)a2 + 64);
        v12 = *((_QWORD *)this + 15);
        *(_DWORD *)(v11 - 56) = 2;
        *(_QWORD *)(v11 - 48) = v12;
        v13 = *(_OWORD *)(v10 + 88);
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 56LL))(
                *((_QWORD *)this + 13),
                71LL) )
          goto LABEL_14;
        v16 = (_BYTE *)*((_QWORD *)a2 + 64);
        if ( v16 == *((_BYTE **)a2 + 65) )
        {
          std::vector<CShapeRenderTask>::_Emplace_reallocate<>((void **)a2 + 63, v16);
        }
        else
        {
          *(_DWORD *)v16 = 0;
          *((_QWORD *)a2 + 64) += 56LL;
        }
        v11 = *((_QWORD *)a2 + 64);
        v17 = *((_QWORD *)this + 15);
        v18 = *((_QWORD *)this + 13);
        *(_DWORD *)(v11 - 56) = 3;
        *(_QWORD *)(v11 - 48) = v17;
        v13 = *((_OWORD *)this + 9);
        *(_QWORD *)(v11 - 24) = v18;
        v43 = v13;
      }
      *(_OWORD *)(v11 - 40) = v13;
      v7 = 0;
    }
LABEL_14:
    v14 = *((_QWORD *)this + 14);
    if ( v14
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v14 + 288LL))(v14, 0LL, &v44)
      && !v44
      && *((_QWORD *)this + 16) )
    {
      v24 = fmaxf(0.0, *((float *)this + 52));
      if ( *((_BYTE *)this + 212) )
        v24 = v24 * fminf(*((float *)a2 + 124), *((float *)a2 + 125));
      v25 = CSpriteVectorShape::EnsureStrokeStyleForRender(this);
      v7 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x17Bu);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 56LL))(
                  *((_QWORD *)this + 14),
                  20LL) )
      {
        v27 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x180u);
        }
        else
        {
          v29 = *((_QWORD *)this + 14);
          v30 = v45;
          v31 = *((_QWORD *)this + 15);
          v32 = *((_QWORD *)this + 17);
          *(_DWORD *)v45 = 5;
          *((_QWORD *)v30 + 1) = v31;
          v33 = *(_OWORD *)(v29 + 88);
          *((_QWORD *)v30 + 5) = v32;
          *((float *)v30 + 8) = v24;
          *((_OWORD *)v30 + 1) = v33;
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 56LL))(
                  *((_QWORD *)this + 14),
                  71LL) )
      {
        v34 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, v34, 0x18Bu);
        }
        else
        {
          v36 = v45;
          v37 = *((_QWORD *)this + 15);
          v38 = *((_QWORD *)this + 14);
          v39 = *((_QWORD *)this + 17);
          *(_DWORD *)v45 = 6;
          *((_QWORD *)v36 + 1) = v37;
          v40 = *((_OWORD *)this + 9);
          *((_QWORD *)v36 + 4) = v38;
          *((float *)v36 + 10) = v24;
          v43 = v40;
          *((_QWORD *)v36 + 6) = v39;
          *((_OWORD *)v36 + 1) = v40;
        }
      }
    }
  }
LABEL_15:
  if ( v42 && v41 )
    (**(void (__fastcall ***)(__int64, __int64))v41)(v41, 1LL);
  return v7;
}
