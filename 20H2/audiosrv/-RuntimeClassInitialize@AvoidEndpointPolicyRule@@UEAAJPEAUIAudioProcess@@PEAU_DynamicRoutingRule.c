/*
 * XREFs of ?RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x1801148C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIAudioProcess@@@Z @ 0x18011114C (-AddHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AvoidEndpointPolicyRule::RuntimeClassInitialize(
        AvoidEndpointPolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  struct _DynamicRoutingRule *v3; // rdi
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  HRESULT v10; // eax
  LPVOID v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  _OWORD *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  ppv = 0LL;
  v17 = 0LL;
  if ( *((_DWORD *)a3 + 2) != 1 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 20LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\avoidendpointpolicyrule.cpp",
      (const char *)v7);
    goto LABEL_16;
  }
  if ( *((_DWORD *)a3 + 1) > 1u )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 23LL;
    goto LABEL_9;
  }
  v9 = 2LL;
  if ( (*((_BYTE *)a3 + 16) & 2) != 0 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 24LL;
    goto LABEL_9;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&ppv);
  v10 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v6 = v10;
  if ( v10 < 0 )
  {
    v7 = (unsigned int)v10;
    v8 = 25LL;
    goto LABEL_9;
  }
  v11 = ppv;
  v12 = v17;
  v17 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, (__int64)v3 + 20, &v17);
  if ( v6 >= 0 )
  {
    ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_aa6a2d84_aa1a_48dc_8c91_a0d5206eac5a>>::AddHead(
      (__int64 *)this + 2,
      (__int64)a2,
      v13);
    v14 = (_OWORD *)((char *)this + 64);
    do
    {
      *v14 = *(_OWORD *)v3;
      v14[1] = *((_OWORD *)v3 + 1);
      v14[2] = *((_OWORD *)v3 + 2);
      v14[3] = *((_OWORD *)v3 + 3);
      v14[4] = *((_OWORD *)v3 + 4);
      v14[5] = *((_OWORD *)v3 + 5);
      v14[6] = *((_OWORD *)v3 + 6);
      v14 += 8;
      *(v14 - 1) = *((_OWORD *)v3 + 7);
      v3 = (struct _DynamicRoutingRule *)((char *)v3 + 128);
      --v9;
    }
    while ( v9 );
    *v14 = *(_OWORD *)v3;
    *((_DWORD *)v14 + 4) = *((_DWORD *)v3 + 4);
    v6 = 0;
  }
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v6;
}
