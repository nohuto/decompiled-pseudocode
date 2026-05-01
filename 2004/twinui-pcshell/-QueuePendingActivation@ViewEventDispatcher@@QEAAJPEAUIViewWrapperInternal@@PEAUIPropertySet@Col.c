/*
 * XREFs of ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1802A4FDC
 * Callers:
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1802CE0E0 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18005EB48 (--$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x18005FCDC (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x18005FD64 (-GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@She.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A89D0 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___ @ 0x18029F21C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___.c)
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x1802A1AD8 (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::QueuePendingActivation(
        ViewEventDispatcher *this,
        struct IViewWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 *v11; // r8
  int ActivationId; // eax
  __int64 v13; // rdx
  __int64 v14; // rsi
  int (__fastcall *v15)(__int64, __int64 *); // rdi
  const struct _GUID *v16; // r8
  HWND v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 **v22; // rcx
  __int64 *i; // rdx
  int ppv; // [rsp+20h] [rbp-60h]
  LPVOID StringRawBuffer; // [rsp+30h] [rbp-50h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v30; // [rsp+50h] [rbp-30h]
  GUID v31; // [rsp+58h] [rbp-28h] BYREF
  __int64 v32; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v8 = (__int64 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v30 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB70,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_28;
  }
  *v9 = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v9 + 4, (__int64)a3);
  v29 = v9[4];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
  ActivationId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
                   (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v29,
                   (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v9 + 1),
                   v11);
  v10 = ActivationId;
  if ( ActivationId >= 0 )
  {
    ActivationId = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, __int64 *))(*(_QWORD *)a2 + 56LL))(
                     a2,
                     v9 + 2);
    v10 = ActivationId;
    if ( ActivationId >= 0 )
    {
      v28 = 0LL;
      v14 = *((_QWORD *)this + 61);
      v15 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      if ( v15(v14, &v28) >= 0 )
      {
        v31 = GUID_NULL;
        if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v28 + 32LL))(v28, &v31) >= 0 )
          Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
            (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v29,
            (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
            v16);
      }
      if ( a4 )
      {
        AcquireSRWLockShared((PSRWLOCK)this + 35);
        *(_QWORD *)&v31.Data1 = (char *)this + 280;
        v17 = (HWND)(*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 768LL))(a2);
        if ( this != (ViewEventDispatcher *)-280LL )
          ReleaseSRWLockShared((PSRWLOCK)this + 35);
        StringRawBuffer = 0LL;
        dwProcessId = 0;
        if ( GetWindowThreadProcessId(v17, &dwProcessId) )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
          if ( CoCreateInstance(
                 &CLSID_OSTaskCompletion,
                 0LL,
                 1u,
                 &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                 &StringRawBuffer) >= 0
            && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)StringRawBuffer + 24LL))(
                 StringRawBuffer,
                 dwProcessId,
                 0x100000LL) >= 0 )
          {
            Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(v9 + 3, (__int64 *)&StringRawBuffer);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
      }
      v18 = v9[1];
      StringRawBuffer = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&StringRawBuffer);
      *(_QWORD *)&v31.Data1 = this;
      *(_QWORD *)v31.Data4 = this;
      StringRawBuffer = 0LL;
      v32 = v18;
      Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___(
        v20,
        v19,
        *((_DWORD *)this + 68),
        v21,
        ppv,
        &v31);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31.Data4);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
      AcquireSRWLockExclusive((PSRWLOCK)this + 35);
      v22 = (__int64 **)((char *)this + 528);
      for ( i = (__int64 *)*((_QWORD *)this + 66); i; i = (__int64 *)*i )
        v22 = (__int64 **)i;
      *v22 = v9;
      StringRawBuffer = (LPVOID)WindowsGetStringRawBuffer((HSTRING)v9[2], 0LL);
      ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *>(
        v9 + 1,
        (__int64 *)&StringRawBuffer);
      v9 = 0LL;
      v30 = 0LL;
      if ( this != (ViewEventDispatcher *)-280LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 35);
      v10 = 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      goto LABEL_27;
    }
    v13 = 2940LL;
  }
  else
  {
    v13 = 2937LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)ActivationId);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
LABEL_28:
  if ( v9 )
    CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(v9);
  return v10;
}
