/*
 * XREFs of ndisIsProtocolBindingEnabled @ 0x1C0124E54
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C012472C (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ndisIsBindPathEnabled @ 0x1C0124BB8 (ndisIsBindPathEnabled.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C012970C (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 */

__int64 __fastcall ndisIsProtocolBindingEnabled(struct _GUID *a1, struct _GUID *a2, bool *a3)
{
  enum NetSetupStoreType v6; // ecx
  wchar_t v8[256]; // [rsp+40h] [rbp-218h] BYREF

  if ( a1[4].Data1 || (v6 = System, *(_DWORD *)&a2[3].Data4[4]) )
    v6 = Mutable;
  netsetupBuildBindingRegistryPath(v6, Root, a1, a2, 0LL, 0LL, v8);
  return ndisIsBindPathEnabled(v8, a2[3].Data4[0], a3);
}
