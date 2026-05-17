/*
 * XREFs of _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0
 * Callers:
 *     _LdrpIsReparsePoint@4 @ 0x4B2A87A0 (_LdrpIsReparsePoint@4.c)
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 *     _RtlpProbeAssemblyStorageRootForAssembly@28 @ 0x4B2E2E88 (_RtlpProbeAssemblyStorageRootForAssembly@28.c)
 *     _LdrpResMapFile@16 @ 0x4B34316E (_LdrpResMapFile@16.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 *     _RtlpMUIEnumerateFolder@12 @ 0x4B354614 (_RtlpMUIEnumerateFolder@12.c)
 * Callees:
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 */

bool __stdcall RtlDosPathNameToRelativeNtPathName_U(int a1, unsigned __int16 *a2, int a3, _DWORD *a4)
{
  int inited; // eax
  bool v5; // sf
  int v7[2]; // [esp+0h] [ebp-8h] BYREF

  inited = RtlInitUnicodeStringEx(v7, a1);
  v5 = inited < 0;
  if ( inited >= 0 )
    v5 = RtlpDosPathNameToRelativeNtPathName(2, v7, 0, a2, 0, a3, a4) < 0;
  return !v5;
}
