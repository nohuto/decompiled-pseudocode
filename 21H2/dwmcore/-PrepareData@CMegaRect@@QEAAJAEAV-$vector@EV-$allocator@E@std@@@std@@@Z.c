/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180067194
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180067040 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x18002B534 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004EF80 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ReorderAxisAlignedRectVertices @ 0x180066BD8 (ReorderAxisAlignedRectVertices.c)
 *     VerticesHaveIntegralXY @ 0x1800670C8 (VerticesHaveIntegralXY.c)
 *     IsValidAxisAlignedRect @ 0x180067128 (IsValidAxisAlignedRect.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180079820 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // r12d
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  LPVOID v12; // rax
  int v13; // r8d
  int v14; // r9d
  _QWORD *v15; // rcx
  int v16; // edx
  unsigned int *v17; // rdi
  unsigned int v18; // ebx
  __m128 v19; // xmm3
  __m128 v20; // xmm1
  char *v21; // rax
  _DWORD *v22; // rax
  CRegion *v23; // rax
  __int32 v24; // r9d
  __int32 v25; // r10d
  __int32 v26; // eax
  __int32 v27; // r11d
  _DWORD *v28; // rdx
  __int32 *v29; // r8
  unsigned __int64 v31; // rbx
  unsigned int v32; // [rsp+20h] [rbp-40h]
  __int64 v33; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-28h]
  int v35; // [rsp+3Ch] [rbp-24h]
  __m128 v36; // [rsp+40h] [rbp-20h] BYREF

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
      v31 = v3 + v9;
      memset_0(*(void **)(a2 + 8), 0, v3 + v9 - *(_QWORD *)(a2 + 8));
      *(_QWORD *)(a2 + 8) = v31;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64 *)a2, (unsigned int)v9);
    }
  }
  v10 = *a1;
  v11 = *(_QWORD *)a2;
  v36.m128_u64[0] = *(_QWORD *)a2;
  v36.m128_u64[1] = v7 | 0x400000000LL;
  if ( *(_DWORD *)(v10 + 24) <= 1u )
  {
    v12 = DefaultHeap::Alloc(*(_QWORD *)(a2 + 8) - v11);
    v15 = (_QWORD *)a1[2];
    a1[2] = (__int64)v12;
    if ( v15 )
    {
      operator delete(v15);
      v12 = (LPVOID)a1[2];
    }
    if ( v12 )
    {
      TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v6, *(_QWORD *)(*a1 + 64) + 8, v13, v14, (__int64)&v36);
      v36.m128_u64[0] = v11;
      v36.m128_u64[1] = v7 | 0x400000000LL;
      if ( !VerticesHaveIntegralXY((__int64 *)&v36) )
        return v5;
      v36.m128_u64[0] = v11;
      v36.m128_u64[1] = v7 | 0x400000000LL;
      if ( !IsValidAxisAlignedRect((__int64)&v36) )
        return v5;
      v16 = *((_DWORD *)a1 + 6);
      v36.m128_u64[0] = a1[2];
      v17 = (unsigned int *)v36.m128_u64[0];
      v18 = 8 * v16 + 16;
      v33 = v11;
      v36.m128_u64[1] = v18 | 0x400000000LL;
      v34 = v7;
      v35 = 4;
      ReorderAxisAlignedRectVertices(&v33, v16, (__int64)&v36);
      v19 = _mm_mul_ps(
              _mm_add_ps(
                _mm_unpacklo_ps(
                  _mm_unpacklo_ps((__m128)*v17, (__m128)*(unsigned int *)((char *)v17 + (int)(3 * v18))),
                  _mm_unpacklo_ps((__m128)v17[1], (__m128)*(unsigned int *)((char *)v17 + (int)(3 * v18) + 4))),
                g_halfFixedPointForRounding),
              (__m128)_xmm);
      v20 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v19);
      v36 = _mm_or_ps(_mm_andnot_ps(v20, (__m128)_mm_cvttps_epi32(v19)), _mm_and_ps(v20, DirectX::g_XMAbsMask));
      v21 = (char *)DefaultHeap::Alloc(0x48uLL);
      v15 = v21;
      if ( v21 )
      {
        v22 = v21 + 8;
        *v15 = v22;
        *v22 = 0;
      }
      else
      {
        v15 = 0LL;
      }
      v23 = (CRegion *)a1[1];
      a1[1] = (__int64)v15;
      if ( v23 )
      {
        CRegion::`scalar deleting destructor'(v23, 1);
        v15 = (_QWORD *)a1[1];
      }
      if ( v15 )
      {
        v24 = v36.m128_i32[0];
        v25 = v36.m128_i32[2];
        if ( v36.m128_i32[0] >= v36.m128_i32[2]
          || (v26 = v36.m128_i32[1], v27 = v36.m128_i32[3], v36.m128_i32[1] >= v36.m128_i32[3]) )
        {
          *(_DWORD *)*v15 = 0;
        }
        else
        {
          v28 = (_DWORD *)*v15;
          v29 = (__int32 *)(*v15 + 28LL);
          *v28 = 2;
          *v29 = v24;
          v28[3] = v26;
          v29[1] = v25;
          v28[4] = (_DWORD)v29 - ((_DWORD)v28 + 12);
          v28[1] = v24;
          v28[2] = v25;
          v28[6] = (_DWORD)v29 - ((_DWORD)v28 + 20) + 8;
          v28[5] = v27;
        }
        return v5;
      }
      v32 = 278;
    }
    else
    {
      v32 = 240;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, -2147024882, v32, 0LL);
  }
  return v5;
}
