/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x180054A9C
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180054020 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x18008370C (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801A4BA8 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x180047524 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180054D44 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x1800C45AC (--0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::Alloc_16_(
        struct CDrawListPrimitive::GeometryCounts *a1)
{
  PrimitiveStorage::CInlineStorageBase *v1; // rbx
  int v3; // eax
  int Current; // eax
  struct CThreadContext *v5; // rcx
  _OWORD *v6; // r10
  int v7; // edx
  __int64 v8; // r9
  __int128 v9; // xmm0
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PrimitiveStorage::CInlineStorageBase *result; // rax
  struct CObjectCache *ObjectCache; // rax
  unsigned int v17; // r8d
  PrimitiveStorage::CInlineStorageBase *v18; // rsi
  int v19; // edx
  PrimitiveStorage::CInlineStorageBase *v20; // rax
  unsigned int v21; // r8d
  PrimitiveStorage::CInlineStorageBase *v22; // rsi
  unsigned int v23; // ecx
  __int128 v24; // [rsp+20h] [rbp-50h]
  __int128 v25; // [rsp+20h] [rbp-50h]
  __int128 v26; // [rsp+30h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+8h]
  struct CThreadContext *v28; // [rsp+80h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    v3 = *((_DWORD *)a1 + 2);
    if ( v3 == 2 && !*((_DWORD *)a1 + 4) )
    {
      if ( *(_DWORD *)a1 <= 4u && *((_DWORD *)a1 + 3) <= 6u )
      {
        Current = CThreadContext::GetCurrent(&v28);
        if ( Current < 0 )
          ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
        v5 = v28;
        v6 = 0LL;
        v7 = *((_DWORD *)v28 + 27);
        if ( v7 )
        {
          v6 = (_OWORD *)*((_QWORD *)v28 + 14);
          *((_QWORD *)v28 + 14) = *(_QWORD *)v6;
          *((_DWORD *)v5 + 27) = v7 - 1;
        }
        if ( v6 || (v6 = DefaultHeap::Alloc(0x1A8uLL)) != 0LL )
        {
          v8 = *(unsigned int *)a1;
          v9 = *(_OWORD *)a1;
          v1 = (PrimitiveStorage::CInlineStorageBase *)v6;
          v10 = *((_DWORD *)a1 + 2) + 2;
          *(_QWORD *)&v24 = (char *)v6
                          + (((((_BYTE)v6 + 104) & 0xF) + 15) & 0x10)
                          - (unsigned __int64)(((_BYTE)v6 + 104) & 0xF)
                          + 104;
          *((_QWORD *)&v24 + 1) = v24 + (unsigned int)(8 * v10 * *(_DWORD *)a1);
          v11 = (unsigned int)(8 * v10 * *((_DWORD *)a1 + 1)) + *((_QWORD *)&v24 + 1);
          v12 = *((unsigned int *)a1 + 3);
          ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
          *(_OWORD *)((char *)v6 + 8) = v9;
          v13 = v11 + 8 * v8;
          *(_QWORD *)&v26 = v11;
          v14 = v13 + 2 * v12;
          *((_QWORD *)&v26 + 1) = v13;
          LODWORD(v12) = *((_DWORD *)a1 + 4);
          v6[2] = v24;
          *((_DWORD *)v6 + 6) = v12;
          v6[3] = v26;
          *(_QWORD *)v6 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
          *((_QWORD *)v6 + 8) = v14;
        }
        return v1;
      }
      if ( *(_DWORD *)a1 <= 8u && *((_DWORD *)a1 + 3) <= 0x1Eu )
      {
        ObjectCache = CThreadContext::GetObjectCache(a1);
        v18 = 0LL;
        v19 = *((_DWORD *)ObjectCache + 1);
        if ( v19 )
        {
          v18 = (PrimitiveStorage::CInlineStorageBase *)*((_QWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v18;
          *((_DWORD *)ObjectCache + 1) = v19 - 1;
        }
        if ( v18 || (v18 = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(0x2F8uLL)) != 0LL )
        {
          PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v18, a1, v17);
          v1 = v18;
          *(_QWORD *)v18 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
        }
        return v1;
      }
    }
    v20 = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(
                                                    (unsigned int)(2
                                                                 * (*((_DWORD *)a1 + 3)
                                                                  + 4
                                                                  * (*(_DWORD *)a1 * (v3 + 3)
                                                                   + *((_DWORD *)a1 + 1) * (v3 + 2)
                                                                   + 6 * *((_DWORD *)a1 + 4)))
                                                                 + 15)
                                                  + 104LL);
    v22 = v20;
    if ( !v20 )
      return 0LL;
    PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v20, a1, v21);
    *(_QWORD *)v22 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
    return v22;
  }
  else
  {
    result = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(0x68uLL);
    if ( !result )
      return v1;
    v23 = *((_DWORD *)a1 + 2);
    ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
    *((_QWORD *)&v25 + 1) = v23;
    *((_OWORD *)result + 2) = 0LL;
    *(_QWORD *)&v25 = 0LL;
    *((_OWORD *)result + 3) = 0LL;
    *(_QWORD *)result = &PrimitiveStorage::CEmptyStorage::`vftable';
    *(_OWORD *)((char *)result + 8) = v25;
    *((_DWORD *)result + 6) = 0;
    *((_QWORD *)result + 8) = 0LL;
  }
  return result;
}
