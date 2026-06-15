/*
 * XREFs of ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x180115710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x18000E620 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall CommunicationsRemapPolicyRule::OnRuleOperation(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        struct IUnknown *a5)
{
  struct IUnknown *v5; // r14
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  LPVOID v11; // rbx
  struct IUnknown *v13; // rcx
  unsigned int v14; // edx
  struct IUnknown *v15; // rcx
  void *v16; // rcx
  unsigned __int16 *v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v26; // [rsp+80h] [rbp+30h] BYREF

  v5 = a5;
  LODWORD(a5->lpVtbl) = 1;
  if ( !a3 && (*(_BYTE *)(a1 + 80) & 1) != 0 && a4 == 1 )
  {
    ppv[0] = 0LL;
    a5 = 0LL;
    v22 = 0LL;
    pv = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)ppv);
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 ppv);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 112LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\remappolicyrule.cpp",
        (const char *)(unsigned int)Instance);
      CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppv);
      return v9;
    }
    v11 = ppv[0];
    if ( a5 )
      ((void (__fastcall *)(struct IUnknown *))a5->lpVtbl->Release)(a5);
    Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, struct IUnknown **))(*(_QWORD *)v11 + 40LL))(v11, a2, &a5);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 115LL;
      goto LABEL_14;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v22);
    Instance = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a5->lpVtbl->QueryInterface)(
                 a5,
                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                 &v22);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 116LL;
      goto LABEL_14;
    }
    Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v26);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v10 = 117LL;
      goto LABEL_14;
    }
    v13 = a5;
    a5 = 0LL;
    if ( v13 )
      ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v22);
    v14 = v26;
    if ( *(_DWORD *)(a1 + 68) != 2 && v26 != *(_DWORD *)(a1 + 68) )
      goto LABEL_28;
    v15 = a5;
    a5 = 0LL;
    if ( v15 )
    {
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v15->lpVtbl->Release)(v15, v26);
      v14 = v26;
    }
    if ( (int)CDefaultDeviceManager::GetDefaultEndpoint((__int64)v15, v14, *(_DWORD *)(a1 + 64), 0LL, &a5) >= 0
      && ((int (__fastcall *)(struct IUnknown *, LPVOID *))a5->lpVtbl[1].Release)(a5, &pv) >= 0 )
    {
      v16 = pv;
      v17 = (unsigned __int16 *)pv;
      v18 = a2 - (_QWORD)pv;
      do
      {
        v19 = *(unsigned __int16 *)((char *)v17 + v18);
        v20 = *v17 - v19;
        if ( v20 )
          break;
        ++v17;
      }
      while ( v19 );
      if ( !v20 )
      {
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 64);
        v21 = *(_DWORD *)(a1 + 68) - 2;
        *(_BYTE *)(a1 + 344) = 1;
        LODWORD(v5->lpVtbl) = 4 - (v21 != 0);
      }
    }
    else
    {
LABEL_28:
      v16 = pv;
    }
    CoTaskMemFree(v16);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a5);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppv);
  }
  return 0LL;
}
