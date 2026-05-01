/*
 * XREFs of ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18005E5A8
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18002E620 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18005CB74 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18005EB48 (--$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$_Insert@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005F36C (--$_Insert@AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 *     ?IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z @ 0x18005F574 (-IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18005F608 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dd5757d6d511917eda89b6b9685db73c___ @ 0x18005FBCC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_dd5757d6d511917eda89b6b9685db73c___.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x18005FCDC (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x18005FD64 (-GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@She.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093890 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1802B772C (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 *     ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802BA34C (-WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEA.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall WindowEventDispatcher::QueuePendingActivation(
        RTL_SRWLOCK *this,
        struct IWindowWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  void *v4; // r13
  _QWORD *v8; // rax
  const char *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 *v12; // r8
  int ActivationId; // eax
  const unsigned __int16 *v14; // rax
  int v15; // eax
  __int64 *Ptr; // rcx
  __int64 v17; // rax
  const struct _GUID *v18; // r8
  HWND v19; // r15
  LPVOID v20; // rcx
  __int64 v21; // rdi
  LPVOID v22; // rcx
  __int64 v23; // rbx
  int v24; // edx
  int v25; // ecx
  int v26; // r9d
  __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  unsigned __int8 v29; // cl
  ViewManagerInteropTabTraceLogging *v30; // rcx
  int ppv; // [rsp+20h] [rbp-49h]
  LPVOID *ppva; // [rsp+20h] [rbp-49h]
  DWORD dwProcessId; // [rsp+30h] [rbp-39h] BYREF
  LPVOID v34; // [rsp+38h] [rbp-31h] BYREF
  __int64 v35; // [rsp+40h] [rbp-29h] BYREF
  __int64 v36; // [rsp+48h] [rbp-21h] BYREF
  __int64 v37; // [rsp+50h] [rbp-19h] BYREF
  union _RTL_RUN_ONCE *v38; // [rsp+58h] [rbp-11h] BYREF
  __int64 v39[2]; // [rsp+60h] [rbp-9h] BYREF
  LPVOID Context[2]; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  LOBYTE(v4) = a4;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v8;
  if ( v8 )
  {
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *v8 = &CRefCountedObject<WindowEventDispatcher::PendingActivationData>::`vftable';
    *((_DWORD *)v8 + 10) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v37 = v10;
  if ( !v10 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x8F4,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v9);
    __debugbreak();
  }
  v11 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 32) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v36 = *(_QWORD *)(v10 + 32);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v36);
  ActivationId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
                   (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v36,
                   (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v10 + 8),
                   v12);
  if ( ActivationId < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8FB,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)ActivationId,
      ppv);
    __debugbreak();
  }
  v14 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 272LL))(a2);
  if ( v14 )
    v15 = Windows::Internal::String::_InitializeHelper((HSTRING *)(v10 + 16), v14);
  else
    v15 = -2147467261;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8FD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      ppv);
    goto LABEL_40;
  }
  v35 = 0LL;
  Ptr = (__int64 *)this[42].Ptr;
  v17 = *Ptr;
  v35 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v17 + 48))(Ptr, &v35) >= 0 )
  {
    *(GUID *)Context = GUID_NULL;
    if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v35 + 32LL))(v35, Context) >= 0 )
      Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
        (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v36,
        (struct Windows::Internal::ShellHelpers::PropertySetHelper *)Context,
        v18);
  }
  if ( (_BYTE)v4 )
  {
    AcquireSRWLockShared(this + 59);
    Context[0] = &this[59];
    v19 = (HWND)(*(int (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
    v4 = 0LL;
    if ( this != (RTL_SRWLOCK *)-472LL )
      ReleaseSRWLockShared(this + 59);
    v34 = 0LL;
    dwProcessId = 0;
    if ( !GetWindowThreadProcessId(v19, &dwProcessId) )
      goto LABEL_29;
    v20 = v34;
    v34 = 0LL;
    if ( !v20 )
    {
LABEL_22:
      if ( CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v34) >= 0
        && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v34 + 24LL))(v34, dwProcessId, 0x100000LL) >= 0 )
      {
        v21 = *(_QWORD *)(v10 + 24);
        v22 = v34;
        *(_QWORD *)(v10 + 24) = v34;
        if ( v22 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 8LL))(v22);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v23 = *(_QWORD *)(v10 + 8);
        wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          Context,
          (__int64)this);
        v38 = (union _RTL_RUN_ONCE *)this;
        wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          v39,
          (__int64)Context[0]);
        v39[1] = v23;
        Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dd5757d6d511917eda89b6b9685db73c___(
          v25,
          v24,
          HIDWORD(this[62].Ptr),
          v26,
          (__int64)ppva,
          (__int64)&v38);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v39);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)Context);
      }
LABEL_29:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
      goto LABEL_30;
    }
LABEL_40:
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 16LL))(v20);
    goto LABEL_22;
  }
  v4 = 0LL;
LABEL_30:
  AcquireSRWLockExclusive(this + 59);
  v34 = &this[59];
  std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Insert<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
    &this[63],
    this[63].Ptr,
    &v37);
  v27 = v37;
  Context[0] = (LPVOID)WindowsGetStringRawBuffer(*(HSTRING *)(v37 + 16), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *>(v27 + 8, Context);
  if ( ViewManagerInteropTabTraceLogging::IsEnabled(v29, v28) )
  {
    Context[0] = v4;
    if ( InitOnceBeginInitialize(
           &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper,
           0,
           (PBOOL)&dwProcessId,
           Context)
      && dwProcessId != (_DWORD)v4 )
    {
      v38 = &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper;
      Context[0] = &qword_1805CD558;
      qword_1805CD558 = (__int64)&IamTraceLogging::`vftable';
      atexit(_lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_);
      LODWORD(v39[0]) = (_DWORD)v4;
      wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer(&v38);
    }
    ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded_(v30, a3);
  }
  while ( this[64].Ptr > (PVOID)0x80 )
    WindowEventDispatcher::QueuePendingActivationForDestruction(
      (WindowEventDispatcher *)this,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this[63].Ptr + 16LL) + 8LL));
  if ( this != (RTL_SRWLOCK *)-472LL )
    ReleaseSRWLockExclusive(this + 59);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
}
