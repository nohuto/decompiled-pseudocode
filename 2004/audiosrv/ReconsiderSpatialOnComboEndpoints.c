/*
 * XREFs of ReconsiderSpatialOnComboEndpoints @ 0x180122618
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001DE50 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_fcebe2be73a82d8a8afeae0de22aba14__void_::_Do_call @ 0x180122910 (std--_Func_impl_no_alloc__lambda_fcebe2be73a82d8a8afeae0de22aba14__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     DisableSpatialOnInternalSpeakers @ 0x18012224C (DisableSpatialOnInternalSpeakers.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x18012236C (EnableSpatialOnSpeakerEndpoint.c)
 *     SearchForHeadphones @ 0x180122818 (SearchForHeadphones.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ReconsiderSpatialOnComboEndpoints(int a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  ppv = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, 0LL, 15LL, &v11);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A5,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v6);
LABEL_19:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
      goto LABEL_20;
    }
    if ( a1 == 3 )
    {
      DisableSpatialOnInternalSpeakers(v11);
LABEL_18:
      v5 = 0;
      goto LABEL_19;
    }
    v16 = 0LL;
    v5 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a2,
           1LL);
    if ( v5 < 0 )
    {
LABEL_16:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      goto LABEL_19;
    }
    v7 = *(_QWORD *)(v16 + 16);
    v13[0] = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = SearchForHeadphones(v11, &v15);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 440LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v13);
      goto LABEL_16;
    }
    if ( v15 )
    {
      v8 = EnableSpatialOnSpeakerEndpoint(v7, L"HP", 0);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 444LL;
        goto LABEL_15;
      }
    }
    else
    {
      v8 = EnableSpatialOnSpeakerEndpoint(v7, L"No-HP", 1u);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = 449LL;
        goto LABEL_15;
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A2,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)v4);
LABEL_20:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v5;
}
