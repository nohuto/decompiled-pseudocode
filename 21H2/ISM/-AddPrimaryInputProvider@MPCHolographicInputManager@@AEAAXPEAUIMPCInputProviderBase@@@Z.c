/*
 * XREFs of ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001FAE4
 * Callers:
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18001FA2C (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180078BAC (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x180078D30 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001FC70 (--$_Emplace_reallocate@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIM.c)
 *     ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z @ 0x18001FD88 (-MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x18001FDF4 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::AddPrimaryInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  _QWORD *v6; // rcx
  struct IMPCInputProviderBase *v7; // rbx
  __int64 *v8; // rdx
  int v9; // eax
  MPCManager *v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // r15
  __int64 *v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // r14d
  __int64 v16; // rbx
  unsigned int v17; // edi
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // cl
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCInputProviderBase *v27; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  v5 = (_QWORD *)((char *)this + 2576);
  v6 = (_QWORD *)*((_QWORD *)this + 322);
  if ( v6 != (_QWORD *)v5[1] && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 320LL))(*v6) == 1 )
    v4 = 2;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a2 + 312LL))(a2, v4);
  v7 = a2;
  v27 = a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v27);
  v8 = (__int64 *)v5[1];
  if ( (__int64 *)v5[2] == v8 )
  {
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
      v5,
      v8,
      &v27);
    v7 = v27;
  }
  else
  {
    *v8 = 0LL;
    if ( v8 != (__int64 *)&v27 )
    {
      *v8 = (__int64)a2;
      v7 = 0LL;
    }
    v5[1] += 8LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
  MPCHolographicInputManager::UpdateDoubleClickValues(this);
  v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( v9 != 0x20000 && *((_QWORD *)this + 293) )
    *((_DWORD *)this + 590) = v9;
  v10 = MPCManager::s_instance;
  v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v12 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 96LL))(a2);
  v13 = (__int64 *)*((_QWORD *)v10 + 9);
  v14 = *v13;
  v27 = (struct IMPCInputProviderBase *)*v13;
  while ( (__int64 *)v14 != v13 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v14 + 40) + 32LL))(
            *(_QWORD *)(v14 + 40),
            v12,
            v11);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x123,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v21,
        v25);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(
      &v27,
      v22,
      v23,
      v24);
    v14 = (__int64)v27;
  }
  v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v16 = (__int64)(v5[1] - *v5) >> 3;
  v17 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
  if ( ISMTracing::IsEnabled(v19, v18) )
  {
    wil::details::static_lazy<ISMTracing>::get(v20, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(
      (ISMTracing *)*((unsigned int *)this + 590),
      v17,
      v16 - 1,
      v15,
      *((_DWORD *)this + 590));
  }
}
