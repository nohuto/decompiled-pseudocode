/*
 * XREFs of ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1802B52C8
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18002E620 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180055304 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180058B94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180069098 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AC164 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801B7EDC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowEventDispatcher::EnsureDuplicateViewDestroyed(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 *v8; // r14
  __int64 *Ptr; // r15
  __int64 *v10; // rsi
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rdi
  int v15; // eax
  HSTRING v16; // r8
  __int64 v17; // rcx
  void *v18; // rbx
  __int64 *v19; // rdi
  __int64 *i; // r15
  HSTRING v21; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v22; // rax
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v27; // [rsp+48h] [rbp-28h] BYREF
  HSTRING *p_string; // [rsp+50h] [rbp-20h]
  __int128 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 *v30; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  HSTRING string; // [rsp+B8h] [rbp+48h] BYREF
  __int64 *v33; // [rsp+C0h] [rbp+50h]
  HSTRING v34; // [rsp+C8h] [rbp+58h] BYREF

  v33 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 632LL))(a2, &v26);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2871LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v34 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  v34 = 0LL;
  v7 = v6(a2, &v34);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2874LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v29 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  AcquireSRWLockShared(a1 + 59);
  p_string = (HSTRING *)&a1[59];
  Ptr = (__int64 *)a1[46].Ptr;
  v27 = (__int64 *)a1[47].Ptr;
  v10 = (__int64 *)*((_QWORD *)&v29 + 1);
  if ( Ptr != v27 )
  {
    while ( 1 )
    {
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        Ptr,
        (__int64)&v24);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 632LL))(v24, &v25);
      v12 = retaddr;
      if ( v11 < 0 )
        goto LABEL_26;
      string = 0LL;
      v13 = v24;
      v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 56LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v15 = v14(v13, &string);
      if ( v15 < 0 )
        break;
      if ( v26 == v25
        && !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            (Microsoft::WRL::Wrappers::Details *)v34,
                            string,
                            v16) )
      {
        if ( v8 == v10 )
        {
          std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
            (__int64 **)&v29,
            v10,
            Ptr);
          v8 = v30;
          v10 = (__int64 *)*((_QWORD *)&v29 + 1);
        }
        else
        {
          v17 = *Ptr;
          *v10 = *Ptr;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
          *((_QWORD *)&v29 + 1) = ++v10;
        }
      }
      WindowsDeleteString(string);
      string = 0LL;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      if ( ++Ptr == v27 )
        goto LABEL_16;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2887LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v15);
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v12,
      2884LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
LABEL_16:
  if ( a1 != (RTL_SRWLOCK *)-472LL )
    ReleaseSRWLockShared(a1 + 59);
  v18 = (void *)v29;
  v19 = (__int64 *)v29;
  for ( i = v33; v19 != v10; ++v19 )
  {
    p_string = &string;
    v21 = (HSTRING)*i;
    string = v21;
    if ( v21 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 8LL))(v21);
    v22 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                                                                                  v19,
                                                                                  (__int64)&v27);
    WindowEventDispatcher::RaiseViewEventWithPropertySet((__int64)a1, *v22, 4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
  }
  if ( v18 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
      (__int64)v18,
      (__int64)v10);
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(8 * (((char *)v8 - (_BYTE *)v18) >> 3)));
  }
  WindowsDeleteString(v34);
  v34 = 0LL;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(i);
}
