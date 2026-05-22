/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x18007316C
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180196040 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069138 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ @ 0x18007272C (-MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ.c)
 */

void __fastcall MPCManager::OnMouseSnappedToGaze(MPCManager *this)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCManager_OnMouseSnappedToGaze_(v3);
  }
  v4 = (__int64 *)*((_QWORD *)this + 9);
  v5 = *v4;
  v8 = *v4;
  while ( (__int64 *)v5 != v4 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 40) + 40LL))(*(_QWORD *)(v5 + 40));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        302LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v6);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v8);
    v5 = v8;
  }
}
