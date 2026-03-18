/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180014770
 * Callers:
 *     <none>
 * Callees:
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x1800149E8 (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800364EC (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x18004A834 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18004AA40 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1800A6E40 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800A6FA4 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801F28A0 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // r12
  int (*v8)(const struct CDrawListBrush *, void *); // r15
  __int64 v9; // r14
  const __m128i *v10; // rbx
  __m128i v11; // xmm6
  __int32 v12; // xmm0_4
  __int32 v13; // xmm1_4
  __int64 v14; // rax
  __int32 v15; // xmm0_4
  __int32 v16; // xmm1_4
  __int64 v17; // rcx
  __int64 v18; // rax
  __int32 v19; // xmm0_4
  __int32 v20; // xmm1_4
  __int64 v21; // rcx
  CSurfaceDrawListBrush *v22; // rcx
  _QWORD *v23; // rax
  __m128i *v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  _QWORD *v27; // r15
  struct CSurfaceDrawListBrush *v28; // rcx
  struct CObjectCache *ObjectCache; // rax
  void *lpMem; // [rsp+38h] [rbp-69h] BYREF
  void **p_lpMem; // [rsp+40h] [rbp-61h]
  void *v33; // [rsp+48h] [rbp-59h] BYREF
  char v34; // [rsp+50h] [rbp-51h]
  _DWORD v35[10]; // [rsp+58h] [rbp-49h] BYREF
  __m128i v36; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v37[8]; // [rsp+90h] [rbp-11h] BYREF
  const __m128i *v38; // [rsp+98h] [rbp-9h]
  __int16 v39; // [rsp+108h] [rbp+67h] BYREF
  char v40; // [rsp+10Ah] [rbp+69h]
  int (*v41)(const struct CDrawListBrush *, void *); // [rsp+110h] [rbp+6Fh]
  char v42; // [rsp+120h] [rbp+7Fh] BYREF

  v41 = a2;
  v4 = *((_QWORD *)this + 9);
  v5 = 0;
  v6 = 0LL;
  v8 = a2;
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 16) + 8LL) )
    return v5;
  while ( 1 )
  {
    v9 = **(_QWORD **)(v4 + 16) + 144 * v6;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v4, v37, (unsigned int)v6);
    if ( (*(_BYTE *)(v9 + 4) & 2) == 0
      && *(_DWORD *)v9
      && *(_DWORD *)(v9 + 40) < *(_DWORD *)(*((_QWORD *)this + 9) + 56LL) )
    {
      break;
    }
LABEL_20:
    v4 = *((_QWORD *)this + 9);
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)(*(_QWORD *)(v4 + 16) + 8LL) )
      return v5;
  }
  while ( 1 )
  {
    v10 = v38;
    if ( *((_BYTE *)this + 52) )
    {
      ClipRectAndEdgeFlags(v38, v38[2].m128i_u32[3], (char *)this + 32, *((unsigned int *)this + 12), &v36, &v42);
      v11 = v36;
    }
    else
    {
      v11 = _mm_loadu_si128(v38);
      v36 = v11;
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v36) )
      goto LABEL_19;
    lpMem = 0LL;
    v12 = v10[4].m128i_i32[0];
    v13 = v10[4].m128i_i32[1];
    v33 = 0LL;
    v35[2] = 0;
    v35[5] = 0;
    p_lpMem = &lpMem;
    v39 = *((_WORD *)this + 40);
    v40 = *((_BYTE *)this + 82);
    v14 = *(unsigned int *)(v9 + 40);
    v35[0] = v12;
    v15 = v10[4].m128i_i32[2];
    v35[1] = v13;
    v16 = v10[4].m128i_i32[3];
    v17 = 3 * v14;
    v18 = *((_QWORD *)this + 9);
    v35[3] = v15;
    v19 = v10[5].m128i_i32[0];
    v35[4] = v16;
    v20 = v10[5].m128i_i32[1];
    v21 = *(_QWORD *)(v18 + 104) + 16 * v17;
    v35[6] = v19;
    v35[7] = v20;
    v34 = 1;
    v35[8] = 1065353216;
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v21, &v39, v35, &v33);
    if ( v34 )
    {
      v22 = (CSurfaceDrawListBrush *)*p_lpMem;
      *p_lpMem = v33;
      if ( v22 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1u);
    }
    if ( (v5 & 0x80000000) != 0 )
      break;
    *((__m128i *)lpMem + 9) = *(const __m128i *)((char *)v10 + 88);
    v23 = lpMem;
    *(_OWORD *)((char *)lpMem + 8) = *(_OWORD *)((char *)this + 8);
    v23[3] = *((_QWORD *)this + 3);
    v24 = (__m128i *)lpMem;
    LODWORD(v23) = v10[2].m128i_i32[3];
    *((_BYTE *)lpMem + 52) = 1;
    v24[2] = v11;
    v24[3].m128i_i32[0] = (int)v23;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(
        (CSurfaceDrawListBrush *)lpMem,
        (const struct D2D_VECTOR_2F *)this + 7);
    v25 = ((__int64 (__fastcall *)(void *, void *))v8)(lpMem, a3);
    v5 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x73u, 0LL);
      goto LABEL_26;
    }
    v27 = lpMem;
    if ( lpMem )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)lpMem + 64);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v27 + 7);
      ObjectCache = CThreadContext::GetObjectCache(v28);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(v27);
      }
      else
      {
        *v27 = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = v27;
      }
    }
    v8 = v41;
LABEL_19:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v37) )
      goto LABEL_20;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, 0LL, 0, v5, 0x69u, 0LL);
LABEL_26:
  if ( lpMem )
    CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1u);
  return v5;
}
