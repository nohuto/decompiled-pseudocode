/*
 * XREFs of CmpFindRedirectedDriverServiceStateNode @ 0x140A62328
 * Callers:
 *     CmpFindDrivers @ 0x140A61F64 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A62390 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpGetKnownHivePathNode @ 0x140A8FBCC (CmpGetKnownHivePathNode.c)
 */

char __fastcall CmpFindRedirectedDriverServiceStateNode(
        ULONG_PTR a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char result; // al
  char KnownHivePathNode; // bl
  _DWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-20h] BYREF

  v13[0] = -1;
  v13[1] = 0;
  v14 = 0LL;
  result = CmpGetStateSepKeysRedirectionPathValue(a1, (__int64)v13);
  if ( result )
  {
    KnownHivePathNode = CmpGetKnownHivePathNode(a1, a2, a3, a4, (__int64)&v14, a5, a6, a7);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v13);
    return KnownHivePathNode;
  }
  return result;
}
