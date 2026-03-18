/*
 * XREFs of RtlImageNtHeaderEx @ 0x14027DB10
 * Callers:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14033AAC8 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiProcessKernelCfgImage @ 0x14036E7CC (MiProcessKernelCfgImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403AD3EC (RtlpCaptureDynamicRelocationTableRva.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406D736C (EtwpLocateDbgIdForRegEntry.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x1406EEFDC (MiCaptureDynamicRelocationTableRva.c)
 *     LdrpResGetMappingSize @ 0x1406FB06C (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1406FBE44 (LdrpResGetResourceDirectory.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14074582C (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407458C8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14078C860 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiOpenHotPatchFile @ 0x1408C81B8 (MiOpenHotPatchFile.c)
 *     LdrRelocateImageWithBias @ 0x140914D04 (LdrRelocateImageWithBias.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C5798 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  char v5; // al
  unsigned __int64 v6; // rcx
  _DWORD *v7; // rax

  if ( !a4 )
    return (unsigned int)-1073741811;
  v4 = 0;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFE) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( (a1 & 1) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 == 23117 )
  {
    v6 = *(unsigned int *)(a2 + 60);
    if ( !v5 || v6 < a3 && (unsigned int)v6 < 0xFFFFFFE7 && v6 + 24 < a3 )
    {
      v7 = (_DWORD *)(a2 + v6);
      if ( a2 + v6 >= a2
        && (a2 >= 0x7FFFFFFEFFFFLL
         || (unsigned __int64)v7 < 0x7FFFFFFEFFFFLL && (unsigned __int64)(v7 + 66) < 0x7FFFFFFEFFFFLL)
        && *v7 == 17744 )
      {
        *a4 = v7;
        return v4;
      }
    }
  }
  return 3221225595LL;
}
