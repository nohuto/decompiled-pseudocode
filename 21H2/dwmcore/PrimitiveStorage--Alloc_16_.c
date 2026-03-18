/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x1800B4768
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1800B3CC4 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801E8814 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x1800B2898 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x1800B7C5C (--0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F1BC4 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::Alloc_16_(
        struct CDrawListPrimitive::GeometryCounts *a1)
{
  PrimitiveStorage::CInlineStorageBase *v1; // rbx
  int v3; // eax
  _DWORD *Value; // rsi
  int v5; // ecx
  _OWORD *v6; // r10
  __int64 v7; // r9
  __int128 v8; // xmm0
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PrimitiveStorage::CInlineStorageBase *result; // rax
  char *v15; // rax
  char *v16; // r9
  __int128 v17; // xmm0
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct CObjectCache *ObjectCache; // rax
  unsigned int v25; // r8d
  PrimitiveStorage::CInlineStorageBase *v26; // rsi
  int v27; // edx
  unsigned int v28; // ecx
  CThreadContext *v29; // rax
  __int64 v30; // rcx
  CThreadContext *v31; // rax
  __int128 v32; // [rsp+30h] [rbp-50h]
  __int128 v33; // [rsp+30h] [rbp-50h]
  __int128 v34; // [rsp+30h] [rbp-50h]
  __int128 v35; // [rsp+40h] [rbp-40h]
  __int128 v36; // [rsp+40h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+8h]

  v1 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    v3 = *((_DWORD *)a1 + 2);
    if ( v3 == 2 && !*((_DWORD *)a1 + 4) )
    {
      if ( *(_DWORD *)a1 <= 4u )
      {
        if ( *((_DWORD *)a1 + 3) <= 6u )
        {
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v29 = (CThreadContext *)operator new(0x150uLL);
            if ( !v29 || (v31 = CThreadContext::CThreadContext(v29), (Value = v31) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, -2147024882, 0x42u);
              ModuleFailFastForHRESULT(2147942414LL, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v31);
          }
          v5 = Value[41];
          v6 = 0LL;
          if ( v5 )
          {
            v6 = (_OWORD *)*((_QWORD *)Value + 21);
            *((_QWORD *)Value + 21) = *(_QWORD *)v6;
            Value[41] = v5 - 1;
          }
          if ( v6 || (v6 = DefaultHeap::Alloc(0x1A8uLL)) != 0LL )
          {
            v7 = *(unsigned int *)a1;
            v8 = *(_OWORD *)a1;
            v9 = *((_DWORD *)a1 + 2) + 2;
            v1 = (PrimitiveStorage::CInlineStorageBase *)v6;
            *(_QWORD *)&v32 = (char *)v6
                            + (((((_BYTE)v6 + 104) & 0xF) + 15) & 0x10)
                            - (unsigned __int64)(((_BYTE)v6 + 104) & 0xF)
                            + 104;
            *((_QWORD *)&v32 + 1) = v32 + (unsigned int)(8 * v9 * *(_DWORD *)a1);
            v10 = (unsigned int)(8 * v9 * *((_DWORD *)a1 + 1)) + *((_QWORD *)&v32 + 1);
            v11 = *((unsigned int *)a1 + 3);
            ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
            *(_OWORD *)((char *)v6 + 8) = v8;
            v12 = v10 + 8 * v7;
            *(_QWORD *)&v35 = v10;
            v13 = v12 + 2 * v11;
            *((_QWORD *)&v35 + 1) = v12;
            LODWORD(v11) = *((_DWORD *)a1 + 4);
            v6[2] = v32;
            *((_DWORD *)v6 + 6) = v11;
            v6[3] = v35;
            *(_QWORD *)v6 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
            *((_QWORD *)v6 + 8) = v13;
          }
          return v1;
        }
        goto LABEL_16;
      }
      if ( *(_DWORD *)a1 <= 8u )
      {
LABEL_16:
        if ( *((_DWORD *)a1 + 3) <= 0x1Eu )
        {
          ObjectCache = CThreadContext::GetObjectCache(a1);
          v26 = 0LL;
          v27 = *((_DWORD *)ObjectCache + 1);
          if ( v27 )
          {
            v26 = (PrimitiveStorage::CInlineStorageBase *)*((_QWORD *)ObjectCache + 1);
            *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v26;
            *((_DWORD *)ObjectCache + 1) = v27 - 1;
          }
          if ( v26 || (v26 = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(0x2F8uLL)) != 0LL )
          {
            PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v26, a1, v25);
            v1 = v26;
            *(_QWORD *)v26 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
          }
          return v1;
        }
      }
    }
    v15 = (char *)DefaultHeap::Alloc(
                    (unsigned int)(2
                                 * (*((_DWORD *)a1 + 3)
                                  + 4
                                  * (*((_DWORD *)a1 + 1) * (v3 + 2) + *(_DWORD *)a1 * (v3 + 3) + 6 * *((_DWORD *)a1 + 4)))
                                 + 15)
                  + 104LL);
    v16 = v15;
    if ( !v15 )
      return 0LL;
    v17 = *(_OWORD *)a1;
    v18 = *(unsigned int *)a1;
    v19 = *((_DWORD *)a1 + 2) + 2;
    *(_QWORD *)&v33 = &v15[(((((_BYTE)v15 + 104) & 0xF) + 15) & 0x10)
                         - (unsigned __int64)(((_BYTE)v15 + 104) & 0xF)
                         + 104];
    *((_QWORD *)&v33 + 1) = (unsigned int)(8 * v19 * *(_DWORD *)a1) + (_QWORD)v33;
    v20 = (unsigned int)(8 * v19 * *((_DWORD *)a1 + 1)) + *((_QWORD *)&v33 + 1);
    v21 = *((unsigned int *)a1 + 3);
    ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
    *(_OWORD *)(v16 + 8) = v17;
    *(_QWORD *)&v36 = v20;
    v22 = v20 + 8 * v18;
    v23 = v22 + 2 * v21;
    *((_QWORD *)&v36 + 1) = v22;
    LODWORD(v21) = *((_DWORD *)a1 + 4);
    *((_OWORD *)v16 + 2) = v33;
    *((_DWORD *)v16 + 6) = v21;
    *((_OWORD *)v16 + 3) = v36;
    *(_QWORD *)v16 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
    *((_QWORD *)v16 + 8) = v23;
    return (PrimitiveStorage::CInlineStorageBase *)v16;
  }
  result = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(0x68uLL);
  if ( !result )
    return v1;
  v28 = *((_DWORD *)a1 + 2);
  ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  *((_QWORD *)&v34 + 1) = v28;
  *((_OWORD *)result + 2) = 0LL;
  *(_QWORD *)&v34 = 0LL;
  *((_OWORD *)result + 3) = 0LL;
  *(_QWORD *)result = &PrimitiveStorage::CEmptyStorage::`vftable';
  *(_OWORD *)((char *)result + 8) = v34;
  *((_DWORD *)result + 6) = 0;
  *((_QWORD *)result + 8) = 0LL;
  return result;
}
