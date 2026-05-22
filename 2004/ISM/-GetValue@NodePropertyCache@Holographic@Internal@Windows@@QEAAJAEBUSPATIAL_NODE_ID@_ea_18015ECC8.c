/*
 * XREFs of ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_K@Z @ 0x18015ECC8
 * Callers:
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D2BC (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_s_1 @ 0x18011A098 (memcpy_s_1.c)
 *     ?FindPropertyMapForNode@NodePropertyCache@Holographic@Internal@Windows@@AEAAPEAV?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18015BD40 (-FindPropertyMapForNode@NodePropertyCache@Holographic@Internal@Windows@@AEAAPEAV-$map@U_GUID@@V-.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x180167900 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidL.c)
 */

__int64 __fastcall Windows::Internal::Holographic::NodePropertyCache::GetValue(
        RTL_SRWLOCK *this,
        const struct SPATIAL_NODE_ID *a2,
        const struct _GUID *a3,
        void *a4,
        rsize_t DestinationSize)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 PropertyMapForNode; // rax
  _QWORD *v11; // rbx
  const void *v12; // r8
  rsize_t v13; // r9
  unsigned int v14; // ebx
  const char *v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v5 = this + 2;
  AcquireSRWLockShared(this + 2);
  PropertyMapForNode = Windows::Internal::Holographic::NodePropertyCache::FindPropertyMapForNode(
                         (__int64)this,
                         (__int64)a2);
  v11 = (_QWORD *)PropertyMapForNode;
  if ( !PropertyMapForNode
    || (std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::find(
          PropertyMapForNode,
          &v18,
          a3),
        v18 == *v11) )
  {
    v14 = -2147023728;
  }
  else
  {
    v12 = *(const void **)(v18 + 48);
    v13 = *(_QWORD *)(v18 + 56) - (_QWORD)v12;
    if ( DestinationSize == v13 )
    {
      if ( memcpy_s_1(a4, DestinationSize, v12, v13) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          422LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyCache.h",
          v15);
        __debugbreak();
      }
      v14 = 0;
    }
    else
    {
      v14 = -2147024883;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A4,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyCache.h",
        (const char *)0x8007000DLL);
    }
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return v14;
}
