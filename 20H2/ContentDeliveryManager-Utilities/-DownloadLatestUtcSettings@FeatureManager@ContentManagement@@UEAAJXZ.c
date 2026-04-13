/*
 * XREFs of ?DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ @ 0x180010260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VUtcApiWrapper@Diagnostics@Microsoft@@@std@@YA?AV?$shared_ptr@VUtcApiWrapper@Diagnostics@Microsoft@@@0@XZ @ 0x180018D00 (--$make_shared@VUtcApiWrapper@Diagnostics@Microsoft@@@std@@YA-AV-$shared_ptr@VUtcApiWrapper@Diag.c)
 *     ?DownloadLatestSettingsForNamespaceAsync@UtcApiWrapper@Diagnostics@Microsoft@@QEAAJPEBG0HHH@Z @ 0x1800AAAD8 (-DownloadLatestSettingsForNamespaceAsync@UtcApiWrapper@Diagnostics@Microsoft@@QEAAJPEBG0HHH@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::FeatureManager::DownloadLatestUtcSettings(
        ContentManagement::FeatureManager *this)
{
  Microsoft::Diagnostics::UtcApiWrapper *v1; // rbx
  RPC_STATUS v2; // eax
  int v3; // r9d
  signed int v4; // ecx
  int v5; // eax
  int v6; // r9d
  unsigned int v7; // edi
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  int v11; // [rsp+20h] [rbp-68h]
  int v12; // [rsp+20h] [rbp-68h]
  int StringBinding; // [rsp+28h] [rbp-60h]
  int StringBindinga; // [rsp+28h] [rbp-60h]
  RPC_WSTR String; // [rsp+30h] [rbp-58h] BYREF
  Microsoft::Diagnostics::UtcApiWrapper *v16; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int32 *v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  wchar_t Destination[20]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v18 = -2LL;
  std::make_shared<Microsoft::Diagnostics::UtcApiWrapper>(&v16);
  v1 = v16;
  wcscpy_s(Destination, 0x14uLL, L"ncalrpc");
  String = 0LL;
  v2 = RpcStringBindingComposeW(0LL, Destination, 0LL, 0LL, 0LL, &String);
  v4 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 <= 0 )
    v4 = v2;
  if ( v4 >= 0 )
  {
    RpcBindingFromStringBindingW(String, (RPC_BINDING_HANDLE *)v1 + 1);
    RpcStringFreeW(&String);
  }
  v5 = Microsoft::Diagnostics::UtcApiWrapper::DownloadLatestSettingsForNamespaceAsync(
         v16,
         L"utc",
         L"app",
         v3,
         v11,
         StringBinding);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v5 = Microsoft::Diagnostics::UtcApiWrapper::DownloadLatestSettingsForNamespaceAsync(
           v16,
           L"telemetry",
           L"ASM-WindowsDefault",
           v6,
           v12,
           StringBindinga);
    v7 = v5;
    if ( v5 >= 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    v8 = 441LL;
  }
  else
  {
    v8 = 434LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v5);
LABEL_11:
  v9 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return v7;
}
