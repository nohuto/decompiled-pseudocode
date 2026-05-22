/*
 * XREFs of ?InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@234@@Z @ 0x180160188
 * Callers:
 *     ?OnSpatialGraphNodePoseValidityChanged@DynamicNodeSourceBase@Holographic@Internal@Windows@@EEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x1801617E0 (-OnSpatialGraphNodePoseValidityChanged@DynamicNodeSourceBase@Holographic@Internal@Windows@@EEAAJ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1801629B8 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CD87C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graph.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014FE04 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Inte.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18015184C (--$_Emplace_reallocate@AEBV-$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@In.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x180167D20 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidL.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::Holographic::DynamicNodeSourceBase::InvokeNodePropertiesUpdatedCallback(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 *v6; // rdi
  RTL_SRWLOCK *v7; // r14
  _QWORD *v8; // rsi
  _QWORD *v9; // r15
  __int64 *v10; // rbx
  __int64 *v11; // rsi
  __int64 *i; // r14
  int v13; // eax
  __int128 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v15; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  _QWORD *v18; // [rsp+A8h] [rbp+58h] BYREF

  if ( a3 )
  {
    v14 = 0LL;
    v6 = 0LL;
    v15 = 0LL;
    v7 = a1 + 3;
    AcquireSRWLockExclusive(a1 + 3);
    std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::find(
      &a1[4],
      &v18,
      a2);
    if ( v18 == a1[4].Ptr || (v8 = (_QWORD *)v18[6], v9 = (_QWORD *)v18[7], v8 == v9) )
    {
      v10 = (__int64 *)*((_QWORD *)&v14 + 1);
    }
    else
    {
      v10 = (__int64 *)*((_QWORD *)&v14 + 1);
      do
      {
        v18 = 0LL;
        if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>>>(
                    v8,
                    (__int64 *)&v18) >= 0
          && v18 )
        {
          if ( v6 == v10 )
          {
            std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback> const &>(
              (__int64 **)&v14,
              v10,
              (__int64 *)&v18);
            v6 = v15;
            v10 = (__int64 *)*((_QWORD *)&v14 + 1);
          }
          else
          {
            *v10 = (__int64)v18;
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v10++);
            *((_QWORD *)&v14 + 1) = v10;
          }
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
        ++v8;
      }
      while ( v8 != v9 );
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v11 = (__int64 *)v14;
    for ( i = (__int64 *)v14; i != v10; ++i )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, __int64, _QWORD))(*(_QWORD *)*i + 48LL))(*i, a1, a2, a3);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          313LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v13);
    }
    if ( v11 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
        v11,
        v10);
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(((char *)v6 - (char *)v11) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
}
