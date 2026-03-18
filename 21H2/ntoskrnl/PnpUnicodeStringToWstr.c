/*
 * XREFs of PnpUnicodeStringToWstr @ 0x140779CA0
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406EA694 (PnpGetDeviceInterfacePropertyData.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140748FA4 (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140769668 (IopBuildGlobalSymbolicLinkString.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14076B030 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14076B1A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDeviceRegistration @ 0x14076B5DC (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x14076B788 (PpForEachDeviceInstanceDriver.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14077BB00 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x1407879A8 (IopGetDeviceInterfaces.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14080D8A8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpDisableDeviceInterfaces @ 0x140810788 (PnpDisableDeviceInterfaces.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x140851A60 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x140944640 (PnpDeleteDeviceInterfaces.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  __int16 *Pool2; // rax
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
    Pool2 = (__int16 *)ExAllocatePool2(256LL, (unsigned int)(v9 + 2), 1970499664LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *((const void **)a3 + 1), *a3);
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
  v17 = (__int16 *)ExAllocatePool2(256LL, 2LL, 1970499664LL);
  if ( !v17 )
    return (unsigned int)-1073741670;
  *v17 = 0;
  *a1 = v17;
  if ( a2 )
    *a2 = 2;
  return v3;
}
