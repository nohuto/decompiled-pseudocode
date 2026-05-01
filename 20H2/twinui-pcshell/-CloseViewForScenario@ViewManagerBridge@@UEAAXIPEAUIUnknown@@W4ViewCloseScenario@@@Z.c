/*
 * XREFs of ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1802BCB40
 * Callers:
 *     _lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator() @ 0x1802A090C (_lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator().c)
 *     _lambda_da7ad41009fba3d1d8d39f3832cc85a2_::operator() @ 0x1802A1074 (_lambda_da7ad41009fba3d1d8d39f3832cc85a2_--operator().c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::catch$17 @ 0x1802A8F45 (_ViewEventDispatcher--ViewCreated_--_1_--catch$17.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A93BC (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$27 @ 0x1802AA036 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--catch$27.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIShellView@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellView@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18029D458 (--$As@UIShellView@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ??$CloseViewForScenario@AEAIAEAW4ViewCloseScenario@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW4ViewCloseScenario@@@Z @ 0x1802BAAC8 (--$CloseViewForScenario@AEAIAEAW4ViewCloseScenario@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAW.c)
 *     MapScenarioToErrorCodeForView @ 0x1802BEE14 (MapScenarioToErrorCodeForView.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802BF030 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewManagerBridge::CloseViewForScenario(
        __int64 a1,
        unsigned int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int i; // esi
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, _QWORD, _QWORD); // rbx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 result; // rax
  const char *v17; // r9
  int v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 (__fastcall ***v21[6])(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+20h] BYREF

  v25 = a4;
  v23 = a2;
  ViewManagerInteropTraceLogging::CloseViewForScenario<unsigned int &,enum ViewCloseScenario &>(
    (int *)&v23,
    (int *)&v25);
  try
  {
    v19 = 0LL;
    if ( a3 )
    {
      v14 = **a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v15 = v14(a3, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v19);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBD,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v15);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 120);
      if ( v8 )
      {
        v24 = 0;
        v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48LL))(v8, &v24);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAA,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v9);
        for ( i = 0; (int)i < v24; ++i )
        {
          v20 = 0LL;
          v21[0] = 0LL;
          v11 = *(_QWORD *)(a1 + 120);
          v12 = *(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 56LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
          if ( v12(v11, i, v21) >= 0
            && (int)Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IShellView>(v21, &v20) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 152LL))(v20, &v18) >= 0
            && v18 == a2 )
          {
            v13 = v19;
            v19 = v20;
            v20 = v13;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
            break;
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        }
      }
    }
    if ( !v19 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC0,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)0x80070490LL);
    if ( v19 )
      MapScenarioToErrorCodeForView(v19, a4);
    ViewManagerBridge::NavigateView(a1, a2, 0LL);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xC8,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
             v17);
  }
  return result;
}
