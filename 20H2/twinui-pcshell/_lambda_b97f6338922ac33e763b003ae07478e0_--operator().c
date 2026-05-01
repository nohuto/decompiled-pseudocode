/*
 * XREFs of _lambda_b97f6338922ac33e763b003ae07478e0_::operator() @ 0x1803F1A50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___::Run @ 0x1803F2240 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b97f6338922ac33e763b003ae07478e0___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V?$ComPtr@UITabletModePositionerManagerNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803F1D08 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_b97f6338922ac33e763b003ae07478e0_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+28h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v13; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v15; // [rsp+70h] [rbp+10h] BYREF

  v6 = *a1;
  v2 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3);
  v8 = 0;
  v9 = 0LL;
  v10 = &v6;
  details::ObjectArrayAdapterImpl<ITabletModePositionerManagerNotification,Microsoft::WRL::ComPtr<ITabletModePositionerManagerNotification>>::Iterator::GetCurrentObject(&v8);
  v11 = v7;
  v12 = 0LL;
  v13 = &v6;
  details::ObjectArrayAdapterImpl<ITabletModePositionerManagerNotification,Microsoft::WRL::ComPtr<ITabletModePositionerManagerNotification>>::Iterator::GetCurrentObject(&v11);
  while ( v8 != v11 || v10 != v13 )
  {
    v4 = v9;
    v15 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1[2], a1[1]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    ++v8;
    details::ObjectArrayAdapterImpl<ITabletModePositionerManagerNotification,Microsoft::WRL::ComPtr<ITabletModePositionerManagerNotification>>::Iterator::GetCurrentObject(&v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
