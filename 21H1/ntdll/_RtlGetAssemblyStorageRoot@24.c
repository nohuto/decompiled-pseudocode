/*
 * XREFs of _RtlGetAssemblyStorageRoot@24 @ 0x4B2E2564
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     _RtlpGetActivationContextDataStorageMapAndRosterHeader@24 @ 0x4B2E262C (_RtlpGetActivationContextDataStorageMapAndRosterHeader@24.c)
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlGetAssemblyStorageRoot(int a1, int *a2, unsigned int a3, _DWORD *a4, int a5, int a6)
{
  int ActivationContextDataStorageMapAndRosterHeader; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h] BYREF

  v12 = 0;
  v11 = 0;
  v13 = 0;
  if ( a2 == dword_4B28120C )
  {
    DbgPrintEx(51, 0, (int)"SXS: %s() passed the empty activation context\n", (int)"RtlGetAssemblyStorageRoot");
    return -1073741811;
  }
  if ( a4 )
    *a4 = 0;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || !a4 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters:\n"
           "SXS:    Flags              : 0x%lx\n"
           "SXS:    AssemblyRosterIndex: 0x%lx\n"
           "SXS:    AssemblyStorageRoot: %p\n"
           "SXS:    Callback           : %p\n",
      (int)"RtlGetAssemblyStorageRoot");
    return -1073741811;
  }
  ActivationContextDataStorageMapAndRosterHeader = RtlpGetActivationContextDataStorageMapAndRosterHeader(
                                                     a2,
                                                     &v12,
                                                     &v13,
                                                     &v11);
  v7 = ActivationContextDataStorageMapAndRosterHeader;
  if ( ActivationContextDataStorageMapAndRosterHeader < 0 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: RtlGetAssemblyStorageRoot() unable to get activation context data, storage map and assembly roster heade"
           "r.  Status = 0x%08lx\n",
      ActivationContextDataStorageMapAndRosterHeader);
    return v7;
  }
  if ( !v12 )
    return 0;
  if ( !v11 || !v13 )
    return -1073741595;
  if ( a3 >= *(_DWORD *)(v11 + 8) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters AssemblyRosterIndex 0x%lx >= AssemblyRosterHeader->EntryCount: 0x%lx\n",
      (int)"RtlGetAssemblyStorageRoot");
    return -1073741811;
  }
  v8 = RtlpResolveAssemblyStorageMapEntry(a3, v13, a6);
  v7 = v8;
  if ( v8 < 0 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: RtlGetAssemblyStorageRoot() unable to resolve storage map entry.  Status = 0x%08lx\n",
      v8);
    return v7;
  }
  v9 = *(_DWORD *)(*(_DWORD *)(v13 + 8) + 4 * a3);
  if ( !v9 )
    return -1073741595;
  *a4 = v9 + 4;
  return 0;
}
