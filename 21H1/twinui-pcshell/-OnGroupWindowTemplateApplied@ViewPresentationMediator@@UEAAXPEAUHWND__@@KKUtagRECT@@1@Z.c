/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x1802C1050
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180142E30 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802C04A8 (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$ComPtr@UIWindowM.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V?$ComPtr@UIWindowManagementWindowGroupingEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802C0DF8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementWindowGroupingEvents@@V-$C.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180453A38 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewPresentationMediator::OnGroupWindowTemplateApplied(
        ViewPresentationMediator *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  struct tagRECT *v10; // rdi
  struct tagRECT *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h] BYREF
  int v15; // [rsp+50h] [rbp-39h]
  struct tagRECT v16; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v17; // [rsp+70h] [rbp-19h] BYREF
  __int64 v18; // [rsp+80h] [rbp-9h] BYREF
  __int64 v19[2]; // [rsp+88h] [rbp-1h] BYREF
  int v20; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v21[2]; // [rsp+A0h] [rbp+17h] BYREF
  struct IObjectArray *v22; // [rsp+E0h] [rbp+57h] BYREF

  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  if ( (int)CGITRegistrationList::GetCallbackArray((ViewPresentationMediator *)((char *)this + 120), &v22) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
      (__int64)&v14,
      (__int64)v22);
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::Iterator(
      (__int64)&v18,
      (__int64)&v14,
      0);
    details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::Iterator(
      (__int64)&v20,
      (__int64)&v14,
      v15);
    v10 = a6;
    v11 = a5;
    while ( (_DWORD)v18 != v20 || v19[1] != v21[1] )
    {
      v12 = v19[0];
      v13 = v19[0];
      if ( v19[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19[0] + 8LL))(v19[0]);
      v16 = *v10;
      v17 = *v11;
      (*(void (__fastcall **)(__int64, HWND, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *))(*(_QWORD *)v12 + 24LL))(
        v12,
        a2,
        a3,
        a4,
        &v17,
        &v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      LODWORD(v18) = v18 + 1;
      details::ObjectArrayAdapterImpl<IWindowManagementWindowGroupingEvents,Microsoft::WRL::ComPtr<IWindowManagementWindowGroupingEvents>>::Iterator::GetCurrentObject(&v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
}
