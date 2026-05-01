/*
 * XREFs of ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x1801456C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007C6DC (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180142A38 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x180143600 (--1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator() @ 0x180143DFC (_lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_--operator().c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180145AF0 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1801487C4 (-StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801493B0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?_CheckTabletMode@CAppViewManager@@AEAAJXZ @ 0x18014B8D4 (-_CheckTabletMode@CAppViewManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAppViewManager::DragEnterForView(
        CAppViewManager *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct tagPOINT a4)
{
  int v7; // ebx
  RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  RTL_SRWLOCK *v13; // rbx
  int v14; // eax
  struct IImmersiveApplicationInternal *v16; // [rsp+30h] [rbp-D0h] BYREF
  struct tagPOINT v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  char v20; // [rsp+58h] [rbp-A8h]
  _QWORD v21[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v17 = a4;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"DragEnterForView");
  v21[0] = &AppViewManagerTabTelemetry::DragEnterForView::`vftable';
  AppViewManagerTabTelemetry::DragEnterForView::StartActivity(
    (AppViewManagerTabTelemetry::DragEnterForView *)v21,
    a3,
    a2,
    &v17);
  v7 = CAppViewManager::_CheckTabletMode((CAppViewManager *)((char *)this - 56));
  if ( v7 >= 0 )
  {
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 16) + 24LL))(
           *((_QWORD *)this + 16),
           a2,
           &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41C,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
      if ( v8 )
        ReleaseSRWLockShared(v8);
LABEL_5:
      v7 = v10;
      goto LABEL_22;
    }
    if ( v8 )
      ReleaseSRWLockShared(v8);
    if ( !v18 )
    {
      v16 = 0LL;
      v19[0] = (_QWORD *)((char *)this - 56);
      v19[1] = &v16;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      v11 = CAppViewManager::EnsureApplication((CAppViewManager *)((char *)this - 56), a3, &v16);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x42E,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
LABEL_11:
        v20 = 0;
        lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()(v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        goto LABEL_22;
      }
      v17 = 0LL;
      v12 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v16,
              (__int64 *)&v17);
      v7 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x433,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        goto LABEL_11;
      }
      v13 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v14 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, GUID *, struct tagPOINT))(**((_QWORD **)this + 16)
                                                                                             + 32LL))(
              *((_QWORD *)this + 16),
              a2,
              &GUID_NULL,
              v17);
      v10 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x435,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v14);
        if ( v13 )
          ReleaseSRWLockExclusive(v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        v20 = 0;
        lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()(v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        goto LABEL_5;
      }
      if ( v13 )
        ReleaseSRWLockExclusive(v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
    v7 = 0;
  }
LABEL_22:
  AppViewManagerTabTelemetry::DragEnterForView::~DragEnterForView((AppViewManagerTabTelemetry::DragEnterForView *)v21);
  return (unsigned int)v7;
}
