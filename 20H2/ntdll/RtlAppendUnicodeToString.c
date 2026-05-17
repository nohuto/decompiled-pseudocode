/*
 * XREFs of RtlAppendUnicodeToString @ 0x180037990
 * Callers:
 *     LdrpFindKnownDll @ 0x1800150E0 (LdrpFindKnownDll.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     GetOverlayRootFolder @ 0x180038344 (GetOverlayRootFolder.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044080 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18004595C (RtlpGetRegistryHandle.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180046434 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     GetOverlayFilePath @ 0x18004CFBC (GetOverlayFilePath.c)
 *     WerpGlobalFlagsForProcess @ 0x180060794 (WerpGlobalFlagsForProcess.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B340 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800826E4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpLoadWow64 @ 0x180083114 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA69C (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAFF8 (AVrfpLoadAndInitializeProvider.c)
 *     WerEscalationLazyInit @ 0x1800DE408 (WerEscalationLazyInit.c)
 *     LdrpMUIEtwOutput @ 0x1800E16F4 (LdrpMUIEtwOutput.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F5D4C (RtlpConstructCrossVmObjectPath.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119D58 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  void *v5; // r14

  if ( !a2 )
    return 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = (unsigned __int16)(2 * v3);
    if ( *a1 + v4 <= a1[1] )
    {
      v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v5, a2, (unsigned __int16)(2 * v3));
      *a1 += v4;
      if ( (unsigned int)*a1 + 1 < a1[1] )
        *((_WORD *)v5 + ((unsigned __int64)v4 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
