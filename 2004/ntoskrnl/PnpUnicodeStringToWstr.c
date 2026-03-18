/*
 * XREFs of PnpUnicodeStringToWstr @ 0x1405DAEAC
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1405D8DB0 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x1406BE69C (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x140719730 (IoGetDeviceInterfaceAlias.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14072C768 (IopDeviceObjectFromSymbolicName.c)
 *     PiDeviceRegistration @ 0x140733D1C (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140733ED0 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407349E4 (IopBuildGlobalSymbolicLinkString.c)
 *     IoRegisterDeviceInterface @ 0x140734E90 (IoRegisterDeviceInterface.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073D14C (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14073D2AC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDeviceInterfaces @ 0x14075C4DC (PnpDisableDeviceInterfaces.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14076B308 (PnpSetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407AEBF0 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407BA2C0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x14089AFD4 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14089C7A8 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14089F860 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
