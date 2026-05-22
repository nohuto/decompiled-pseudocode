/*
 * XREFs of ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800C10F0
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF1F0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800321EC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800BEB88 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ??$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800BEBEC (--$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z.c)
 *     ??$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800BEC24 (--$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@.c)
 */

__int64 __fastcall SipcSignalFactory::OpenServerEvents(
        unsigned __int16 a1,
        const struct SipcPrivateNamespace *a2,
        void **a3,
        wil::details **a4)
{
  char *v4; // rbx
  __int64 v8; // rdx
  wil::details::in1diag0 *v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  void *v12; // rdx
  unsigned int LastError; // ebx
  wil::details *v14; // rax
  void *v15; // rdx
  wil::details::in1diag0 *v16; // rcx
  __int64 v17; // r8
  const char *v18; // r9
  void *v19; // rdx
  wil::details *v21; // [rsp+20h] [rbp-E0h] BYREF
  wil::details *v22; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR Name[56]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR v24[56]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = (char *)a2 + 8;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( a1 )
  {
    SipcSignalFactory::GetFullSignalPath<13,38,56>(a1, (__int64)a2 + 8, (__int64)L"ClientSignal", (__int64)Name);
    SipcSignalFactory::GetFullSignalPath<13,38,56>(a1, (__int64)v4, (__int64)L"ServerSignal", (__int64)v24);
  }
  else
  {
    SipcSignalFactory::GetNamespaceSignalPath<13,38,56>((__int64)a2 + 8, (__int64)L"ClientSignal", (__int64)Name);
    SipcSignalFactory::GetNamespaceSignalPath<13,38,56>((__int64)v4, (__int64)L"ServerSignal", (__int64)v24);
  }
  v22 = (wil::details *)OpenEventW(0x100002u, 0, Name);
  if ( v22 )
  {
    v14 = (wil::details *)OpenEventW(2u, 0, v24);
    v21 = v14;
    if ( v14 )
    {
      *a3 = v22;
      *a4 = v14;
      v22 = 0LL;
      v21 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v21,
        v15);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag0::Return_GetLastError(v16, (__int64)v15, v17, v18);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v21,
        v19);
    }
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v9, v8, v10, v11);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    &v22,
    v12);
  return LastError;
}
