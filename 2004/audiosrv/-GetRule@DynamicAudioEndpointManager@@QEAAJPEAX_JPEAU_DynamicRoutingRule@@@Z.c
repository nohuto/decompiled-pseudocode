/*
 * XREFs of ?GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x180112AB4
 * Callers:
 *     PolicyConfigGetDynamicRoutingRule @ 0x1800DA030 (PolicyConfigGetDynamicRoutingRule.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_J@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_J@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180111A14 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_J@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DynamicAudioEndpointManager::GetRule(
        DynamicAudioEndpointManager *this,
        void *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  DynamicAudioEndpointManager *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  int v22[2]; // [rsp+40h] [rbp-20h] BYREF
  char *v23; // [rsp+48h] [rbp-18h]
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v26; // [rsp+80h] [rbp+20h] BYREF
  __int64 v27; // [rsp+90h] [rbp+30h] BYREF

  v27 = a3;
  v6 = g_DynamicAudioEndpointManager;
  v21 = 0LL;
  v26 = 0LL;
  v20 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v20);
  v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a2,
         &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BB,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_25;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
  v23 = (char *)v6 + 16;
  v10 = (__int64 *)*((_QWORD *)v6 + 121);
  v11 = v10[1];
  if ( *(_BYTE *)(v11 + 25) )
    goto LABEL_11;
  v12 = v27;
  do
  {
    if ( *(_QWORD *)(v11 + 32) >= v27 )
    {
      v10 = (__int64 *)v11;
      v11 = *(_QWORD *)v11;
    }
    else
    {
      v11 = *(_QWORD *)(v11 + 16);
    }
  }
  while ( !*(_BYTE *)(v11 + 25) );
  if ( v10 == *((__int64 **)v6 + 121) || v27 < v10[4] )
  {
LABEL_11:
    *(_QWORD *)v22 = &v27;
    v10 = (__int64 *)*std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<__int64 const &>,std::tuple<>>(
                        (__int64 *)v6 + 121,
                        &v24,
                        v10,
                        v9,
                        (_QWORD **)v22);
  }
  v13 = v10[5];
  v21 = v13;
  if ( !v13 )
  {
    v8 = -2147024809;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v12);
  v14 = v26;
  v26 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13)(
          v13,
          &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
          &v26);
  v8 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E1,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v15);
    v16 = v8;
    v17 = 712LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v16);
    goto LABEL_23;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, struct _DynamicRoutingRule *))(*(_QWORD *)v26 + 88LL))(
          v26,
          v20,
          a4);
  v8 = v18;
  if ( v18 < 0 )
  {
    v16 = (unsigned int)v18;
    v17 = 713LL;
    goto LABEL_21;
  }
  v8 = 0;
LABEL_23:
  if ( v6 != (DynamicAudioEndpointManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 16));
LABEL_25:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
  return v8;
}
