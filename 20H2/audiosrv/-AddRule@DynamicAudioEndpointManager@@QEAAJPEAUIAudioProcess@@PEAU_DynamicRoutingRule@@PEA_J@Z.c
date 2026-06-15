/*
 * XREFs of ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011119C
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18010EC84 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18010F860 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801117AC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800BC468 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18011062C (--$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_Dynam.c)
 *     ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x1801106FC (--$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x1801107D4 (--$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutin.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_J@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_J@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180110D84 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_J@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 *     _lambda_10d3e4122713d6ae4023577fc677e3ae_::operator() @ 0x180110F4C (_lambda_10d3e4122713d6ae4023577fc677e3ae_--operator().c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x180111870 (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x180111B8C (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180112834 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x180112BDC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180113978 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DynamicAudioEndpointManager::AddRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3,
        __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r9d
  char v9; // si
  int v10; // edx
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int Rule; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // r12d
  struct IUnknown *v22; // rdx
  __int64 v23; // rdx
  int refreshed; // eax
  __int64 v25; // r9
  __int64 v26; // rdx
  struct IUnknown *v28; // rsi
  __int64 *v29; // rdi
  __int64 **v30; // r9
  __int64 *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  struct IUnknown *v34; // rax
  int v35; // eax
  int v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v37; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39[2]; // [rsp+48h] [rbp-B8h] BYREF
  int *v40; // [rsp+50h] [rbp-B0h] BYREF
  struct IAudioProcess **v41; // [rsp+58h] [rbp-A8h]
  struct IUnknown **v42; // [rsp+60h] [rbp-A0h]
  __int128 *v43; // [rsp+68h] [rbp-98h]
  char v44; // [rsp+70h] [rbp-90h]
  int v45[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int128 v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+A0h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v49; // [rsp+A8h] [rbp-58h]
  __int64 v50; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v51[288]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v52; // [rsp+1E0h] [rbp+E0h] BYREF
  __int16 v53; // [rsp+1F0h] [rbp+F0h]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v37 = a2;
  *(_QWORD *)v39 = a3;
  v52 = 0LL;
  v53 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v49 = v7;
  *(_QWORD *)v36 = 0LL;
  v38 = 0LL;
  v9 = 1;
  if ( *(_DWORD *)a3 > 8u && *(_DWORD *)a3 != 0x7FFF || (v10 = *((_DWORD *)a3 + 1), v10 > 2) )
  {
    v11 = -2147024809;
    goto LABEL_46;
  }
  switch ( *((_DWORD *)a3 + 2) )
  {
    case 1:
      *(_QWORD *)v36 = 0LL;
      v11 = Microsoft::WRL::Details::MakeAndInitialize<AvoidEndpointPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v36,
              &v37,
              (struct _DynamicRoutingRule **)v39);
      if ( v11 < 0 )
        goto LABEL_46;
      break;
    case 2:
      *(_QWORD *)v36 = 0LL;
      v20 = Microsoft::WRL::Details::MakeAndInitialize<RemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v36,
              &v37,
              v39);
      v11 = v20;
      if ( v20 < 0 )
      {
        v13 = 376LL;
LABEL_39:
        v12 = (unsigned int)v20;
        goto LABEL_40;
      }
      break;
    case 3:
      *(_OWORD *)v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 10;
      Rule = DynamicAudioEndpointManager::FindRule((_DWORD)this, v10, *(_DWORD *)a3, v8, (unsigned int)v45);
      v11 = Rule;
      if ( Rule < 0 )
      {
        v15 = 384LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)Rule);
        goto LABEL_29;
      }
      if ( v46 )
      {
        v9 = 0;
        if ( !*(_QWORD *)v45 )
          ATL::AtlThrowImpl(-2147467259);
        v16 = *(_QWORD *)(*(_QWORD *)v45 + 16LL);
        *(_QWORD *)v36 = v16;
        if ( v16 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          v16 = *(_QWORD *)v36;
        }
        Rule = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, _BYTE *))(*(_QWORD *)v16 + 88LL))(
                 v16,
                 v37,
                 v51);
        v11 = Rule;
        if ( Rule < 0 )
        {
          v15 = 397LL;
          goto LABEL_28;
        }
        Rule = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *))(**(_QWORD **)v36 + 72LL))(
                 *(_QWORD *)v36,
                 v37);
        v11 = Rule;
        if ( Rule < 0 )
        {
          v15 = 400LL;
          goto LABEL_28;
        }
        v40 = v36;
        v41 = &v37;
        v42 = (struct IUnknown **)v51;
        LOBYTE(v43) = 1;
        v17 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v36 + 96LL))(
                *(_QWORD *)v36,
                v37,
                a3);
        v11 = v17;
        if ( v17 < 0 )
        {
          v18 = (unsigned int)v17;
          v19 = 412LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
            (const char *)v18);
          LOBYTE(v43) = 0;
          lambda_10d3e4122713d6ae4023577fc677e3ae_::operator()((_QWORD **)&v40);
LABEL_29:
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v45);
          goto LABEL_46;
        }
        if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])&v52) )
        {
          v11 = -2147467259;
          v18 = 2147500037LL;
          v19 = 417LL;
          goto LABEL_24;
        }
      }
      else
      {
        *(_QWORD *)v36 = 0LL;
        Rule = Microsoft::WRL::Details::MakeAndInitialize<CommunicationsRemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
                 v36,
                 &v37,
                 (struct _DynamicRoutingRule **)v39);
        v11 = Rule;
        if ( Rule < 0 )
        {
          v15 = 423LL;
          goto LABEL_28;
        }
      }
      ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v45);
      break;
    default:
      v11 = -2147467263;
      v12 = 2147500033LL;
      v13 = 428LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
        (const char *)v12);
      goto LABEL_46;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v36 + 64LL))(*(_QWORD *)v36);
  v22 = v38;
  v38 = 0LL;
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  v20 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))v36)(
          *(_QWORD *)v36,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v38);
  v11 = v20;
  if ( v20 < 0 )
  {
    v13 = 435LL;
    goto LABEL_39;
  }
  v20 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)v37 + 392LL))(
          v37,
          this,
          v38);
  v11 = v20;
  if ( v20 < 0 )
  {
    v13 = 439LL;
    goto LABEL_39;
  }
  v40 = (int *)this;
  v41 = &v37;
  v42 = &v38;
  v43 = &v52;
  v44 = 1;
  LOBYTE(v23) = v9;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                this,
                v23,
                *(unsigned int *)a3,
                *((unsigned int *)a3 + 1),
                *(_QWORD *)v36,
                &v52);
  v11 = refreshed;
  if ( refreshed < 0 )
  {
    v25 = (unsigned int)refreshed;
    v26 = 455LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v25);
    DynamicAudioEndpointManager::RemoveRule(this, v37, v38, 1, (bool (*const)[9])&v52);
LABEL_46:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v36);
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)v11;
  }
  if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])&v52) )
  {
    v11 = -2147467259;
    v25 = 2147500037LL;
    v26 = 459LL;
    goto LABEL_45;
  }
  v44 = 0;
  v28 = v38;
  v29 = (__int64 *)((char *)this + 984);
  v30 = (__int64 **)((char *)this + 968);
  v31 = (__int64 *)*((_QWORD *)this + 121);
  v32 = v31[1];
  if ( *(_BYTE *)(v32 + 25) )
    goto LABEL_57;
  v33 = *v29;
  do
  {
    if ( *(_QWORD *)(v32 + 32) >= v33 )
    {
      v31 = (__int64 *)v32;
      v32 = *(_QWORD *)v32;
    }
    else
    {
      v32 = *(_QWORD *)(v32 + 16);
    }
  }
  while ( !*(_BYTE *)(v32 + 25) );
  if ( v31 == *v30 || v33 < v31[4] )
  {
LABEL_57:
    *(_QWORD *)v39 = (char *)this + 984;
    v31 = (__int64 *)*std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<__int64 const &>,std::tuple<>>(
                        (__int64 *)this + 121,
                        &v50,
                        v31,
                        (__int64)v30,
                        (_QWORD **)v39);
  }
  v34 = (struct IUnknown *)v31[5];
  if ( v34 != v28 )
  {
    if ( v28 )
    {
      ((void (__fastcall *)(struct IUnknown *))v28->lpVtbl->AddRef)(v28);
      v34 = (struct IUnknown *)v31[5];
    }
    *(_QWORD *)v39 = v34;
    v31[5] = (__int64)v28;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v39);
  }
  *a4 = (*v29)++;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v36);
  if ( v7 )
    LeaveCriticalSection(v7);
  v35 = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])&v52, v21);
  v11 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v35);
    return (unsigned int)v11;
  }
  return 0LL;
}
