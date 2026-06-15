/*
 * XREFs of ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x1801132E8
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18010EC84 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x180113620 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_J@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_J@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180110D84 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_J@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x180111870 (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180112834 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180113978 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DynamicAudioEndpointManager::UpdateRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 **v7; // r9
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  int refreshed; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  int v18; // eax
  int v19[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+48h] [rbp-B8h]
  __int64 v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[288]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v27; // [rsp+1B0h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]
  __int64 v29; // [rsp+200h] [rbp+100h] BYREF

  v29 = a3;
  v20 = a2;
  v26 = 0LL;
  v27 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v22 = v6;
  *(_QWORD *)v19 = 0LL;
  v7 = (__int64 **)((char *)this + 968);
  v8 = (__int64 *)*((_QWORD *)this + 121);
  v9 = v8[1];
  if ( *(_BYTE *)(v9 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_QWORD *)(v9 + 32) >= v29 )
    {
      v8 = (__int64 *)v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  while ( !*(_BYTE *)(v9 + 25) );
  if ( v8 == *v7 || v29 < v8[4] )
  {
LABEL_8:
    *(_QWORD *)v21 = &v29;
    v8 = (__int64 *)*std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<__int64 const &>,std::tuple<>>(
                       (__int64 *)this + 121,
                       v23,
                       v8,
                       (__int64)v7,
                       (_QWORD **)v21);
  }
  v10 = v8[5];
  *(_QWORD *)v21 = v10;
  if ( !v10 )
  {
    v11 = -2147024809;
    goto LABEL_24;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)v19 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v10)(v10, &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3, v19);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 512LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_24;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v19 + 88LL))(
          *(_QWORD *)v19,
          v20,
          v25);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 514LL;
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v19 + 96LL))(
          *(_QWORD *)v19,
          v20,
          a4);
  v11 = v12;
  if ( v12 < 0 )
  {
    v13 = 516LL;
    goto LABEL_18;
  }
  v23[1] = (__int64)v19;
  v23[2] = (__int64)&v20;
  v23[3] = (__int64)v25;
  v24 = 1;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                (__int64)this,
                0LL,
                *(unsigned int *)a4,
                *((_DWORD *)a4 + 1),
                *(__int64 *)v19,
                (__int64)&v26);
  v11 = refreshed;
  if ( refreshed < 0 )
  {
    v15 = (unsigned int)refreshed;
    v16 = 522LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v15);
    (*(void (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v19 + 96LL))(
      *(_QWORD *)v19,
      v20,
      v25);
LABEL_24:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v21);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v11;
  }
  if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])&v26) )
  {
    v11 = -2147467259;
    v15 = 2147500037LL;
    v16 = 525LL;
    goto LABEL_23;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
  if ( v6 )
    LeaveCriticalSection(v6);
  v18 = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])&v26, 0);
  v11 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x212,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v18);
    return v11;
  }
  return 0LL;
}
