/*
 * XREFs of ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1802B7020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180035300 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004B7F8 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18004CDF0 (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180085724 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800ADCB4 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x1802AF880 (--$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$Q.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802BA01C (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  struct IObjectArray **v3; // r13
  RTL_SRWLOCK *v5; // r14
  RTL_SRWLOCK *v6; // r12
  struct _GUID *i; // rdx
  char v8; // al
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rsi
  volatile signed __int32 *v13; // r15
  RTL_SRWLOCK *v14; // rbx
  __int64 v15; // rcx
  const WCHAR *v16; // rax
  char *Ptr; // rax
  const WCHAR *v18; // rcx
  __int64 *v19; // rbx
  RTL_SRWLOCK *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // r9
  int v24; // eax
  int v25; // eax
  HSTRING *v26; // rbx
  void *v27; // rcx
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  void *v34; // [rsp+30h] [rbp-F8h] BYREF
  LPCWCH lpString2; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v36[2]; // [rsp+40h] [rbp-E8h] BYREF
  std::_Ref_count_base *v37[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 *v38; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-C0h]
  __int64 *v40; // [rsp+70h] [rbp-B8h]
  char v41; // [rsp+78h] [rbp-B0h]
  const WCHAR *v42; // [rsp+80h] [rbp-A8h]
  RTL_SRWLOCK *v43; // [rsp+88h] [rbp-A0h]
  RTL_SRWLOCK *v44; // [rsp+90h] [rbp-98h]
  PCWSTR StringRawBuffer; // [rsp+98h] [rbp-90h] BYREF
  PCWSTR v46; // [rsp+A0h] [rbp-88h] BYREF
  PSRWLOCK SRWLock; // [rsp+A8h] [rbp-80h]
  __int128 v48; // [rsp+C0h] [rbp-68h] BYREF
  RTL_SRWLOCK *v49; // [rsp+D0h] [rbp-58h]
  char v50[8]; // [rsp+D8h] [rbp-50h] BYREF
  char v51[72]; // [rsp+E0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]
  int v55; // [rsp+148h] [rbp+20h] BYREF

  v3 = a3;
  v5 = this;
  v43 = this;
  *a3 = 0LL;
  v6 = this + 55;
  v44 = this + 55;
  AcquireSRWLockExclusive(this + 55);
  v49 = v6;
  SRWLock = v6;
  if ( LOBYTE(v5[58].Ptr) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1975LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x8007139FLL);
LABEL_43:
    wil::details::in1diag3::Throw_Hr(
      v9,
      1988LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    goto LABEL_44;
  }
  *(_OWORD *)v37 = 0LL;
  for ( i = (struct _GUID *)v5[49].Ptr; i != v5[50].Ptr; ++i )
  {
    if ( *(_QWORD *)(*(_QWORD *)&i->Data1 + 32LL) == a2.value )
    {
      std::shared_ptr<ViewEventRegistration>::operator=(v37, i);
      v8 = 0;
      if ( v37[0] )
        goto LABEL_9;
      break;
    }
  }
  v8 = 1;
LABEL_9:
  v9 = retaddr;
  if ( v8 )
    goto LABEL_43;
  v34 = 0LL;
  v10 = CEnumerableObjectCollection::CreateInstance((__int64)retaddr, i, &v34);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v11,
      1993LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_45;
  }
  v12 = ((char *)v5[46].Ptr - (char *)v5[45].Ptr) >> 3;
  v13 = (volatile signed __int32 *)v37[1];
  while ( 1 )
  {
    v39 = v12;
    if ( !v12 )
      break;
    lpString2 = WindowsGetStringRawBuffer(*((HSTRING *)v37[0] + 1), 0LL);
    v14 = v5 + 45;
    v15 = *((_QWORD *)v5[45].Ptr + v12 - 1);
    v16 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 280LL))(v15);
    if ( CompareStringOrdinal(v16, -1, lpString2, -1, 0) == 2 )
    {
      Ptr = (char *)v14->Ptr;
      v18 = (const WCHAR *)*((_QWORD *)v14->Ptr + v12 - 1);
      v42 = v18;
      v19 = (__int64 *)v18;
      lpString2 = v18;
      if ( v18 )
      {
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v18 + 8LL))(v18);
        v20 = v5 + 45;
        Ptr = (char *)v5[45].Ptr;
      }
      else
      {
        v20 = v5 + 45;
      }
      std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(v20, v50, &Ptr[8 * v12 - 8]);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &lpString2,
        (__int64)v36);
      v40 = v36;
      v41 = 1;
      v21 = (__int64)&v5[-4];
      v48 = 0LL;
      if ( v13 )
      {
        _InterlockedIncrement(v13 + 2);
        v13 = (volatile signed __int32 *)v37[1];
        v19 = (__int64 *)lpString2;
      }
      try
      {
        v48 = *(_OWORD *)v37;
        v38 = v19;
        if ( v42 )
        {
          (*(void (__fastcall **)(__int64 *))(*v19 + 8))(v19);
          v21 = (__int64)&v5[-4];
        }
        WindowEventDispatcher::CacheWindowWrapper(v21, &v38, &v48, (const char *)1);
        v22 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 40LL))(v34, v36[0]);
        if ( v22 >= 0 )
        {
          v41 = 0;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7E5,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v22);
          std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
            &v5[42],
            v51,
            (char *)v43[43].Ptr - 8);
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x7EF,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          v23);
        v5 = this;
        v3 = a3;
        v13 = (volatile signed __int32 *)v37[1];
        v12 = v39;
        v6 = v44;
      }
      if ( v41 )
      {
        v41 = 0;
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36[0] + 392LL))(v36[0], 0LL);
        if ( v24 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7DE,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v24);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v36);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&lpString2);
    }
    --v12;
  }
  v55 = 0;
  v25 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v34 + 24LL))(v34, &v55);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7F4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v25);
  v26 = (HSTRING *)v37[0];
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v37[0] + 1), 0LL);
  v46 = WindowsGetStringRawBuffer(*v26, 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_RecoveringViews<unsigned int &,unsigned short const *,unsigned short const *>(
    &v55,
    (__int64 *)&v46,
    (__int64 *)&StringRawBuffer);
  v27 = v34;
  if ( !v34 )
  {
    *v3 = 0LL;
    goto LABEL_35;
  }
  v28 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v34)(
          v34,
          &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
          v3);
  v29 = retaddr;
  if ( v28 < 0 )
  {
LABEL_45:
    wil::details::in1diag3::Throw_Hr(
      v29,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v28);
    __debugbreak();
    return WindowEventDispatcher::RecoverViews_::_1_::dtor_0(v32, v31, v33);
  }
  v27 = v34;
LABEL_35:
  if ( v27 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v13 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  if ( v6 )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
