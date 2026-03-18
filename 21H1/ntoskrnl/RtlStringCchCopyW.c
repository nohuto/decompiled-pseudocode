/*
 * XREFs of RtlStringCchCopyW @ 0x14036E430
 * Callers:
 *     PopLogNotifyDevice @ 0x14057103C (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1405BAD30 (SdbpGetPathAppPatchPreRS3.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140732DF8 (PnpNotifyUserModeDeviceRemoval.c)
 *     AslpEnvResolveVars @ 0x14073CA00 (AslpEnvResolveVars.c)
 *     WmipMangleInstanceName @ 0x140740D38 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x140743318 (AslStringDuplicate.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1407433F0 (_CmGetDeviceContainerIdFromBase.c)
 *     SdbpCreateSearchDBContext @ 0x1407438B0 (SdbpCreateSearchDBContext.c)
 *     PipMakeGloballyUniqueId @ 0x140757BAC (PipMakeGloballyUniqueId.c)
 *     AslPathSplit @ 0x14076A718 (AslPathSplit.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140798B20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140798E80 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140799170 (_CmDeviceClassesSubkeyCallback.c)
 *     AslpFileQueryVersionString @ 0x14079AB40 (AslpFileQueryVersionString.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 *     PpmRegisterProfiles @ 0x1407B03A8 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140884720 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408DFE60 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1408F7550 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1408F88C0 (TtmpPublishDeviceEvent.c)
 *     AslPathCombine @ 0x140963E1C (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x1409640FC (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1409658EC (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140965B58 (AslEnvGetSystem32DirPathBuf.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140979870 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140A54148 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax
  NTSTRSAFE_PWSTR v7; // rax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    if ( cchDest )
    {
      v4 = 2147483646 - cchDest;
      v5 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v4 + cchDest) )
          break;
        v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
        if ( !v6 )
          break;
        *pszDest++ = v6;
        --cchDest;
      }
      while ( cchDest );
    }
    v7 = pszDest - 1;
    if ( cchDest )
      v7 = pszDest;
    v3 = cchDest == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return v3;
}
