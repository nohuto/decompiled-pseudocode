/*
 * XREFs of ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x18022E834
 * Callers:
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18022F2B0 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801E8814 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18022C8AC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___ @ 0x18022C960 (std--_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___.c)
 *     std::_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___ @ 0x18022CAC4 (std--_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___.c)
 *     ?CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z @ 0x18022E6D4 (-CopyInstanceFromIndex@CParticleEmitterVisual@@IEAAXII@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::CreateParticlesPrimitive(
        CParticleEmitterVisual *this,
        struct CDrawListPrimitive *a2,
        struct CDrawListPrimitive **a3)
{
  PrimitiveStorage::CInlineStorageBase **v3; // r13
  float v6; // xmm3_4
  float v7; // xmm0_4
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  int v12; // ecx
  unsigned int k; // ebx
  unsigned int **v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  size_t v19; // rbx
  unsigned int *v20; // rcx
  unsigned int v21; // eax
  char *v22; // rdx
  unsigned int *v23; // r13
  unsigned int v24; // r12d
  unsigned int *j; // rbx
  unsigned int v26; // r8d
  int v27; // esi
  __int64 v28; // rbx
  gsl::details *v29; // r8
  __int64 v30; // rdx
  int v31; // eax
  int Instanced; // eax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  unsigned int **v36; // rsi
  __int64 v37; // r12
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  size_t v41; // rbx
  unsigned int *v42; // rcx
  unsigned int v43; // eax
  char *v44; // rdx
  unsigned int *v45; // r13
  unsigned int v46; // r12d
  unsigned int *i; // rbx
  unsigned int v48; // r8d
  int v49; // [rsp+28h] [rbp-48h]
  __int64 v50; // [rsp+40h] [rbp-30h] BYREF
  int v51; // [rsp+48h] [rbp-28h]
  int v52; // [rsp+4Ch] [rbp-24h]
  _QWORD v53[2]; // [rsp+50h] [rbp-20h] BYREF
  gsl::details *v54[2]; // [rsp+60h] [rbp-10h] BYREF

  v3 = a3;
  if ( !*((_BYTE *)this + 6470) )
  {
    v6 = *((float *)a2 + 20) - *((float *)a2 + 18);
    v7 = *((float *)a2 + 21) - *((float *)a2 + 19);
    *((_BYTE *)this + 6470) = 1;
    *((float *)this + 1609) = 1.0 / v6;
    *((float *)this + 1610) = 1.0 / v7;
    *((float *)this + 1611) = v6;
    *((float *)this + 1612) = v7;
  }
  v8 = *((_QWORD *)this + 131) - *((_QWORD *)this + 130);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 171) - *((_QWORD *)this + 170)) >> 4);
  v10 = *((_DWORD *)this + 201);
  v11 = v8 >> 3;
  if ( (unsigned int)v9 >= (unsigned int)v11 )
    v9 = (unsigned int)v11;
  v12 = v10 - 2;
  if ( !v12 )
  {
    v36 = (unsigned int **)((char *)this + 1384);
    v37 = *((_QWORD *)this + 174);
    v38 = *((_QWORD *)this + 173);
    v39 = (v37 - v38) >> 2;
    if ( (unsigned int)v9 < v39 )
    {
      v40 = v38 + 4 * v9;
LABEL_38:
      *((_QWORD *)this + 174) = v40;
      goto LABEL_39;
    }
    if ( (unsigned int)v9 > v39 )
    {
      if ( (unsigned int)v9 <= (unsigned __int64)((*((_QWORD *)this + 175) - v38) >> 2) )
      {
        v41 = 4 * ((unsigned int)v9 - v39);
        memset_0(*((void **)this + 174), 0, v41);
        v40 = v37 + v41;
        goto LABEL_38;
      }
      std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>((const void **)this + 173, (unsigned int)v9);
    }
LABEL_39:
    v42 = *v36;
    v43 = 0;
    v44 = (char *)*((_QWORD *)this + 174);
    if ( *v36 != (unsigned int *)v44 )
    {
      do
        *v42++ = v43++;
      while ( v42 != (unsigned int *)v44 );
      v42 = *v36;
      v44 = (char *)*((_QWORD *)this + 174);
    }
    std::_Sort_unchecked_unsigned_int____lambda_6619143c50c0dbd69fd5d8cfbdd2e280___(
      v42,
      v44,
      (v44 - (char *)v42) >> 2,
      (__int64)this);
    v45 = (unsigned int *)*((_QWORD *)this + 174);
    v46 = 0;
    for ( i = *v36; i != v45; ++i )
    {
      v48 = v46++;
      CParticleEmitterVisual::CopyInstanceFromIndex(this, *i, v48);
    }
    goto LABEL_23;
  }
  if ( v12 == 1 )
  {
    v14 = (unsigned int **)((char *)this + 1384);
    v15 = *((_QWORD *)this + 174);
    v16 = *((_QWORD *)this + 173);
    v17 = (v15 - v16) >> 2;
    if ( (unsigned int)v9 < v17 )
    {
      v18 = v16 + 4 * v9;
LABEL_16:
      *((_QWORD *)this + 174) = v18;
      goto LABEL_17;
    }
    if ( (unsigned int)v9 > v17 )
    {
      if ( (unsigned int)v9 <= (unsigned __int64)((*((_QWORD *)this + 175) - v16) >> 2) )
      {
        v19 = 4 * ((unsigned int)v9 - v17);
        memset_0(*((void **)this + 174), 0, v19);
        v18 = v19 + v15;
        goto LABEL_16;
      }
      std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>((const void **)this + 173, (unsigned int)v9);
    }
LABEL_17:
    v20 = *v14;
    v21 = 0;
    v22 = (char *)*((_QWORD *)this + 174);
    if ( *v14 != (unsigned int *)v22 )
    {
      do
        *v20++ = v21++;
      while ( v20 != (unsigned int *)v22 );
      v20 = *v14;
      v22 = (char *)*((_QWORD *)this + 174);
    }
    std::_Sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
      v20,
      v22,
      (v22 - (char *)v20) >> 2,
      (__int64)this);
    v23 = (unsigned int *)*((_QWORD *)this + 174);
    v24 = 0;
    for ( j = *v14; j != v23; ++j )
    {
      v26 = v24++;
      CParticleEmitterVisual::CopyInstanceFromIndex(this, *j, v26);
    }
LABEL_23:
    v3 = a3;
    goto LABEL_24;
  }
  for ( k = 0; k < (unsigned int)v9; ++k )
    CParticleEmitterVisual::CopyInstanceFromIndex(this, k, k);
LABEL_24:
  v27 = *((_DWORD *)this + 201);
  v28 = *((_QWORD *)this + 170);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v54, (unsigned int)v9);
  if ( v54[0] == (gsl::details *)-1LL
    || !v28 && v54[0]
    || (v29 = (gsl::details *)*((_QWORD *)a2 + 7), v30 = *((unsigned int *)a2 + 5), !v29) && *((_DWORD *)a2 + 5) )
  {
    gsl::details::terminate(v54[0]);
    JUMPOUT(0x18022EB92LL);
  }
  v50 = *((_QWORD *)a2 + 4);
  v31 = *((_DWORD *)a2 + 4);
  v53[0] = v54[0];
  v54[1] = v29;
  v51 = 8 * v31 + 16;
  v52 = *((_DWORD *)a2 + 2);
  v53[1] = v28;
  v54[0] = (gsl::details *)v30;
  Instanced = CDrawListPrimitive::CreateInstanced((__int64)&v50, v30, v54, (int *)v53, (__int64)a2 + 88, v49, v27, v3);
  v34 = Instanced;
  if ( Instanced < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, Instanced, 0x182u);
  return v34;
}
