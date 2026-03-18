/*
 * XREFs of ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800CEFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x1800CF50C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E48C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolygonShape::GetOutline(CPolygonShape *this, struct ID2D1GeometrySink *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  struct CObjectCache *ObjectCache; // rax
  char *v7; // rbx
  struct CObjectCache *v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int *v18; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 24) == *(_QWORD *)(v2 + 32) )
  {
    ObjectCache = CThreadContext::GetObjectCache(this);
    v7 = 0LL;
    v8 = ObjectCache;
    v9 = *((_DWORD *)ObjectCache + 1);
    if ( v9 )
    {
      v7 = (char *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v7;
      *((_DWORD *)ObjectCache + 1) = v9 - 1;
    }
    if ( !v7 )
    {
      v7 = (char *)DefaultHeap::Alloc(0x168uLL);
      if ( !v7 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, -2147024882, 0x2Eu);
        return v3;
      }
    }
    *((_DWORD *)v7 + 2) = 0;
    *(_QWORD *)v7 = &CPolygonBuilder::`vftable';
    *((_QWORD *)v7 + 2) = v7 + 40;
    *((_QWORD *)v7 + 3) = v7 + 40;
    *((_QWORD *)v7 + 4) = v7 + 360;
    (*(void (__fastcall **)(char *, struct CObjectCache *))(*(_QWORD *)v7 + 8LL))(v7, v8);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 96LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            0LL,
            v10,
            v7);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x30u);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
      return v3;
    }
    v13 = (_QWORD *)*((_QWORD *)this + 2);
    v14 = v13[4];
    v15 = v13[3];
    v16 = (unsigned int)((__int64)(*((_QWORD *)v7 + 3) - *((_QWORD *)v7 + 2)) >> 3);
    v17 = (v14 - v15) >> 3;
    if ( v16 < v17 )
    {
      v13[4] = v15 + 8 * v16;
    }
    else if ( v16 > v17 )
    {
      if ( v16 <= (v13[5] - v15) >> 3 )
      {
        v21 = v16 - v17;
        if ( v21 )
          v14 += 8 * v21;
        v13[4] = v14;
      }
      else
      {
        std::vector<CMilPoint2F>::_Resize_reallocate<std::_Value_init_tag>(v13 + 3);
      }
    }
    memcpy_0(
      *(void **)(*((_QWORD *)this + 2) + 24LL),
      *((const void **)v7 + 2),
      8LL * (unsigned int)((__int64)(*((_QWORD *)v7 + 3) - *((_QWORD *)v7 + 2)) >> 3));
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
    v2 = *((_QWORD *)this + 2);
  }
  v18 = *(unsigned int **)(v2 + 24);
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(v2 + 32) - (_QWORD)v18) >> 3) >= 3 )
  {
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(
      a2,
      _mm_unpacklo_ps((__m128)*v18, (__m128)v18[1]).m128_u64[0],
      0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL))(
      a2,
      *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 8LL,
      (unsigned int)((__int64)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 2) + 24LL)) >> 3)
    - 1);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1LL);
  }
  return v3;
}
