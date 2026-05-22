/*
 * XREFs of ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ @ 0x1801613E4
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x18015A0B8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18015B1B8 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066F44 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180075450 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18008919C (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     ??1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x1801577DC (--1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??4?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180157FA8 (--4-$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U-$.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x1801601AC (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x1801602F8 (-Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x180167D34 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  RTL_SRWLOCK *v2; // r12
  const char *v3; // r9
  HANDLE *v4; // r15
  int v5; // ebx
  DWORD dwFlagsAndAttributes; // esi
  const WCHAR *StringRawBuffer; // rax
  DWORD v8; // r8d
  DWORD v9; // edx
  HANDLE FileW; // rax
  const WCHAR *v11; // rax
  HANDLE v12; // rax
  signed int LastError; // eax
  signed int v14; // esi
  unsigned int v15; // ebx
  void *v16; // rdx
  const char *v17; // r9
  const char *v18; // r9
  struct _RTL_CRITICAL_SECTION *v19; // r13
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  HolographicDriverClientTrace *v23; // rcx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext *v24; // rbx
  int v25; // eax
  __int64 *v26; // rsi
  __int64 v27; // r15
  unsigned __int64 v28; // rbx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext *v30; // [rsp+48h] [rbp-C0h] BYREF
  char *v31; // [rsp+50h] [rbp-B8h]
  RTL_SRWLOCK *v32; // [rsp+58h] [rbp-B0h]
  char *v33; // [rsp+60h] [rbp-A8h]
  _DWORD v34[4]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v35; // [rsp+78h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v2 = (RTL_SRWLOCK *)((char *)this + 112);
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  v32 = v2;
  AcquireSRWLockExclusive((PSRWLOCK)this + 15);
  v33 = (char *)this + 120;
  v4 = (HANDLE *)((char *)this + 136);
  if ( *((_QWORD *)this + 17) != -1LL )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      504LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      v3);
    __debugbreak();
  }
  if ( *((int *)this + 32) >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      505LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      v3);
    __debugbreak();
  }
  v5 = *((_DWORD *)this + 10);
  dwFlagsAndAttributes = *((_BYTE *)this + 169) != 0 ? 0x40000000 : 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
  v8 = 3;
  if ( v5 == 2 )
    v8 = 1;
  v9 = -1073741824;
  if ( v5 == 2 )
    v9 = 0x80000000;
  FileW = CreateFileW(StringRawBuffer, v9, v8, 0LL, 3u, dwFlagsAndAttributes, 0LL);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 17,
    FileW);
  if ( (char *)*v4 - 1 > (char *)0xFFFFFFFFFFFFFFFDLL && *((_DWORD *)this + 10) == 1 && GetLastError() == 5 )
  {
    v11 = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
    v12 = CreateFileW(v11, 0x80000000, 1u, 0LL, 3u, dwFlagsAndAttributes, 0LL);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 17,
      v12);
  }
  if ( (char *)*v4 - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    v14 = LastError;
    if ( LastError > 0 )
      v14 = (unsigned __int16)LastError | 0x80070000;
    if ( v14 < 0 )
    {
      v15 = -2147024890;
      if ( v14 != -2147024890 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x227,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
          (const char *)(unsigned int)v14);
        v15 = v14;
      }
      goto LABEL_29;
    }
  }
  v16 = (void *)*((_QWORD *)this + 6);
  if ( v16 && !CreateIoCompletionPort(*v4, v16, 0LL, 0) )
  {
    v15 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x22C,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
            v17);
LABEL_29:
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-120LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
    goto LABEL_46;
  }
  *((_DWORD *)this + 32) = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  v31 = (char *)this + 144;
  if ( *((_QWORD *)this + 19) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      564LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      v18);
    __debugbreak();
  }
  v19 = (struct _RTL_CRITICAL_SECTION *)operator new(0x40uLL);
  InitializeCriticalSectionEx(v19, 0, 0);
  v19[1].DebugInfo = 0LL;
  *(_QWORD *)&v19[1].LockCount = CreateThreadpoolWork(
                                   Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::UnregisterAsyncCallback,
                                   v19,
                                   0LL);
  v19[1].OwningThread = 0LL;
  v30 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext *)v19;
  EnterCriticalSection(v19);
  v19[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)this;
  memset_0(v34, 0, 0x1A0uLL);
  v34[0] = 416;
  v34[2] = 1;
  v35 = *v4;
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    &v19[1].OwningThread,
    0LL);
  v21 = CM_Register_Notification(
          v34,
          v19,
          Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallbackStatic,
          &v19[1].OwningThread);
  if ( v21 )
  {
    if ( HolographicDriverClientTrace::IsEnabled(v20) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v22,
        _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::Log_Error_(
        v23,
        v21,
        L"CM_MapCrToWin32Err() failed, hresult is actually a CONFIGRET value");
    }
    v15 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x252,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      (const char *)0x8000FFFFLL);
    LeaveCriticalSection(v19);
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::~CmNotifContext(v19);
    operator delete(v19, (const struct std::nothrow_t *)0x40);
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-144LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
    goto LABEL_29;
  }
  std::unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator=(
    (struct _RTL_CRITICAL_SECTION **)this + 19,
    (struct _RTL_CRITICAL_SECTION **)&v30);
  LeaveCriticalSection(v19);
  v24 = v30;
  if ( v30 )
  {
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::~CmNotifContext((struct _RTL_CRITICAL_SECTION *)v30);
    operator delete(v24, (const struct std::nothrow_t *)0x40);
  }
  if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-144LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
  if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-120LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
  v25 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::HolographicDriverHandleWrapper *))(*(_QWORD *)this + 8LL))(this);
  v15 = v25;
  if ( v25 >= 0 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 7);
    v31 = (char *)this + 56;
    v26 = (__int64 *)*((_QWORD *)this + 11);
    v27 = 0LL;
    v28 = (unsigned __int64)(*((_QWORD *)this + 12) - (_QWORD)v26 + 7LL) >> 3;
    if ( (unsigned __int64)v26 > *((_QWORD *)this + 12) )
      v28 = 0LL;
    if ( v28 )
    {
      do
      {
        std::_Func_class<void,>::operator()(*v26++);
        ++v27;
      }
      while ( v27 != v28 );
    }
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-56LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 7);
    v15 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x259,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      (const char *)(unsigned int)v25);
  }
LABEL_46:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v15;
}
