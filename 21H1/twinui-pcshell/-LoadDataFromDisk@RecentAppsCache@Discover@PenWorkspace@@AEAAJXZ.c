/*
 * XREFs of ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801FD548
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1801128EC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180048A00 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180177EA4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1801FCB04 (-FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801FDAC8 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  unsigned int JsonDataFromDisk; // ebx
  WCHAR *FileW; // rax
  WCHAR *v4; // rdi
  DWORD FileSize; // eax
  __int64 v6; // r14
  SIZE_T v7; // r15
  void *v8; // rcx
  int v9; // eax
  CHAR *v10; // rsi
  const char *v11; // r9
  WCHAR *v12; // r14
  __int64 v13; // rbx
  int ActivationFactory; // eax
  unsigned int v15; // r8d
  PVOID Reserved1; // r12
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *); // r15
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID lpBuffer; // [rsp+60h] [rbp-A8h] BYREF
  DWORD NumberOfBytesRead[2]; // [rsp+68h] [rbp-A0h] BYREF
  const WCHAR *v27[2]; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  __int64 v29; // [rsp+98h] [rbp-70h]
  WCHAR Dst[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  if ( ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", Dst, 0x104u) )
  {
    FileW = (WCHAR *)CreateFileW(Dst, 0x80000000, 1u, 0LL, 3u, 0x8000080u, 0LL);
    v4 = FileW;
    v27[1] = FileW;
    if ( FileW == (WCHAR *)-1LL )
    {
      JsonDataFromDisk = -2147023728;
    }
    else
    {
      FileSize = GetFileSize(FileW, 0LL);
      v6 = FileSize;
      v7 = FileSize + 1;
      lpBuffer = 0LL;
      v9 = CTCoAllocPolicy::Alloc(v8, 1, v7, &lpBuffer);
      JsonDataFromDisk = v9;
      v10 = (CHAR *)lpBuffer;
      if ( v9 >= 0 )
      {
        if ( ReadFile(v4, lpBuffer, v6, NumberOfBytesRead, 0LL) )
        {
          v10[v6] = 0;
          v12 = (WCHAR *)CoTaskMemAlloc(2 * v7);
          v27[0] = v12;
          if ( MultiByteToWideChar(0xFDE9u, 0, v10, -1, v12, v7) )
          {
            v24 = 0LL;
            v29 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.Data.Json.JsonObject",
              0x1Du,
              0x1Cu);
            v13 = v29;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
            ActivationFactory = RoGetActivationFactory(v13, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v24);
            JsonDataFromDisk = ActivationFactory;
            if ( ActivationFactory >= 0 )
            {
              v23 = 0LL;
              Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v27, v15)[1].Reserved.Reserved1;
              v29 = 0LL;
              v17 = v24;
              v18 = *(__int64 (__fastcall **)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *))(*(_QWORD *)v24 + 56LL);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
              v19 = v18(v17, Reserved1, &v23, &v22);
              JsonDataFromDisk = v19;
              if ( v19 >= 0 )
              {
                if ( (_BYTE)v22 || (PenWorkspaceBrokerTelemetry::FailedToParseJsonString(v20), (_BYTE)v22) )
                  JsonDataFromDisk = PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(this, v23);
                else
                  JsonDataFromDisk = -2147467259;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x22D,
                  (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  (const char *)(unsigned int)v19);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x228,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                (const char *)(unsigned int)ActivationFactory);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          }
          else
          {
            JsonDataFromDisk = -2147467259;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x225,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)0x80004005LL);
          }
          CoTaskMemFree(v12);
        }
        else
        {
          JsonDataFromDisk = wil::details::in1diag3::Return_GetLastError(
                               retaddr,
                               (void *)0x220,
                               (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                               v11);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21D,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v9);
      }
      CoTaskMemFree(v10);
    }
    if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v4);
  }
  else
  {
    JsonDataFromDisk = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
  }
  return JsonDataFromDisk;
}
