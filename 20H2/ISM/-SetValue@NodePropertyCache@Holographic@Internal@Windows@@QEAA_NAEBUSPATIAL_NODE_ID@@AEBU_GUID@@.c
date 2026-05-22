/*
 * XREFs of ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180163B5C
 * Callers:
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D22C (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 *     ?GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D3A0 (-GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUS.c)
 *     ?OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2NodePropertyRequest@234@J@Z @ 0x180161260 (-OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcmp_0 @ 0x18004A62F (memcmp_0.c)
 *     memcpy_s_1 @ 0x18011A008 (memcpy_s_1.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18015545C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x180155754 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x18015580C (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@Prop.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016011C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?NodePropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0PEBX_K@Z @ 0x180160588 (-NodePropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167AE4 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::Holographic::NodePropertyCache::SetValue(
        struct _GUID *this,
        const struct SPATIAL_NODE_ID *a2,
        const struct _GUID *a3,
        const void *a4,
        size_t Size)
{
  RTL_SRWLOCK *v9; // rbp
  int v10; // r9d
  int v11; // r9d
  __int64 v12; // r14
  char *v13; // rsi
  __int64 v14; // rbx
  size_t v15; // r15
  bool v16; // cf
  bool v17; // cc
  char v18; // bl
  char *v19; // rbx
  const char *v20; // r9
  __int64 v21; // rcx
  HolographicDriverClientTrace *v22; // rcx
  const void *v24; // [rsp+20h] [rbp-58h]
  _QWORD v25[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = (RTL_SRWLOCK *)&this[1];
  AcquireSRWLockExclusive((PSRWLOCK)&this[1]);
  std::map<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>>::_Try_emplace<_GUID const &,>(
    (__int64 *)this[1].Data4,
    (__int64)v25,
    a2,
    v10);
  std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>::_Try_emplace<_GUID const &,>(
    (__int64 *)(v25[0] + 48LL),
    (__int64)v25,
    a3,
    v11);
  v12 = v25[0];
  v13 = *(char **)(v25[0] + 56LL);
  v14 = *(_QWORD *)(v25[0] + 48LL);
  v15 = (size_t)&v13[-v14];
  v16 = Size < (unsigned __int64)&v13[-v14];
  v17 = Size <= (unsigned __int64)&v13[-v14];
  if ( (char *)Size == &v13[-v14] )
  {
    if ( !memcmp_0(*(const void **)(v25[0] + 48LL), a4, Size) )
    {
      v18 = 0;
      goto LABEL_16;
    }
    v16 = Size < v15;
    v17 = Size <= v15;
  }
  if ( v16 )
  {
    v13 = (char *)(v14 + Size);
    *(_QWORD *)(v12 + 56) = v14 + Size;
  }
  else if ( !v17 )
  {
    if ( Size <= *(_QWORD *)(v12 + 64) - v14 )
    {
      v19 = (char *)(Size + v14);
      memset_0(v13, 0, v19 - v13);
      *(_QWORD *)(v12 + 56) = v19;
      v13 = v19;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v12 + 48, Size);
      v13 = *(char **)(v12 + 56);
    }
  }
  if ( memcpy_s_1(*(void *const *)(v12 + 48), (const rsize_t)&v13[-*(_QWORD *)(v12 + 48)], a4, Size) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      385LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyCache.h",
      v20);
    __debugbreak();
  }
  if ( HolographicDriverClientTrace::IsEnabled((__int64)retaddr) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v21,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::NodePropertyCache_SetValue_(v22, this, a2, a3, v24, Size);
  }
  v18 = 1;
LABEL_16:
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return v18;
}
