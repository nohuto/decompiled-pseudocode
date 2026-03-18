/*
 * XREFs of _RegRtlQueryValue @ 0x1405E194C
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x1405D00B0 (_PnpRegQueryValueIndirect.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406BE310 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406C1168 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1406C1CD8 (PiCMValidateDeviceInstance.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406C525C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1406C54FC (_PnpCtxRegQueryValue.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140714730 (DrvDbSetDriverPackageMappedProperty.c)
 *     PnpGetServiceStartType @ 0x140728B30 (PnpGetServiceStartType.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14073D350 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407438D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x140745108 (_CmIsDeviceInContainer.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14074C5BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14074CBC4 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140755D50 (_PnpGetGenericStorePropertyKeys.c)
 *     PipHardwareConfigGetIndex @ 0x14078BDE4 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14078BE74 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _SysCtxOpenControlSet @ 0x14078DEC4 (_SysCtxOpenControlSet.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140798F20 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x1408985E0 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x14089E948 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14089FA8C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B3018 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B35B8 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B39F4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x1409743A0 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140979EB4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14097A328 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14097A4B4 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14097A640 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
