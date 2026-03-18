/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180083290
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x1800835FC (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180065760 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180082FB8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     IsValidAxisAlignedRect @ 0x180083530 (IsValidAxisAlignedRect.c)
 *     VerticesHaveIntegralXY @ 0x18008359C (VerticesHaveIntegralXY.c)
 *     ReorderAxisAlignedRectVertices @ 0x180083824 (ReorderAxisAlignedRectVertices.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800B2464 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v5; // r12d
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  void *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  unsigned int *v16; // rdi
  unsigned int v17; // ebx
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  char *v20; // rax
  _DWORD *v21; // rax
  CRegion *v22; // rax
  __int32 v23; // r9d
  __int32 v24; // r10d
  __int32 v25; // eax
  __int32 v26; // r11d
  _DWORD *v27; // rdx
  __int32 *v28; // r8
  unsigned __int64 v30; // rbx
  unsigned int v31; // [rsp+20h] [rbp-40h]
  unsigned __int64 v32; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-28h]
  int v34; // [rsp+3Ch] [rbp-24h]
  __m128 v35; // [rsp+40h] [rbp-20h] BYREF

  v3 = *(_QWORD *)a2;
  v5 = 0;
  v6 = *(_QWORD *)(*a1 + 184);
  v7 = 8 * *((_DWORD *)a1 + 6) + 16;
  v8 = *(_QWORD *)(a2 + 8) - v3;
  v9 = 4 * v7;
  if ( v9 < v8 )
  {
    *(_QWORD *)(a2 + 8) = v3 + v9;
  }
  else if ( v9 > v8 )
  {
    if ( v9 <= *(_QWORD *)(a2 + 16) - v3 )
    {
      v30 = v3 + v9;
      memset_0(*(void **)(a2 + 8), 0, v3 + v9 - *(_QWORD *)(a2 + 8));
      *(_QWORD *)(a2 + 8) = v30;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a2, (unsigned int)v9);
    }
  }
  v10 = *a1;
  v11 = *(_QWORD *)a2;
  v35.m128_u64[0] = *(_QWORD *)a2;
  v35.m128_u64[1] = v7 | 0x400000000LL;
  if ( *(_DWORD *)(v10 + 24) <= 1u )
  {
    v12 = DefaultHeap::Alloc(*(_QWORD *)(a2 + 8) - v11);
    v14 = (_QWORD *)a1[2];
    a1[2] = (__int64)v12;
    if ( v14 )
    {
      operator delete(v14);
      v12 = (void *)a1[2];
    }
    if ( v12 )
    {
      TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v6, *(_QWORD *)(*a1 + 64) + 8LL, v13, 1.0, (__int64 *)&v35);
      v35.m128_u64[0] = v11;
      v35.m128_u64[1] = v7 | 0x400000000LL;
      if ( !(unsigned __int8)VerticesHaveIntegralXY(&v35) )
        return v5;
      v35.m128_u64[0] = v11;
      v35.m128_u64[1] = v7 | 0x400000000LL;
      if ( !(unsigned __int8)IsValidAxisAlignedRect(&v35) )
        return v5;
      v15 = *((unsigned int *)a1 + 6);
      v35.m128_u64[0] = a1[2];
      v16 = (unsigned int *)v35.m128_u64[0];
      v17 = 8 * v15 + 16;
      v32 = v11;
      v35.m128_u64[1] = v17 | 0x400000000LL;
      v33 = v7;
      v34 = 4;
      ReorderAxisAlignedRectVertices(&v32, v15, &v35);
      v18 = _mm_mul_ps(
              _mm_add_ps(
                _mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)*v16, (__m128)*(unsigned int *)((char *)v16 + (int)(3 * v17))),
                  _mm_unpacklo_ps((__m128)v16[1], (__m128)*(unsigned int *)((char *)v16 + (int)(3 * v17) + 4))),
                g_halfFixedPointForRounding),
              (__m128)_xmm);
      v19 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v18);
      v35 = _mm_or_ps(_mm_andnot_ps(v19, (__m128)_mm_cvttps_epi32(v18)), _mm_and_ps(v19, DirectX::g_XMAbsMask));
      v20 = (char *)DefaultHeap::Alloc(0x48uLL);
      v14 = v20;
      if ( v20 )
      {
        v21 = v20 + 8;
        *v14 = v21;
        *v21 = 0;
      }
      else
      {
        v14 = 0LL;
      }
      v22 = (CRegion *)a1[1];
      a1[1] = (__int64)v14;
      if ( v22 )
      {
        CRegion::`scalar deleting destructor'(v22, 1u);
        v14 = (_QWORD *)a1[1];
      }
      if ( v14 )
      {
        v23 = v35.m128_i32[0];
        v24 = v35.m128_i32[2];
        if ( v35.m128_i32[0] >= v35.m128_i32[2]
          || (v25 = v35.m128_i32[1], v26 = v35.m128_i32[3], v35.m128_i32[1] >= v35.m128_i32[3]) )
        {
          *(_DWORD *)*v14 = 0;
        }
        else
        {
          v27 = (_DWORD *)*v14;
          v28 = (__int32 *)(*v14 + 28LL);
          *v27 = 2;
          *v28 = v23;
          v27[3] = v25;
          v28[1] = v24;
          v27[4] = (_DWORD)v28 - ((_DWORD)v27 + 12);
          v27[1] = v23;
          v27[2] = v24;
          v27[6] = (_DWORD)v28 - ((_DWORD)v27 + 20) + 8;
          v27[5] = v26;
        }
        return v5;
      }
      v31 = 278;
    }
    else
    {
      v31 = 240;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, -2147024882, v31, 0LL);
  }
  return v5;
}
