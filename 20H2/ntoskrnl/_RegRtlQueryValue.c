/*
 * XREFs of _RegRtlQueryValue @ 0x14066D6DC
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x1406BD070 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406E698C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1406E6C2C (_PnpCtxRegQueryValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406E8C50 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406EBAA8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407222DC (DrvDbSetDriverPackageMappedProperty.c)
 *     PnpGetServiceStartType @ 0x1407375C0 (PnpGetServiceStartType.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14074C260 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407524B0 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x140753CE8 (_CmIsDeviceInContainer.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14075B19C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14075B7A4 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140764990 (_PnpGetGenericStorePropertyKeys.c)
 *     _SysCtxOpenControlSet @ 0x14079A604 (_SysCtxOpenControlSet.c)
 *     PipHardwareConfigGetIndex @ 0x1407A2094 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407A2124 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407A8250 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x14089E110 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x1408A4478 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A55BC (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B8C38 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B91D8 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B9614 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x14097A170 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14097FC84 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1409800F8 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140980284 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140980410 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
