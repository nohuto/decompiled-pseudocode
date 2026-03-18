/*
 * XREFs of ?UpdateScopeTransforms@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z @ 0x18009507C
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18009504C (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800D5878 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCpuClippingData::UpdateScopeTransforms(
        void **this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        const struct CMILMatrix **a4)
{
  char v4; // r12
  struct CMILMatrix **v5; // r15
  unsigned int v8; // r13d
  void **v9; // r14
  struct CMILMatrix *v10; // rax
  __int64 v11; // rcx
  struct CMILMatrix *v12; // rbx
  _DWORD *v13; // rax
  char v14; // al
  _QWORD *v15; // rcx
  char v16; // al
  struct CMILMatrix *v17; // rdi
  char v18; // cl
  float v19; // xmm2_4
  int v20; // xmm0_4
  int v21; // xmm1_4
  CTransform3D *v22; // rcx
  const struct CMILMatrix *Matrix; // rax
  CTransform3D *v24; // rbp
  struct CEffect *EffectInternal; // rbx
  __int64 v26; // rax
  char v27; // r14
  __int64 v28; // rbx
  struct CEffect *v29; // rax
  bool v30; // al
  char v31; // al
  const struct CMILMatrix *v32; // rax
  unsigned int v34; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v36; // [rsp+78h] [rbp+10h]

  v4 = 0;
  v5 = (struct CMILMatrix **)(this + 3);
  v8 = 0;
  if ( *((_DWORD *)this + 4) == 4 )
  {
    SAFE_DELETE<CMILMatrix>(this + 3);
    v9 = this + 4;
LABEL_7:
    SAFE_DELETE<CMILMatrix>(v9);
    goto LABEL_8;
  }
  if ( !*v5 )
  {
    v10 = (struct CMILMatrix *)operator new(0x44uLL);
    if ( !v10 )
    {
      v34 = 451;
      *v5 = 0LL;
      goto LABEL_14;
    }
    *((_DWORD *)v10 + 16) = 0;
    *v5 = v10;
  }
  v9 = this + 4;
  if ( !*((_BYTE *)this + 96) )
    goto LABEL_7;
  if ( !*v9 )
  {
    v13 = operator new(0x44uLL);
    if ( v13 )
    {
      v13[16] = 0;
      *v9 = v13;
      goto LABEL_8;
    }
    v34 = 460;
    *v9 = 0LL;
LABEL_14:
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2147024882, v34);
    return v8;
  }
LABEL_8:
  v12 = *v5;
  if ( !*v5 )
    return v8;
  if ( *((_DWORD *)this + 4) != 1 )
  {
    if ( *((_DWORD *)this + 4) == 2 )
    {
      v15 = *v9;
      *v15 = 1065353216LL;
      v15[1] = 0LL;
      *((_DWORD *)v15 + 4) = 0;
      *(_QWORD *)((char *)v15 + 20) = 1065353216LL;
      *(_QWORD *)((char *)v15 + 28) = 0LL;
      *((_DWORD *)v15 + 9) = 0;
      v15[5] = 1065353216LL;
      v15[6] = 0LL;
      *((_DWORD *)v15 + 14) = 0;
      *((_DWORD *)v15 + 15) = 1065353216;
      v16 = *((_BYTE *)v15 + 65);
      *((_BYTE *)v15 + 64) = 85;
      *((_BYTE *)v15 + 65) = v16 & 0xC0 | 0x17;
      CVisual::GetRootTransform(a3, *v5, 0, 1);
    }
    else
    {
      if ( *((_DWORD *)this + 4) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      *(_QWORD *)v12 = 1065353216LL;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_DWORD *)v12 + 4) = 0;
      *(_QWORD *)((char *)v12 + 20) = 1065353216LL;
      *(_QWORD *)((char *)v12 + 28) = 0LL;
      *((_DWORD *)v12 + 9) = 0;
      *((_QWORD *)v12 + 5) = 1065353216LL;
      *((_QWORD *)v12 + 6) = 0LL;
      *((_DWORD *)v12 + 14) = 0;
      *((_DWORD *)v12 + 15) = 1065353216;
      v14 = *((_BYTE *)v12 + 65) & 0xD7;
      *((_BYTE *)v12 + 64) = 85;
      *((_BYTE *)v12 + 65) = v14 | 0x17;
    }
    return v8;
  }
  v17 = *v5;
  if ( *v9 )
    v17 = (struct CMILMatrix *)*v9;
  *(_QWORD *)v17 = 1065353216LL;
  *((_QWORD *)v17 + 1) = 0LL;
  *((_DWORD *)v17 + 4) = 0;
  *(_QWORD *)((char *)v17 + 20) = 1065353216LL;
  *(_QWORD *)((char *)v17 + 28) = 0LL;
  *((_DWORD *)v17 + 9) = 0;
  *((_QWORD *)v17 + 5) = 1065353216LL;
  *((_QWORD *)v17 + 6) = 0LL;
  *((_DWORD *)v17 + 14) = 0;
  *((_DWORD *)v17 + 15) = 1065353216;
  v18 = *((_BYTE *)v17 + 65) & 0xC0 | 0x17;
  *((_BYTE *)v17 + 65) = v18;
  *((_BYTE *)v17 + 64) = 85;
  v19 = *((float *)a3 + 31);
  if ( v19 != 0.0 || *((float *)a3 + 32) != 0.0 || *((float *)a3 + 30) != 0.0 )
  {
    v20 = *((_DWORD *)a3 + 32);
    v21 = *((_DWORD *)a3 + 30);
    *((float *)v17 + 12) = v19;
    *((_DWORD *)v17 + 13) = v20;
    *((_DWORD *)v17 + 14) = v21;
    *((_BYTE *)v17 + 64) = 84;
    *((_BYTE *)v17 + 65) = v18;
  }
  v22 = (CTransform3D *)*((_QWORD *)a3 + 30);
  if ( v22 )
  {
    Matrix = CTransform3D::GetMatrix(v22, (const struct D2D_SIZE_F *)((char *)a3 + 140));
    CMILMatrix::Multiply(Matrix, v17, v17);
  }
  if ( v12 == v17 )
  {
    v24 = 0LL;
    if ( (**((_DWORD **)a3 + 29) & 0x400000) != 0 )
    {
      EffectInternal = CVisual::GetEffectInternal(a3);
      if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
             EffectInternal,
             186LL) )
      {
        v24 = EffectInternal;
LABEL_34:
        if ( v24 && *((_DWORD *)a3 + 27) != 2 )
          goto LABEL_51;
        goto LABEL_36;
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
             EffectInternal,
             56LL) )
      {
        v24 = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
        goto LABEL_34;
      }
    }
LABEL_36:
    v26 = *((_QWORD *)a3 + 11);
    v36 = *((_DWORD *)a3 + 27);
    if ( !v26 || (v27 = 1, *(_DWORD *)(v26 + 108) != 1) )
      v27 = 0;
    v28 = *((_QWORD *)a3 + 10);
    if ( (v28 & 2) != 0 )
      v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v28) = v28 & 1;
    if ( (**((_DWORD **)a3 + 29) & 0x400000) != 0 )
    {
      v29 = CVisual::GetEffectInternal(a3);
      if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v29 + 56LL))(v29, 59LL) )
        v4 = 1;
    }
    v30 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a3 + 216LL))(a3) != 0;
    if ( v36 == 1 )
      goto LABEL_50;
    if ( !v27 )
      goto LABEL_52;
    if ( !(_DWORD)v28 )
    {
LABEL_50:
      if ( !v27 || !v4 && !v30 )
      {
LABEL_52:
        if ( v24 )
        {
          v32 = CTransform3D::GetMatrix(v24, (const struct D2D_SIZE_F *)((char *)a3 + 140));
          CMILMatrix::Multiply(v32, v17, v17);
        }
        goto LABEL_54;
      }
    }
LABEL_51:
    v31 = *((_BYTE *)v17 + 64) | 3;
    *((_QWORD *)v17 + 4) = 0LL;
    *((_QWORD *)v17 + 5) = 0LL;
    *((_BYTE *)v17 + 64) = v31 & 0xF3;
    goto LABEL_52;
  }
LABEL_54:
  CMILMatrix::Multiply(v17, a4[3]);
  if ( *v5 != v17 )
  {
    CVisual::GetRootTransform(a3, *v5, 0, 1);
    CMILMatrix::Multiply(*v5, v17);
  }
  return v8;
}
