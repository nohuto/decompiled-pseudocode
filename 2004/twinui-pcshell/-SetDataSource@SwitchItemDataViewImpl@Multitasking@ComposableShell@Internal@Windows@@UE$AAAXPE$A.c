/*
 * XREFs of ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x1803067F0
 * Callers:
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802FDEC0 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x1800734C4 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x1802EDED8 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x1802EEEFC (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x1802EF1D4 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ??$end@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@YA?AV?$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@0Platform@@PE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@012@@Z @ 0x1802F9E58 (--$end@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802FF110 (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     ?ConnectToDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x1803000DC (-ConnectToDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AA.c)
 *     ?DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x1803012E4 (-DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@.c)
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180306200 (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource(
        __int64 a1,
        __int64 a2)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rsi
  int i; // ebx
  __int64 Instance; // r12
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 j; // rax
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v24[3]; // [rsp+48h] [rbp-28h] BYREF
  char v25; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  struct IUnknown *v27; // [rsp+B8h] [rbp+48h] BYREF
  RTL_SRWLOCK *v28; // [rsp+C0h] [rbp+50h]
  __int64 v29; // [rsp+C8h] [rbp+58h]

  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v27,
    a2);
  if ( a2 && !IsAgile(v27) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      77LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\switchitemdataview.h",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v5 = (RTL_SRWLOCK *)(a1 + 56);
  v28 = (RTL_SRWLOCK *)(a1 + 56);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 56));
  v29 = a1 + 56;
  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
  {
    v7 = __abi_winrt_ptr_ctor(v6);
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DisconnectFromDataSource(a1);
    v8 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v7);
    v9 = __abi_winrt_ptr_ctor(v8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    for ( i = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v9); i >= 0; --i )
    {
      Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                   v9,
                   (unsigned int)i);
      v12 = __abi_winrt_ptr_ctor(Instance);
      if ( Instance )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem((__int64 **)a1, v12);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v5 = (RTL_SRWLOCK *)(a1 + 56);
  }
  if ( a2 )
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::ConnectToDataSource(a1, a2);
    v13 = __abi_winrt_ptr_ctor(a1);
    v14 = __abi_winrt_ptr_ctor(v13);
    v24[2] = v14;
    v25 = 1;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v15 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a2);
    v16 = __abi_winrt_ptr_ctor(v15);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = __abi_winrt_ptr_ctor(v16);
    v18 = 0LL;
    Windows::Foundation::Collections::end<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
      v24,
      v16);
    for ( j = 0LL; j != v24[1]; j = v18 )
    {
      v20 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
              v17,
              (unsigned int)v18);
      v21 = __abi_winrt_ptr_ctor(v20);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v22 = __abi_winrt_ptr_ctor(v21);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::AddSwitchItem((__int64 **)a1, v22);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      ++v18;
    }
    if ( v24[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v5 = v28;
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
}
