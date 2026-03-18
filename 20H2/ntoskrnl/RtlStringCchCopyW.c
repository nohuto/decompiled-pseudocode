/*
 * XREFs of RtlStringCchCopyW @ 0x140370FB0
 * Callers:
 *     PopLogNotifyDevice @ 0x1405750BC (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1405BEFB0 (SdbpGetPathAppPatchPreRS3.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14073FDC4 (PnpNotifyUserModeDeviceRemoval.c)
 *     AslpEnvResolveVars @ 0x14074D164 (AslpEnvResolveVars.c)
 *     WmipMangleInstanceName @ 0x140751498 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x140753A78 (AslStringDuplicate.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140753B50 (_CmGetDeviceContainerIdFromBase.c)
 *     SdbpCreateSearchDBContext @ 0x140754010 (SdbpCreateSearchDBContext.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     AslPathSplit @ 0x14077B8E8 (AslPathSplit.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407A7C00 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1407A7F60 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407A8250 (_CmDeviceClassesSubkeyCallback.c)
 *     AslpFileQueryVersionString @ 0x1407AE240 (AslpFileQueryVersionString.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     PpmRegisterProfiles @ 0x1407C1468 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14088B590 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408E6F20 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmNotifyDeviceArrival @ 0x1408FE450 (TtmNotifyDeviceArrival.c)
 *     TtmpPublishDeviceEvent @ 0x1408FF7C0 (TtmpPublishDeviceEvent.c)
 *     AslPathCombine @ 0x14096AF8C (AslPathCombine.c)
 *     AslPathWildcardFindFirst @ 0x14096B26C (AslPathWildcardFindFirst.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14096CA5C (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14096CCC8 (AslEnvGetSystem32DirPathBuf.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409809E0 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140A5A548 (IopStoreSystemPartitionInformation.c)
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
