/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x140332CA0
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1406E94B0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchDeviceInterface @ 0x1406E95C0 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x1406E9750 (_PnpDispatchDevice.c)
 *     _PnpDispatchInstallerClass @ 0x14075A3E0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMapCmStatusToDispatchStatus(unsigned int a1)
{
  if ( a1 != -1073741810 )
  {
    if ( a1 == -1073741767 )
      return 3221225523LL;
    if ( a1 != -1073741766 )
    {
      if ( a1 == -1073741637 )
        return 3221226021LL;
      if ( a1 != -1073741632 && a1 != -1073741127 )
        return a1;
    }
  }
  return 3221225524LL;
}
