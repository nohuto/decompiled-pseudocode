/*
 * XREFs of ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x18029C898
 * Callers:
 *     _lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator() @ 0x18027F5A4 (_lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator().c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x18029E200 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005E478 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180069EE8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIServerWindow@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIServerWindow@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802994B8 (--$As@UIServerWindow@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ??$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z @ 0x18029A924 (--$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z.c)
 *     ??1GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18029AF10 (--1GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x1802A10F8 (-StartActivity@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall ViewManagerBridge::GetShellWindowIdForView(
        ViewManagerBridge *this,
        struct IShellView *a2,
        enum Navigation::WindowType *a3,
        unsigned int *a4)
{
  HRESULT (__stdcall *ContextSensitiveHelp)(IShellView *, BOOL); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD); // rdi
  int v14; // eax
  int v15; // eax
  __int64 v17; // rdx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23[3]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v24[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *a4 = 0;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"GetShellWindowIdForView");
  v24[0] = &ViewManagerInteropTraceLogging::GetShellWindowIdForView::`vftable';
  ViewManagerInteropTraceLogging::GetShellWindowIdForView::StartActivity(
    (ViewManagerInteropTraceLogging::GetShellWindowIdForView *)v24,
    a2);
  v21 = 0LL;
  ContextSensitiveHelp = a2->lpVtbl[1].ContextSensitiveHelp;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v8 = ((__int64 (__fastcall *)(struct IShellView *, __int64 *))ContextSensitiveHelp)(a2, &v21);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 856LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_16;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 48LL))(v21, &v20);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 859LL;
    goto LABEL_5;
  }
  v11 = 0;
  if ( v20 <= 0 )
  {
LABEL_15:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v24, 0);
    v9 = 0;
  }
  else
  {
    while ( 1 )
    {
      v18 = 0LL;
      v12 = v21;
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 56LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      v14 = v13(v12, v11, &v18);
      v9 = v14;
      if ( v14 < 0 )
        break;
      v19 = 0LL;
      v15 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IServerWindow>(&v18, &v19);
      v9 = v15;
      if ( v15 < 0 )
      {
        v17 = 867LL;
        goto LABEL_20;
      }
      v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 88LL))(v19, &v22);
      v9 = v15;
      if ( v15 < 0 )
      {
        v17 = 870LL;
        goto LABEL_20;
      }
      if ( !a3 || *(_DWORD *)a3 == v22 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, v23);
        v9 = v15;
        if ( v15 < 0 )
        {
          v17 = 877LL;
LABEL_20:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v15);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
          goto LABEL_22;
        }
        *a4 = v23[0];
        ViewManagerInteropTraceLogging::GetShellWindowIdForView::WindowId<unsigned int &>((__int64)v24, (int *)a4);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      if ( (int)++v11 >= v20 )
        goto LABEL_15;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x360,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v14);
LABEL_22:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  ViewManagerInteropTraceLogging::GetShellWindowIdForView::~GetShellWindowIdForView((ViewManagerInteropTraceLogging::GetShellWindowIdForView *)v24);
  return v9;
}
