/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x140756028
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402E73C4 (RtlGuardCheckExceptionHandler.c)
 *     RtlIsImageFullyRetpolined @ 0x1403713B0 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B5930 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403B59DC (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1403F6D68 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058DA38 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140755F8C (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14079AE70 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140297270 (RtlImageNtHeaderEx.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1402E545C (RtlWow64GetEquivalentMachineCHPE.c)
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(PVOID BaseOfImage)
{
  _DWORD *v2; // r8
  __int64 v3; // r8
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  Size = 0;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  if ( !BaseOfImage )
    return 0LL;
  v2 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( (unsigned __int64)BaseOfImage < 0x7FFFFFFEFFFFLL
    && ((unsigned __int64)(v2 + 1) > 0x7FFFFFFF0000LL || v2 + 1 < v2) )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( v2 && Size && Size == *v2 && RtlWow64GetEquivalentMachineCHPE(OutHeaders->FileHeader.Machine) == -31132 )
    return v3;
  else
    return 0LL;
}
