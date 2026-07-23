/*
 * XREFs of _LdrpGetImportDescriptorForSnap@4 @ 0x4B2E5CCD
 * Callers:
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpCheckPagesForTampering@8 @ 0x4B334478 (_LdrpCheckPagesForTampering@8.c)
 *     _LdrpMapCleanModuleView@4 @ 0x4B334528 (_LdrpMapCleanModuleView@4.c)
 */

PIMAGE_NT_HEADERS __thiscall LdrpGetImportDescriptorForSnap(int this)
{
  int v1; // esi
  PIMAGE_NT_HEADERS v2; // ebx
  ULONG Size; // [esp+14h] [ebp-24h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+18h] [ebp-20h] BYREF
  _DWORD v7[6]; // [esp+1Ch] [ebp-1Ch] BYREF

  v1 = *(_DWORD *)(this + 32);
  if ( RtlpImageDirectoryEntryToDataEx(*(_DWORD *)(v1 + 24), 1, 1u, &Size, &OutHeaders) >= 0 )
    v2 = OutHeaders;
  else
    v2 = 0;
  if ( v1 == LdrpImageEntry )
  {
    qmemcpy(v7, &unk_4B3A92E8, sizeof(v7));
    if ( ((v7[3] >> 12) & 3) == 1 )
    {
      RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 24), 0LL, &OutHeaders);
      if ( ((unsigned __int8)LdrpCheckPagesForTampering(&OutHeaders->OptionalHeader.LoaderFlags, 8)
         || (unsigned __int8)LdrpCheckPagesForTampering(v2, Size))
        && LdrpMapCleanModuleView(this) >= 0 )
      {
        return (PIMAGE_NT_HEADERS)RtlImageDirectoryEntryToData(*(PVOID *)(this + 104), 1u, 1u, &Size);
      }
    }
  }
  return v2;
}
