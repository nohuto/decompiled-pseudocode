/*
 * XREFs of ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x18007355C
 * Callers:
 *     ?SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18007C210 (-SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180071718 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$com_ptr_t@VBamoPeer@MPCManagerBa.c)
 *     ??0?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z @ 0x1800717B4 (--0-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBam.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCManager::OnPeerConnected(MPCManager *this, struct BamoMPCManagerClientProxy *a2)
{
  char *v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // r9
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  void (__fastcall ***v9)(_QWORD); // rax
  __int64 (__fastcall *v10)(char *, __int64, _QWORD); // rdi
  struct MPCHolographicInputManager *Instance; // rax
  unsigned int v12; // ebx
  struct MPCHolographicInputManager *v13; // rax
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v2 = (char *)a2 + 8;
  v3 = ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL);
  v4 = (__int64 *)((char *)this + 72);
  wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(
    &v17,
    *(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL));
  v6 = (__int64 *)*v4;
  v7 = *(_QWORD *)(*v4 + 8);
  if ( *(_BYTE *)(v7 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_QWORD *)(v7 + 32) >= v17 )
    {
      v6 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  while ( !*(_BYTE *)(v7 + 25) );
  if ( v6 == (__int64 *)*v4 || v17 < v6[4] )
  {
LABEL_8:
    v18 = &v17;
    v6 = (__int64 *)*std::_Tree<std::_Tmap_traits<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> &&>,std::tuple<>>(
                       v4,
                       &v19,
                       v6,
                       v5,
                       (__int64 **)&v18);
  }
  v8 = v6[5];
  v6[5] = v3;
  if ( v3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v17 )
  {
    v9 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 8LL))(v17);
    (**v9)(v9);
  }
  if ( *((_QWORD *)MPCHolographicInputManager::GetInstance() + 293) )
  {
    v10 = *(__int64 (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)v2 + 32LL);
    Instance = MPCHolographicInputManager::GetInstance();
    v12 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 322) + 112LL))(**((_QWORD **)Instance + 322));
    v13 = MPCHolographicInputManager::GetInstance();
    v14 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)v13 + 322) + 96LL))(**((_QWORD **)v13 + 322));
    v15 = v10(v2, v14, v12);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        106LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v15);
  }
}
