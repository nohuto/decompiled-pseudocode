/*
 * XREFs of _lambda_db18f22ab46b33b274128dc9e227aeaf_::operator() @ 0x18006FD6C
 * Callers:
 *     wil::details::lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___::_lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___ @ 0x18006F988 (wil--details--lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___--_lambda_call__lambda_cf3f.c)
 * Callees:
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18000FF90 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_390f66de9da3e24cab3ad3e60ecadd9e___ @ 0x18006F2B8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006F2B8.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800CD898 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E33C4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@_KP6AX_K@Z$1-ReleaseAudioResourceHandle@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_db18f22ab46b33b274128dc9e227aeaf_::operator()(int **a1)
{
  int *v2; // r15
  __int64 v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ebx
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+58h] [rbp-18h]
  __int128 v14; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v16; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+50h] BYREF

  v16 = 0LL;
  v12 = 0LL;
  v2 = *a1;
  v13 = **a1;
  v3 = *(_QWORD *)a1[4];
  v14 = *(_OWORD *)(v3 + 48);
  v4 = (__int64 *)*((_QWORD *)a1[1] + 6);
  v5 = *(_QWORD *)a1[2];
  v6 = *v4;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1[3] + 56LL))(*(_QWORD *)a1[3]);
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int128 *, _DWORD, int, __int64 *))(v6 + 56))(
         v4,
         v5,
         v7,
         &v14,
         *(_DWORD *)(v3 + 8),
         *v2,
         &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, __int64, _DWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            *(_QWORD *)a1[3],
            *(_QWORD *)a1[4],
            2LL,
            0,
            &v12,
            0LL,
            0LL,
            &v16);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
        (unsigned int)v10);
    }
    if ( v10 >= 0 )
    {
      ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(&v17, &v16);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_390f66de9da3e24cab3ad3e60ecadd9e___(
        (__int64)&v18,
        *(_QWORD **)a1[5],
        *((_QWORD **)a1[5] + 1),
        &v17);
      ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v18);
    }
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA78,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>(&v12);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v16);
  return v9;
}
