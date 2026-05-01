/*
 * XREFs of _lambda_aac2d0092d420201fb1007c618052d9b_::operator() @ 0x1802C88B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___::Run @ 0x1802C9190 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___--Run.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005EEA8 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18005F2A0 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005F324 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006A608 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x18014545C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x1802C91D0 (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_aac2d0092d420201fb1007c618052d9b_::operator()(_DWORD *a1)
{
  _DWORD *v1; // rsi
  BOOL v2; // ebx
  __int64 *v3; // rdi
  __int64 *i; // rbx
  const char *v5; // r9
  void *v6; // rbx
  LPVOID v7; // rbx
  int (__fastcall *v8)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  int (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-198h] BYREF
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-190h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-188h] BYREF
  __int64 v15; // [rsp+48h] [rbp-180h] BYREF
  __int128 v16; // [rsp+50h] [rbp-178h] BYREF
  __int64 v17; // [rsp+60h] [rbp-168h]
  _DWORD *v18; // [rsp+68h] [rbp-160h]
  _QWORD v19[40]; // [rsp+70h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v1 = a1;
  v18 = a1;
  *(_BYTE *)(*(_QWORD *)a1 + 40LL) = a1[6] == 1;
  v2 = *(_BYTE *)(*(_QWORD *)a1 + 40LL) != 0;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"PdcNotificationCallback");
  v19[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(
    (ViewManagerInteropTraceLogging::PdcNotificationCallback *)v19,
    v2);
  try
  {
    v16 = 0LL;
    v17 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*(_QWORD *)v1 + 24LL) + 48LL))(
      *(_QWORD *)(*(_QWORD *)v1 + 24LL),
      &v16);
    v3 = (__int64 *)*((_QWORD *)&v16 + 1);
    for ( i = (__int64 *)v16; i != v3; ++i )
    {
      v15 = *i;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 24LL) + 56LL))(
        *(_QWORD *)(*(_QWORD *)v1 + 24LL),
        v15,
        *(_BYTE *)(*(_QWORD *)v1 + 40LL) != 0 ? 2 : 0);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19, 0);
    v6 = (void *)v16;
    if ( (_QWORD)v16 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
        (__int64 *)v16,
        *((__int64 **)&v16 + 1));
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)((v17 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x76,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v5);
    v1 = v18;
  }
  ppv = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( CoCreateInstance(
         &CLSID_ShellServiceHostBrokerProvider,
         0LL,
         4u,
         &GUID_0f4accb1_d8f9_4011_ba37_2557925a78cf,
         &ppv) >= 0 )
  {
    v7 = ppv;
    v8 = *(int (__fastcall **)(LPVOID, GUID *, GUID *, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v8(
           v7,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           &GUID_1f79f7de_20bf_4591_930a_d490b78fb09f,
           (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v13) >= 0 )
    {
      v9 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
      v10 = **v13;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( v10(v9, &GUID_23030752_8e7c_4225_8c88_28211f93ddf7, &v12) >= 0 )
      {
        v11 = *(_QWORD *)v1;
        LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)v1 + 40LL) == 0;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, v11);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v19[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
}
