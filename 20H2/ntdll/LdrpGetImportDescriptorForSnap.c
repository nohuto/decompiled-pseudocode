/*
 * XREFs of LdrpGetImportDescriptorForSnap @ 0x1800142DC
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpCheckPagesForTampering @ 0x1800899CC (LdrpCheckPagesForTampering.c)
 *     LdrpMapCleanModuleView @ 0x1800D550C (LdrpMapCleanModuleView.c)
 */

PIMAGE_NT_HEADERS __fastcall LdrpGetImportDescriptorForSnap(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  PIMAGE_NT_HEADERS v4; // rbx
  int v6; // eax
  unsigned int v7; // [rsp+50h] [rbp+8h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = RtlpImageDirectoryEntryToDataEx(*(PVOID *)(v1 + 48), (__int64)&OutHeaders);
  v4 = OutHeaders;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v1 == LdrpImageEntry && ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
    if ( ((unsigned __int8)LdrpCheckPagesForTampering(&OutHeaders->OptionalHeader.DataDirectory[1], 8LL)
       || (unsigned __int8)LdrpCheckPagesForTampering(v4, v7))
      && (int)LdrpMapCleanModuleView(a1) >= 0 )
    {
      v6 = RtlpImageDirectoryEntryToDataEx(*(PVOID *)(a1 + 184), (__int64)&OutHeaders);
      v4 = OutHeaders;
      if ( v6 < 0 )
        return 0LL;
    }
  }
  return v4;
}
