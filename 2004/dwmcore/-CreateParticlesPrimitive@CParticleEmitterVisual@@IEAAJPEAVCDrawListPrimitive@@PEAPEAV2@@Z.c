/*
 * XREFs of ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801E0C4C
 * Callers:
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E16F4 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180175DB0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801A4BA8 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 *     std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___ @ 0x1801DEDC4 (std--_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___.c)
 *     std::_Sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___ @ 0x1801DEECC (std--_Sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___.c)
 *     ?CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z @ 0x1801E0AEC (-CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::CreateParticlesPrimitive(
        CParticleEmitterVisual *this,
        struct CDrawListPrimitive *a2,
        struct CDrawListPrimitive **a3)
{
  __int64 v3; // r12
  PrimitiveStorage::CInlineStorageBase **v4; // r9
  float v7; // xmm3_4
  float v8; // xmm0_4
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r14
  int v14; // ecx
  unsigned int v15; // ebx
  char **v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  size_t v21; // rbx
  char *v22; // rax
  int v23; // r8d
  char *v24; // rcx
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int *v28; // rbx
  unsigned int v29; // r15d
  unsigned __int64 v30; // r13
  unsigned int v31; // r8d
  char **v32; // rsi
  __int64 v33; // r15
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  size_t v37; // rbx
  char *v38; // rax
  int v39; // r8d
  char *v40; // rcx
  __int64 v41; // r9
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int *v44; // rbx
  unsigned int v45; // r15d
  unsigned __int64 v46; // r13
  unsigned int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  int Instanced; // eax
  __int64 v52; // rcx
  unsigned int v53; // ebx
  int v55; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+40h] [rbp-58h] BYREF
  int v57; // [rsp+48h] [rbp-50h]
  int v58; // [rsp+4Ch] [rbp-4Ch]
  _QWORD v59[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v60[2]; // [rsp+60h] [rbp-38h] BYREF

  v3 = 0LL;
  v4 = a3;
  if ( !*((_BYTE *)this + 6358) )
  {
    v7 = *((float *)a2 + 20) - *((float *)a2 + 18);
    v8 = *((float *)a2 + 21) - *((float *)a2 + 19);
    *((_BYTE *)this + 6358) = 1;
    *((float *)this + 1581) = 1.0 / v7;
    *((float *)this + 1582) = 1.0 / v8;
    *((float *)this + 1583) = v7;
    *((float *)this + 1584) = v8;
  }
  v9 = *((_QWORD *)this + 117) - *((_QWORD *)this + 116);
  v10 = (unsigned __int128)((__int64)(*((_QWORD *)this + 157) - *((_QWORD *)this + 156)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v11 = *((_DWORD *)this + 173);
  v12 = v9 >> 3;
  v13 = ((unsigned __int64)v10 >> 63) + (v10 >> 3);
  if ( (unsigned int)v13 >= (unsigned int)v12 )
    v13 = (unsigned int)v12;
  v14 = v11 - 2;
  if ( !v14 )
  {
    v32 = (char **)((char *)this + 1272);
    v33 = *((_QWORD *)this + 160);
    v34 = *((_QWORD *)this + 159);
    v35 = (v33 - v34) >> 3;
    if ( (unsigned int)v13 < v35 )
    {
      v36 = v34 + 8 * v13;
LABEL_33:
      *((_QWORD *)this + 160) = v36;
      goto LABEL_34;
    }
    if ( (unsigned int)v13 > v35 )
    {
      if ( (unsigned int)v13 <= (unsigned __int64)((*((_QWORD *)this + 161) - v34) >> 3) )
      {
        v37 = 8 * ((unsigned int)v13 - v35);
        memset_0(*((void **)this + 160), 0, v37);
        v36 = v37 + v33;
        goto LABEL_33;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>(
        (__int64)this + 1272,
        (unsigned int)v13);
    }
LABEL_34:
    v38 = (char *)*((_QWORD *)this + 160);
    v39 = 0;
    v40 = *v32;
    v41 = 0LL;
    v42 = (unsigned __int64)(v38 - *v32 + 7) >> 3;
    if ( *v32 > v38 )
      v42 = 0LL;
    if ( v42 )
    {
      do
      {
        v43 = v39;
        ++v41;
        ++v39;
        *(_QWORD *)v40 = v43;
        v40 += 8;
      }
      while ( v41 != v42 );
      v40 = *v32;
      v38 = (char *)*((_QWORD *)this + 160);
    }
    std::_Sort_unchecked_unsigned___int64____lambda_f019dc980a0bafac7c6a2c043d1eae89___(
      v40,
      v38,
      (v38 - v40) >> 3,
      (__int64)this);
    v44 = (unsigned int *)*v32;
    v45 = 0;
    v46 = (unsigned __int64)(*((_QWORD *)this + 160) - *((_QWORD *)this + 159) + 7LL) >> 3;
    if ( *((_QWORD *)this + 159) > *((_QWORD *)this + 160) )
      v46 = 0LL;
    if ( v46 )
    {
      do
      {
        v47 = v45++;
        CParticleEmitterVisual::CopyInstanceFromIndex(this, *v44, v47);
        ++v3;
        v44 += 2;
      }
      while ( v3 != v46 );
    }
    goto LABEL_43;
  }
  if ( v14 == 1 )
  {
    v16 = (char **)((char *)this + 1272);
    v17 = *((_QWORD *)this + 160);
    v18 = *((_QWORD *)this + 159);
    v19 = (v17 - v18) >> 3;
    if ( (unsigned int)v13 < v19 )
    {
      v20 = v18 + 8 * v13;
LABEL_16:
      *((_QWORD *)this + 160) = v20;
      goto LABEL_17;
    }
    if ( (unsigned int)v13 > v19 )
    {
      if ( (unsigned int)v13 <= (unsigned __int64)((*((_QWORD *)this + 161) - v18) >> 3) )
      {
        v21 = 8 * ((unsigned int)v13 - v19);
        memset_0(*((void **)this + 160), 0, v21);
        v20 = v21 + v17;
        goto LABEL_16;
      }
      std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>(
        (__int64)this + 1272,
        (unsigned int)v13);
    }
LABEL_17:
    v22 = (char *)*((_QWORD *)this + 160);
    v23 = 0;
    v24 = *v16;
    v25 = 0LL;
    v26 = (unsigned __int64)(v22 - *v16 + 7) >> 3;
    if ( *v16 > v22 )
      v26 = 0LL;
    if ( v26 )
    {
      do
      {
        v27 = v23;
        ++v25;
        ++v23;
        *(_QWORD *)v24 = v27;
        v24 += 8;
      }
      while ( v25 != v26 );
      v24 = *v16;
      v22 = (char *)*((_QWORD *)this + 160);
    }
    std::_Sort_unchecked_unsigned___int64____lambda_448b3feef23c663190309d6322577307___(
      v24,
      v22,
      (v22 - v24) >> 3,
      (__int64)this);
    v28 = (unsigned int *)*v16;
    v29 = 0;
    v30 = (unsigned __int64)(*((_QWORD *)this + 160) - *((_QWORD *)this + 159) + 7LL) >> 3;
    if ( *((_QWORD *)this + 159) > *((_QWORD *)this + 160) )
      v30 = 0LL;
    if ( v30 )
    {
      do
      {
        v31 = v29++;
        CParticleEmitterVisual::CopyInstanceFromIndex(this, *v28, v31);
        ++v3;
        v28 += 2;
      }
      while ( v3 != v30 );
    }
    goto LABEL_43;
  }
  v15 = 0;
  if ( !(_DWORD)v13 )
    goto LABEL_44;
  do
  {
    CParticleEmitterVisual::CopyInstanceFromIndex(this, v15, v15);
    ++v15;
  }
  while ( v15 < (unsigned int)v13 );
LABEL_43:
  v4 = a3;
LABEL_44:
  v48 = *((unsigned int *)this + 173);
  if ( !*((_QWORD *)this + 156) && (_DWORD)v13
    || (v59[1] = *((_QWORD *)this + 156), v49 = *((_QWORD *)a2 + 7), v59[0] = (unsigned int)v13, !v49)
    && *((_DWORD *)a2 + 5) )
  {
    ((void (__fastcall *)(_QWORD, __int64, char *, PrimitiveStorage::CInlineStorageBase **))`gsl::details::get_terminate_handler'::`2'::handler)(
      0LL,
      v48,
      (char *)a2 + 88,
      v4);
    __debugbreak();
  }
  v60[0] = *((unsigned int *)a2 + 5);
  v56 = *((_QWORD *)a2 + 4);
  v50 = *((_DWORD *)a2 + 4);
  v60[1] = v49;
  v57 = 8 * v50 + 16;
  v58 = *((_DWORD *)a2 + 2);
  Instanced = CDrawListPrimitive::CreateInstanced((__int64)&v56, v48, v60, (int *)v59, (__int64)a2 + 88, v55, v48, v4);
  v53 = Instanced;
  if ( Instanced < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, Instanced, 0x185u, 0LL);
  return v53;
}
