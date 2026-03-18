/*
 * XREFs of _RegRtlQueryValue @ 0x140617A84
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x14069F4C0 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406B057C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1406B1148 (_PnpCtxRegQueryValue.c)
 *     PiCMValidateDeviceInstance @ 0x1406B1A38 (PiCMValidateDeviceInstance.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406B26CC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406B4430 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071A334 (DrvDbSetDriverPackageMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1407219E8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140722E94 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PnpGetServiceStartType @ 0x140728404 (PnpGetServiceStartType.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14073B7D0 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x140741D50 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x140743588 (_CmIsDeviceInContainer.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1407516C0 (_PnpGetGenericStorePropertyKeys.c)
 *     _SysCtxOpenControlSet @ 0x14078BFF4 (_SysCtxOpenControlSet.c)
 *     PipHardwareConfigGetIndex @ 0x140792FB4 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140793044 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140799170 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x1408972C0 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x14089D628 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14089E76C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B2298 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B26D4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x140973000 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140978B14 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140978F88 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140979114 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1409792A0 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v6; // rsi
  NTSTATUS inited; // ebx
  char *p_KeyValueInformation; // rdi
  ULONG Length; // ebx
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-D0h] BYREF

  v6 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      Length = *a5 + 12;
      if ( Length < 0xC )
        return (unsigned int)-1073741675;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      p_KeyValueInformation = (char *)PoolWithTag;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v12 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v12;
    if ( !v12 || v12 == -2147483643 )
    {
      v13 = *a5;
      v14 = *((_DWORD *)p_KeyValueInformation + 2);
      *a5 = v14;
      if ( v13 < v14 )
        inited = -1073741789;
      else
        memmove(a4, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      if ( a3 )
        *a3 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)inited;
}
