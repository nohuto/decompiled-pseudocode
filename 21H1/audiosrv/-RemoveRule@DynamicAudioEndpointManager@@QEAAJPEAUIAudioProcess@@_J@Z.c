/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180113A4C
 * Callers:
 *     wil::details::lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___::_lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___ @ 0x18010F390 (wil--details--lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___--_lambda_call__lambda_7d91.c)
 *     wil::details::lambda_call__lambda_b9260135b4d0238a1736853426776464___::_lambda_call__lambda_b9260135b4d0238a1736853426776464___ @ 0x18010F3D8 (wil--details--lambda_call__lambda_b9260135b4d0238a1736853426776464___--_lambda_call__lambda_b926.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18010F5B0 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18010F854 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x180110430 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x180113BE4 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_J@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_J@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180111954 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_J@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x1801137AC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEB_J@Z @ 0x180114758 (-erase@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@st_ea_180114758.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct IUnknown *v10; // rbx
  unsigned int v11; // ebx
  int v12; // eax
  struct IUnknown *v14; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v15[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int16 v18; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v20; // [rsp+B0h] [rbp+40h] BYREF

  v20 = a3;
  v14 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v15[1] = &v5->DebugInfo;
  v7 = (__int64 *)*((_QWORD *)this + 121);
  v8 = v7[1];
  if ( *(_BYTE *)(v8 + 25) )
    goto LABEL_9;
  v9 = v20;
  do
  {
    if ( *(_QWORD *)(v8 + 32) >= v20 )
    {
      v7 = (__int64 *)v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  while ( !*(_BYTE *)(v8 + 25) );
  if ( v7 == *((__int64 **)this + 121) || v20 < v7[4] )
  {
LABEL_9:
    v15[0] = &v20;
    v7 = (__int64 *)*std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<__int64 const &>,std::tuple<>>(
                       (__int64 *)this + 121,
                       &v16,
                       v7,
                       v6,
                       v15);
  }
  v10 = (struct IUnknown *)v7[5];
  v14 = v10;
  if ( v10 )
  {
    ((void (__fastcall *)(struct IUnknown *, __int64))v10->lpVtbl->AddRef)(v10, v9);
    if ( v5 )
      LeaveCriticalSection(v5);
    v12 = DynamicAudioEndpointManager::RemoveRule(this, a2, v10, 1, (bool (*const)[9])&v17);
    v11 = v12;
    if ( v12 >= 0 )
    {
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::erase(
        (char *)this + 968,
        &v20);
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x242,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
        (const char *)(unsigned int)v12);
    }
  }
  else
  {
    if ( v5 )
      LeaveCriticalSection(v5);
    v11 = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  return v11;
}
