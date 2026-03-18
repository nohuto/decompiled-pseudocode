/*
 * XREFs of BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x140008B50
 * Callers:
 *     ?GetFrontBufferColorMap@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x140008D10 (-GetFrontBufferColorMap@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1400058F4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140007B6C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     BlackScreenDiagnostics::IsSectionAllBlackPixels @ 0x140008FE0 (BlackScreenDiagnostics--IsSectionAllBlackPixels.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000A064 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetDwmFrontBufferBitsColor(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  wil::details *EventW; // rax
  HANDLE v6; // rdi
  bool v7; // bl
  void *v8; // rdx
  DWORD LastError; // edi
  __int64 v10; // rcx
  void *v11; // rdx
  int v12; // ebp
  int v13; // r14d
  char *FileMappingW; // rbx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  int IsSectionAllBlackPixels; // eax
  HANDLE hHandle; // [rsp+40h] [rbp-18h] BYREF
  wil::details *v20; // [rsp+48h] [rbp-10h] BYREF

  hHandle = 0LL;
  EventW = (wil::details *)CreateEventW(0LL, 0, 0, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (wil::details **)&hHandle,
    EventW);
  v20 = 0LL;
  v6 = hHandle;
  v7 = hHandle == 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    &v20,
    v8);
  if ( v7 )
  {
    LastError = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v10, LastError, 0LL);
    goto LABEL_13;
  }
  v12 = GetSystemMetrics(0) / 2;
  v13 = GetSystemMetrics(1) / 2;
  FileMappingW = (char *)CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0x8000004u, 0, 0x75300u, 0LL);
  if ( ((unsigned __int64)(FileMappingW + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LastError = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v15, LastError, 0LL);
    goto LABEL_11;
  }
  v16 = NtDesktopCaptureBits(
          0LL,
          (unsigned int)(v12 - 200),
          (unsigned int)(v13 - 150),
          400LL,
          300,
          87,
          v6,
          FileMappingW);
  if ( v16 < 0 )
  {
    LastError = RtlNtStatusToDosError(v16);
    goto LABEL_9;
  }
  LastError = WaitForSingleObject(v6, 0x1388u);
  if ( LastError )
  {
LABEL_9:
    IsSectionAllBlackPixels = 3;
    goto LABEL_10;
  }
  IsSectionAllBlackPixels = BlackScreenDiagnostics::IsSectionAllBlackPixels(FileMappingW);
LABEL_10:
  *a4 = IsSectionAllBlackPixels;
LABEL_11:
  if ( (unsigned __int64)(FileMappingW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(FileMappingW);
LABEL_13:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)&hHandle,
    v11);
  return LastError;
}
