/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180478714
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180477C2C (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180478504 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 *     ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x180478650 (-GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize(
        LPVOID *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int RedirectedPathIfNeeded; // eax
  void *v6; // rbx
  void *v7; // rsi
  char v8; // di
  void *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  RedirectedPathIfNeeded = Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
                             (char *)L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
                             (__int64)L"AssignedAccessConfiguration",
                             &v10,
                             a4);
  v6 = v10;
  if ( RedirectedPathIfNeeded >= 0 && v10 )
  {
    v7 = v10;
    v6 = 0LL;
    if ( *this )
      CoTaskMemFree(*this);
    *this = v7;
    this[2] = (LPVOID)-1LL;
    this[1] = (LPVOID)-1LL;
    *((_DWORD *)this + 6) = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion((LPCWSTR *)this);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return v8;
}
