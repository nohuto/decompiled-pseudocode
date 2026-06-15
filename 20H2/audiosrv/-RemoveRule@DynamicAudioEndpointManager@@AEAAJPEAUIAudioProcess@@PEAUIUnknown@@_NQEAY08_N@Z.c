/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x180112BDC
 * Callers:
 *     wil::details::lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___::_lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___ @ 0x180110E84 (wil--details--lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___--_lambda_call__lambda_0ae8.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011119C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x1801123F0 (-OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180112440 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180112E7C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E3488 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x1801119E8 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x180111AE0 (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180112834 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180112B00 (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a6.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180113978 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180113B24 (-erase@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3,
        char a4,
        bool (*const a5)[9])
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // eax
  int refreshed; // ebx
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r9
  int v14; // eax
  bool *v15; // r14
  bool *v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rax
  struct IUnknown *v22; // r15
  char v23; // bl
  DynamicAudioEndpointManager *v25; // rcx
  __int64 v26; // rdx
  _BYTE v27[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-1Ch]
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v32; // [rsp+90h] [rbp+40h] BYREF
  struct IUnknown *v33; // [rsp+A0h] [rbp+50h] BYREF
  char v34; // [rsp+A8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v30[1] = (__int64)v8;
  v29 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
         &v29);
  refreshed = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E1,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v9);
    v11 = 606LL;
LABEL_25:
    v13 = (unsigned int)refreshed;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)refreshed;
  }
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29);
  v12 = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, _BYTE *, char *))(*(_QWORD *)v29 + 80LL))(
          v29,
          a2,
          v27,
          &v32);
  refreshed = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v11 = 612LL;
    goto LABEL_26;
  }
  if ( v27[0] )
  {
    v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)a2 + 400LL))(
            a2,
            this,
            a3);
    refreshed = v14;
    if ( v14 < 0 )
    {
      v13 = (unsigned int)v14;
      v11 = 618LL;
      goto LABEL_26;
    }
  }
  v15 = (bool *)a5;
  v16 = (bool *)a5;
  v17 = (_QWORD *)((char *)this + 56);
  v30[0] = 2LL;
  do
  {
    v18 = 0LL;
    v19 = 9LL;
    do
    {
      v20 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
              v17,
              v29);
      if ( v20 )
      {
        v16[v18] = 1;
        if ( v32 )
          ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::RemoveAt(
            v17,
            v20);
      }
      v17 += 6;
      ++v18;
      --v19;
    }
    while ( v19 );
    v16 += 9;
    --v30[0];
  }
  while ( v30[0] );
  if ( v32 )
  {
    v21 = **((_QWORD **)this + 121);
    v22 = v33;
LABEL_17:
    v30[0] = v21;
    while ( v21 != *((_QWORD *)this + 121) )
    {
      if ( *(struct IUnknown **)(v21 + 40) == v22 )
      {
        std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::erase(
          (char *)this + 968,
          &v33,
          v21);
        v21 = (__int64)v33;
        goto LABEL_17;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>,std::_Iterator_base0>::operator++(v30);
      v21 = v30[0];
    }
  }
  v23 = v34;
  if ( v34 && !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])v15) )
  {
    refreshed = -2147467259;
    v11 = 670LL;
    goto LABEL_25;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v23 )
  {
    if ( v28 )
    {
      refreshed = DynamicAudioEndpointManager::ClearPerProcessRouting(v25, (bool (*const)[9])v15, v28);
      if ( refreshed < 0 )
      {
        v26 = 680LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)refreshed);
        return (unsigned int)refreshed;
      }
    }
    refreshed = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])v15, 0);
    if ( refreshed < 0 )
    {
      v26 = 683LL;
      goto LABEL_35;
    }
  }
  return 0LL;
}
