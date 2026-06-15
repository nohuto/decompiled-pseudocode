/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x18003E320
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18003D11C (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18003D1F8 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18003DB38 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::Initialize(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int RedirectedPathIfNeeded; // ebx
  char v6; // si
  char v7; // di
  void *v8; // rbx
  LPVOID v9; // rdi
  void *v10; // rcx
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  pv = 0LL;
  RedirectedPathIfNeeded = Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
                             (char *)L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
                             (__int64)L"AssignedAccessConfiguration",
                             &pv,
                             a4);
  v6 = 1;
  if ( RedirectedPathIfNeeded >= 0 )
  {
    v7 = 0;
    v8 = pv;
    if ( pv )
    {
      v9 = pv;
      v8 = 0LL;
      v10 = (void *)*((_QWORD *)this + 1);
      if ( v10 )
        CoTaskMemFree(v10);
      *((_QWORD *)this + 1) = v9;
      *((_QWORD *)this + 3) = -1LL;
      *((_QWORD *)this + 2) = -1LL;
      v7 = 1;
    }
    if ( v8 )
      CoTaskMemFree(v8);
    RedirectedPathIfNeeded = 0;
  }
  else
  {
    if ( pv )
      CoTaskMemFree(pv);
    v7 = 0;
  }
  if ( RedirectedPathIfNeeded < 0 || !v7 )
    return 0;
  return v6;
}
