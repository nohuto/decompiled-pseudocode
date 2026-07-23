/*
 * XREFs of RtlImageNtHeaderEx @ 0x140297270
 * Callers:
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1402FD978 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiProcessKernelCfgImage @ 0x14037134C (MiProcessKernelCfgImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403B59DC (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrpResGetMappingSize @ 0x1406AE6EC (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1406AF4C4 (LdrpResGetResourceDirectory.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406AFC40 (EtwpLocateDbgIdForRegEntry.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14070E90C (MiCaptureDynamicRelocationTableRva.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140755F8C (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140756028 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14079AE70 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiOpenHotPatchFile @ 0x1408CF348 (MiOpenHotPatchFile.c)
 *     LdrRelocateImageWithBias @ 0x14091BBA4 (LdrRelocateImageWithBias.c)
 *     VfDriverEnableVerifierForAll @ 0x1409CB7C8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS v4; // r10d
  char v5; // al
  ULONG64 v6; // rcx
  _IMAGE_NT_HEADERS64 *v7; // rax

  if ( !OutHeaders )
    return -1073741811;
  v4 = 0;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage == 23117 )
  {
    v6 = *((unsigned int *)BaseOfImage + 15);
    if ( !v5 || v6 < Size && (unsigned int)v6 < 0xFFFFFFE7 && v6 + 24 < Size )
    {
      v7 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v6);
      if ( (char *)BaseOfImage + v6 >= BaseOfImage
        && ((unsigned __int64)BaseOfImage >= 0x7FFFFFFEFFFFLL
         || (unsigned __int64)v7 < 0x7FFFFFFEFFFFLL && (unsigned __int64)&v7[1] < 0x7FFFFFFEFFFFLL)
        && v7->Signature == 17744 )
      {
        *OutHeaders = v7;
        return v4;
      }
    }
  }
  return -1073741701;
}
