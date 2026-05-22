/*
 * XREFs of ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAX_K@Z @ 0x18015EEF0
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015BD9C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_s_1 @ 0x18011A098 (memcpy_s_1.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x180167900 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidL.c)
 */

__int64 __fastcall Windows::Internal::Holographic::PropertyCache::GetValue(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        void *a3,
        rsize_t a4)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v9; // ebx
  const void *v10; // r8
  rsize_t v11; // r9
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = this + 4;
  AcquireSRWLockShared(this + 4);
  std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::find(
    &this[5],
    &v15,
    a2);
  if ( v15 == this[5].Ptr )
  {
    v9 = -2147023728;
  }
  else
  {
    v10 = (const void *)v15[6];
    v11 = v15[7] - (_QWORD)v10;
    if ( a4 == v11 )
    {
      if ( memcpy_s_1(a3, a4, v10, v11) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          154LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyCache.h",
          v12);
        __debugbreak();
      }
      v9 = 0;
    }
    else
    {
      v9 = -2147024883;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyCache.h",
        (const char *)0x8007000DLL);
    }
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v9;
}
