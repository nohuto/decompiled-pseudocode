/*
 * XREFs of ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004EC78
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140012914 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014630 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140030CC4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x14004A8B8 (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x14004BFB4 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents(char *pv)
{
  char *FileW; // rsi
  char *v3; // rbx
  RTL_SRWLOCK *v4; // r14
  __int64 v5; // rcx
  void *v6; // rax
  bool v7; // dl
  __int64 v8; // rax
  __int64 v9; // rdx
  wil::details *v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  wil::details *Event; // r15
  signed int Error; // ebx
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int LastError; // eax
  LPCWSTR lpFileName; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v20[4]; // [rsp+68h] [rbp-A0h] BYREF
  char *v21; // [rsp+78h] [rbp-90h]

  FileW = 0LL;
  v3 = (char *)*((_QWORD *)pv + 12);
  v19[0] = 0LL;
  lpFileName = 0LL;
  v4 = (RTL_SRWLOCK *)(pv + 152);
  AcquireSRWLockExclusive((PSRWLOCK)pv + 19);
  v19[1] = (__int64)v4;
  v5 = *((_QWORD *)pv + 25);
  if ( v5 )
  {
    *((_QWORD *)pv + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_QWORD *)pv + 25) = 0LL;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6
    || (v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>(
               (__int64)v6,
               v7)) == 0 )
  {
    Error = -2147024882;
    goto LABEL_24;
  }
  *((_QWORD *)pv + 25) = v8;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)pv + 23,
      Event);
  }
  else
  {
    wil::details::GetLastErrorFailHr(v10, v9, v11, v12);
  }
  if ( !*((_QWORD *)pv + 23) )
  {
    Error = ATL::AtlHresultFromLastError();
    goto LABEL_24;
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback,
                     pv,
                     0LL);
  *((_QWORD *)pv + 22) = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    Error = -2147467259;
    goto LABEL_24;
  }
  SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 23), 0LL);
  if ( v3 )
  {
LABEL_17:
    if ( v3 != (char *)-1LL )
    {
      memset_0(v20, 0, 0x1A0uLL);
      v20[0] = 416;
      v20[2] = 1;
      v21 = v3;
      Error = (unsigned int)CM_Register_Notification(
                              v20,
                              pv,
                              Windows::Media::Devices::Internal::AudioDeviceBroker::CMModulesNotificationCallback,
                              pv + 104) != 0
            ? 0x80004005
            : 0;
LABEL_21:
      if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(FileW);
      goto LABEL_24;
    }
LABEL_18:
    LastError = GetLastError();
    Error = LastError;
    if ( LastError > 0 )
      Error = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 11))(
    *((_QWORD *)pv + 11),
    &GUID_a52f8a19_4726_4fce_eade_f008d49b7938,
    v19);
  if ( !v19[0] )
  {
    Error = -2147418113;
    goto LABEL_24;
  }
  Error = (*(__int64 (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v19[0] + 32LL))(v19[0], &lpFileName);
  if ( Error >= 0 )
  {
    FileW = (char *)CreateFileW(lpFileName, 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
    v3 = FileW;
    if ( !FileW )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_24:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  CoTaskMemFree((LPVOID)lpFileName);
  lpFileName = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
  return (unsigned int)Error;
}
