/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x1402FF2D4
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1406BEB70 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchDeviceInterface @ 0x1406BEC80 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x1406BEE10 (_PnpDispatchDevice.c)
 *     _PnpDispatchInstallerClass @ 0x14074B800 (_PnpDispatchInstallerClass.c)
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
