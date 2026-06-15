/*
 * XREFs of ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14002432C
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140026E00 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014798 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001A634 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x14001A65C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x14002872C (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x14003ADB4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14003C084 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14003DC04 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14003DC30 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x14003E964 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x140054634 (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1400557D4 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents(RTL_SRWLOCK *pv)
{
  unsigned int v2; // edi
  PVOID Ptr; // r14
  PVOID v4; // rcx
  void *v5; // rax
  __int64 v6; // rax
  int Error; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  const char *v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  HANDLE FileW; // rax
  LPVOID pva; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  void *v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[4]; // [rsp+58h] [rbp-A8h] BYREF
  DWORD LastError; // [rsp+5Ch] [rbp-A4h]
  RTL_SRWLOCK *v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v25[4]; // [rsp+70h] [rbp-90h] BYREF
  PVOID v26; // [rsp+80h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v2 = 0;
  v21 = 0LL;
  Ptr = pv[14].Ptr;
  v20 = 0LL;
  pva = 0LL;
  wil::srwlock::lock_exclusive(pv + 25, v24);
  v4 = pv[24].Ptr;
  pv[24].Ptr = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
  pv[24].Ptr = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5
    || (v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>(v5)) == 0 )
  {
    v8 = -2147024882;
    v10 = 2187LL;
    goto LABEL_25;
  }
  pv[24].Ptr = (PVOID)v6;
  wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
    &pv[23],
    0LL);
  if ( !pv[23].Ptr )
  {
    Error = ATL::AtlHresultFromLastError();
    v8 = Error;
    if ( Error < 0 )
    {
      v9 = (unsigned int)Error;
      v10 = 2190LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)v9);
    }
LABEL_27:
    v2 = v8;
    goto LABEL_28;
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback,
                     pv,
                     0LL);
  pv[22].Ptr = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v8 = -2147467259;
    v10 = 2193LL;
    goto LABEL_25;
  }
  SetThreadpoolWait(ThreadpoolWait, pv[23].Ptr, 0LL);
  if ( (((unsigned __int64)Ptr + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v13 = v20;
    v20 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = (**(__int64 (__fastcall ***)(PVOID, GUID *, __int64 *))pv[13].Ptr)(
            pv[13].Ptr,
            &GUID_a52f8a19_4726_4fce_eade_f008d49b7938,
            &v20);
    v8 = v14;
    if ( v14 < 0 )
    {
      v9 = (unsigned int)v14;
      v10 = 2202LL;
      goto LABEL_26;
    }
    v15 = v20;
    if ( pva )
    {
      v22[0] = 0;
      LastError = GetLastError();
      CoTaskMemFree(pva);
      wil::last_error_context::~last_error_context((wil::last_error_context *)v22);
    }
    pva = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 32LL))(v15, &pva);
    v8 = v16;
    if ( v16 < 0 )
    {
      v9 = (unsigned int)v16;
      v10 = 2205LL;
      goto LABEL_26;
    }
    FileW = CreateFileW((LPCWSTR)pva, 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v21,
      FileW);
    Ptr = v21;
  }
  if ( (((unsigned __int64)Ptr + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v8 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x8AD,
           (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
           v12);
    goto LABEL_27;
  }
  memset_0(v25, 0, 0x1A0uLL);
  v25[0] = 416;
  v25[2] = 1;
  v26 = Ptr;
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    &pv[18],
    0LL);
  if ( (unsigned int)CM_Register_Notification(
                       v25,
                       pv,
                       Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback,
                       &pv[18]) )
  {
    v8 = -2147467259;
    v10 = 2233LL;
LABEL_25:
    v9 = v8;
    goto LABEL_26;
  }
LABEL_28:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v24);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pva);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v20);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v21);
  return v2;
}
