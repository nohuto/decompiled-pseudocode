/*
 * XREFs of _lambda_0af0b81a69df187aa7d3da55687287d8_::operator() @ 0x180478D7C
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180478330 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 * Callees:
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180478504 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0af0b81a69df187aa7d3da55687287d8_::operator()(
        _BYTE **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int RedirectedPathIfNeeded; // edi
  void *v6; // rbx
  LPVOID v7; // rbp
  _QWORD *v8; // rdi
  void *v9; // rcx
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF

  pv = 0LL;
  RedirectedPathIfNeeded = Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
                             (char *)L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown",
                             0LL,
                             &pv,
                             a4);
  v6 = pv;
  if ( RedirectedPathIfNeeded >= 0 )
  {
    if ( pv )
    {
      v7 = pv;
      v6 = 0LL;
      v8 = *a1;
      v9 = (void *)*((_QWORD *)*a1 + 1);
      if ( v9 )
        CoTaskMemFree(v9);
      v8[1] = v7;
      v8[3] = -1LL;
      v8[2] = -1LL;
      *a1[1] = 1;
    }
    RedirectedPathIfNeeded = 0;
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return (unsigned int)RedirectedPathIfNeeded;
}
