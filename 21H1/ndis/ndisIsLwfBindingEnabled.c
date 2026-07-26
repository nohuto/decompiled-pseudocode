/*
 * XREFs of ndisIsLwfBindingEnabled @ 0x1C0124D50
 * Callers:
 *     ndisBuildMonitoringLwfBindings @ 0x1C0124950 (ndisBuildMonitoringLwfBindings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ndisIsBindPathEnabled @ 0x1C0124BE8 (ndisIsBindPathEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0124DF4 (ndisIsLwfBindingEnabled_0.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C012973C (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 */

__int64 __fastcall ndisIsLwfBindingEnabled(struct _GUID *a1, struct _GUID *a2, struct _GUID *a3, bool *a4)
{
  __int64 result; // rax
  enum NetSetupSubkeyType v9; // edx
  enum NetSetupStoreType v10; // ecx
  wchar_t v11[256]; // [rsp+40h] [rbp-238h] BYREF

  result = ndisIsLwfBindingEnabled_0(a1, a2);
  v10 = System;
  if ( !(_DWORD)result && *a4 )
  {
    if ( a1[4].Data1 || *(_DWORD *)a2[3].Data4 || *(_DWORD *)a3[3].Data4 )
      v10 = Mutable;
    netsetupBuildBindingRegistryPath(v10, v9, a1, 0LL, a2, a3, v11);
    return ndisIsBindPathEnabled(v11, a3[3].Data2, a4);
  }
  return result;
}
