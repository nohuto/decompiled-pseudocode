/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x14075D09C
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402652A4 (RtlGuardCheckExceptionHandler.c)
 *     RtlIsImageFullyRetpolined @ 0x140371978 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B70E0 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403B718C (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1403F88D8 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058F678 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14075D000 (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A5590 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x140269590 (RtlWow64GetEquivalentMachineCHPE.c)
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1403276D0 (RtlImageNtHeaderEx.c)
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
