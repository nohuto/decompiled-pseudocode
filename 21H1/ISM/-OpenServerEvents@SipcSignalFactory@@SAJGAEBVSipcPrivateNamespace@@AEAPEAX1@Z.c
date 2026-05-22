/*
 * XREFs of ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800C15E0
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF6E0 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18003215C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800BF0E8 (--$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z.c)
 *     ??$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800BF120 (--$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800C1C48 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 */

__int64 __fastcall SipcSignalFactory::OpenServerEvents(
        unsigned __int16 a1,
        const struct SipcPrivateNamespace *a2,
        void **a3,
        wil::details **a4)
{
  char *v4; // rbx
  wil::details::in1diag0 *v8; // rcx
  void *v9; // rdx
  unsigned int LastError; // ebx
  wil::details *v11; // rax
  void *v12; // rdx
  wil::details::in1diag0 *v13; // rcx
  void *v14; // rdx
  wil::details *v16; // [rsp+20h] [rbp-E0h] BYREF
  wil::details *v17; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR Name[56]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR v19[56]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = (char *)a2 + 8;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( a1 )
  {
    SipcSignalFactory::GetFullSignalPath<13,38,56>(a1, (__int64)a2 + 8, (__int64)L"ClientSignal", (__int64)Name);
    SipcSignalFactory::GetFullSignalPath<13,38,56>(a1, (__int64)v4, (__int64)L"ServerSignal", (__int64)v19);
  }
  else
  {
    SipcSignalFactory::GetNamespaceSignalPath<13,38,56>((__int64)a2 + 8, (__int64)L"ClientSignal", (__int64)Name);
    SipcSignalFactory::GetNamespaceSignalPath<13,38,56>((__int64)v4, (__int64)L"ServerSignal", (__int64)v19);
  }
  v17 = (wil::details *)OpenEventW(0x100002u, 0, Name);
  if ( v17 )
  {
    v11 = (wil::details *)OpenEventW(2u, 0, v19);
    v16 = v11;
    if ( v11 )
    {
      *a3 = v17;
      *a4 = v11;
      v17 = 0LL;
      v16 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v16,
        v12);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag0::Return_GetLastError(v13);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v16,
        v14);
    }
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v8);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    &v17,
    v9);
  return LastError;
}
