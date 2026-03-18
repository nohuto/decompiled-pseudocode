/*
 * XREFs of PnpUnicodeStringToWstr @ 0x14063F78C
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x14063D690 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x140727720 (IoGetDeviceInterfaceAlias.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073B1E4 (IopDeviceObjectFromSymbolicName.c)
 *     PiDeviceRegistration @ 0x1407431AC (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140743360 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140743E74 (IopBuildGlobalSymbolicLinkString.c)
 *     IoRegisterDeviceInterface @ 0x140744320 (IoRegisterDeviceInterface.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14074C05C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14074C1BC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDeviceInterfaces @ 0x14076AC4C (PnpDisableDeviceInterfaces.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14077A0C8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407BCB30 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407C8B50 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x1408A0B04 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x1408A22D8 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A5390 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpUnicodeStringToWstr(__int16 **a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int16 *v8; // rcx
  unsigned __int64 v9; // r9
  __int16 v10; // ax
  unsigned __int64 v11; // r8
  int v12; // ebp
  __int16 *PoolWithTag; // rax
  __int16 *v14; // r15
  unsigned __int64 v15; // rax
  __int16 *v17; // rax

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = a3[1];
  if ( (unsigned __int16)v7 < 2u || (v8 = (__int16 *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    *a1 = 0LL;
    if ( a2 )
      *a2 = 0;
    return v3;
  }
  v9 = *a3;
  if ( (unsigned __int16)v9 > (unsigned __int16)v7 )
    return (unsigned int)-1073741811;
  v10 = *v8;
  if ( (_WORD)v9 )
  {
    if ( !v10 )
      goto LABEL_17;
    v11 = (unsigned __int64)*a3 >> 1;
    if ( (_WORD)v9 == (_WORD)v7 && !v8[v11 - 1] )
      goto LABEL_17;
    if ( v9 <= v7 - 2 && (!v8[v11 - 1] || !v8[v11]) )
      goto LABEL_17;
    v12 = v9 + 2;
    PoolWithTag = (__int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v9 + 2), 0x75737050u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)a3 + 1), *a3);
      v15 = (unsigned __int64)*a3 >> 1;
      *a1 = v14;
      v14[v15] = 0;
      if ( a2 )
        *a2 = v12;
      return v3;
    }
    return (unsigned int)-1073741670;
  }
  if ( !v10 )
  {
LABEL_17:
    *a1 = v8;
    if ( a2 )
      *a2 = v7;
    return v3;
  }
  v17 = (__int16 *)ExAllocatePoolWithTag(PagedPool, 2uLL, 0x75737050u);
  if ( !v17 )
    return (unsigned int)-1073741670;
  *v17 = 0;
  *a1 = v17;
  if ( a2 )
    *a2 = 2;
  return v3;
}
