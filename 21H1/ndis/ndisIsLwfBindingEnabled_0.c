/*
 * XREFs of ndisIsLwfBindingEnabled_0 @ 0x1C0124DF4
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C012475C (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0124950 (ndisBuildMonitoringLwfBindings.c)
 *     ndisIsLwfBindingEnabled @ 0x1C0124D50 (ndisIsLwfBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ndisIsBindPathEnabled @ 0x1C0124BE8 (ndisIsBindPathEnabled.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C012973C (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 */

__int64 __fastcall ndisIsLwfBindingEnabled_0(struct _GUID *a1, struct _GUID *a2, bool *a3)
{
  enum NetSetupStoreType v6; // ecx
  wchar_t v8[256]; // [rsp+40h] [rbp-218h] BYREF

  if ( a1[4].Data1 || (v6 = System, *(_DWORD *)a2[3].Data4) )
    v6 = Mutable;
  netsetupBuildBindingRegistryPath(v6, Root, a1, 0LL, a2, 0LL, v8);
  return ndisIsBindPathEnabled(v8, a2[3].Data2, a3);
}
