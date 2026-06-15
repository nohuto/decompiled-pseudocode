/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x18003E08C
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18003D040 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180030C00 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180031168 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::Initialize(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // si
  void *v6; // rbx
  LPVOID v7; // rsi
  void *v8; // rcx
  LPVOID pv; // [rsp+60h] [rbp+8h] BYREF
  LPVOID v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h]
  const wchar_t *v13; // [rsp+78h] [rbp+20h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown";
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    (char *)L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown",
    0xFFFFFFFFFFFFFFFFuLL,
    a4);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    &v11,
    &pv);
  if ( pv )
    CoTaskMemFree(pv);
  v5 = 0;
  v6 = v11;
  if ( v11 )
  {
    v7 = v11;
    v6 = 0LL;
    v8 = (void *)*((_QWORD *)this + 1);
    if ( v8 )
      CoTaskMemFree(v8);
    *((_QWORD *)this + 1) = v7;
    *((_QWORD *)this + 3) = -1LL;
    *((_QWORD *)this + 2) = -1LL;
    v5 = 1;
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return v5;
}
