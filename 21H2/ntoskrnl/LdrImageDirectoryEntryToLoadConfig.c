/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x14075AEA4
 * Callers:
 *     RtlGuardRestoreContext @ 0x140294C30 (RtlGuardRestoreContext.c)
 *     RtlIsImageFullyRetpolined @ 0x1402D9A20 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1403C3840 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1403C38EC (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1405EEB40 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405EEC28 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14075C190 (LdrpFetchAddressOfSecurityCookie.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14082CB7C (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(unsigned __int64 a1)
{
  int v2; // edx
  _DWORD *v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v6);
  if ( !a1 )
    return 0LL;
  LOBYTE(v2) = 1;
  v3 = (_DWORD *)RtlImageDirectoryEntryToData(a1, v2, 10, (int)&v5);
  if ( a1 < 0x7FFFFFFEFFFFLL && ((unsigned __int64)(v3 + 1) > 0x7FFFFFFF0000LL || v3 + 1 < v3) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( v3 && v5 && v5 == *v3 && *(_WORD *)(v6 + 4) == 0x8664 )
    return v3;
  else
    return 0LL;
}
