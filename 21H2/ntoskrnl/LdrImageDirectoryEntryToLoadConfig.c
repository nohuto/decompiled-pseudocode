/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x14075CEDC
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x140277304 (RtlGuardCheckExceptionHandler.c)
 *     RtlIsImageFullyRetpolined @ 0x140371E28 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403B6F70 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403B701C (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1403F88A8 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058F448 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14075CE40 (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A5390 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402532D0 (RtlImageDirectoryEntryToData.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x14027B5F0 (RtlWow64GetEquivalentMachineCHPE.c)
 *     RtlImageNtHeaderEx @ 0x14031C980 (RtlImageNtHeaderEx.c)
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
