/*
 * XREFs of ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002F0AC
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x18002F19C (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002F62C (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180178750 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall DiagnosticCallbacksManager::Create(
        struct IMessageSession *a1,
        struct DiagnosticCallbacksManager **a2)
{
  const char *v4; // r9
  int v5; // eax
  int v6; // r9d
  unsigned int LastError; // ebx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-"
           "3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x29,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
                  v4);
    goto LABEL_7;
  }
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IMessageSession *, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)a1 + 64LL))(
         a1,
         SecurityDescriptor,
         &v14);
  LastError = v5;
  if ( v5 < 0 )
  {
    v10 = 46LL;
  }
  else
  {
    v11 = 0LL;
    v12 = 1;
    v5 = Microsoft::Bamo::BaseBamoConnection::CreateServer<DiagnosticCallbacksManager>(
           (_DWORD)a1,
           v14,
           (unsigned int)&v11,
           v6,
           (__int64)a2);
    LastError = v5;
    if ( v5 >= 0 )
    {
      LastError = 0;
      goto LABEL_5;
    }
    v10 = 53LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_5:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_7:
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&SecurityDescriptor);
  return LastError;
}
