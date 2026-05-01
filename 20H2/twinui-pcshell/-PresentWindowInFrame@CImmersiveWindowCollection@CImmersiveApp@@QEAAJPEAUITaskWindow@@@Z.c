/*
 * XREFs of ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800197B0
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180018354 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18017B5B4 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x18018320C (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18001986C (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18001AA30 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18001F138 (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180180190 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v7; // rdx
  int (__fastcall *v8)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(this);
  if ( v4 < 0 )
  {
    v7 = 7409LL;
    goto LABEL_11;
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 72LL))(a2);
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct ITaskWindow *))(**((_QWORD **)this + 19) + 32LL))(
           *((_QWORD *)this + 19),
           a2);
    if ( v4 >= 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(this);
      CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(this);
      v5 = *((_QWORD *)this + 20);
      if ( v5 && *(_DWORD *)(v5 + 912) )
      {
        v11 = 0LL;
        v8 = *(int (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        if ( v8(a2, &GUID_f4a53d68_890b_4931_bdbf_71158377eece, &v11) >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 656LL))(
            v11,
            *(unsigned int *)(*((_QWORD *)this + 20) + 912LL),
            *(unsigned int *)(*((_QWORD *)this + 20) + 916LL));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      }
      goto LABEL_6;
    }
    v7 = 7427LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4,
      v9);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
  if ( v4 < 0 )
  {
    v7 = 7450LL;
    goto LABEL_11;
  }
LABEL_6:
  if ( *((_QWORD *)this + 22) >= 2uLL || !a2 )
    CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
  return 0LL;
}
