/*
 * XREFs of ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18002E8F8
 * Callers:
 *     ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18003128C (-EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnect.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180005DEC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180018FF0 (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003B4B4 (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18003D5A0 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::OpenAndValidateConnection(
        ContentManagement *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64); // rdi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING); // rdi
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *v21; // [rsp+30h] [rbp-11h]
  __int64 v22; // [rsp+38h] [rbp-9h] BYREF
  __int64 v23; // [rsp+40h] [rbp-1h] BYREF
  __int64 v24; // [rsp+48h] [rbp+7h] BYREF
  char *v25; // [rsp+50h] [rbp+Fh] BYREF
  const WCHAR *v26[2]; // [rsp+58h] [rbp+17h] BYREF
  HSTRING string; // [rsp+68h] [rbp+27h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v26[1] = (const WCHAR *)-2LL;
  v26[0] = L"microsoft-contentdeliverymanager";
  *(_QWORD *)this = 0LL;
  v22 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.ApplicationModel.AppService.AppServiceConnection",
         0x38u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceConnection>>(
         string,
         &v22);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 249LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_27;
  }
  v6 = v22;
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 56LL);
  v8 = *(_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, v26);
  v3 = v7(v6, v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 250LL;
    goto LABEL_11;
  }
  v9 = v22;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v22 + 72LL);
  if ( WindowsCreateStringReference(
         L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
         0x36u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v3 = v10(v9, string);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 251LL;
    goto LABEL_11;
  }
  v24 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
          v22,
          &GUID_65219584_f9cb_4ae3_81f9_a28a6ca450d9,
          &v24);
  v4 = v11;
  if ( v11 >= 0 )
  {
    v23 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v24 + 24LL))(
            v24,
            &GUID_0d0e6663_2639_5a9a_9cbc_30d7d4ce533b,
            &v23);
    v4 = v12;
    if ( v12 >= 0 )
    {
      v15 = v23;
      v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>,Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus>>(v23);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v15 + 64LL))(v15, &v25);
        if ( v4 >= 0 )
        {
          if ( (_DWORD)v25 )
          {
            LODWORD(v21) = (_DWORD)v25;
            v4 = -2147483629;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x105,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)0x80000013LL,
              (__int64)"AppServiceConnectionStatus: %d",
              v21);
          }
          else
          {
            v16 = v22;
            v22 = 0LL;
            *(_QWORD *)this = v16;
            v4 = 0;
          }
LABEL_23:
          v17 = v23;
          if ( v23 )
          {
            v23 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          goto LABEL_25;
        }
      }
      v13 = (unsigned int)v4;
      v14 = 259LL;
    }
    else
    {
      v13 = (unsigned int)v12;
      v14 = 256LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v13);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v11);
LABEL_25:
  v18 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_27:
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v4;
}
