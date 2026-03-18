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

__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(unsigned __int64 a1)
{
  int v2; // edx
  _DWORD *v3; // r8
  __int64 v4; // r8
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v7);
  if ( !a1 )
    return 0LL;
  LOBYTE(v2) = 1;
  v3 = (_DWORD *)RtlImageDirectoryEntryToData(a1, v2, 10, (int)&v6);
  if ( a1 < 0x7FFFFFFEFFFFLL && ((unsigned __int64)(v3 + 1) > 0x7FFFFFFF0000LL || v3 + 1 < v3) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( v3 && v6 && v6 == *v3 && RtlWow64GetEquivalentMachineCHPE(*(_WORD *)(v7 + 4)) == -31132 )
    return v4;
  else
    return 0LL;
}
