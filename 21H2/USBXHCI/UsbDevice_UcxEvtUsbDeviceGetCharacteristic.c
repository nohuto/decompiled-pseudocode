/*
 * XREFs of UsbDevice_UcxEvtUsbDeviceGetCharacteristic @ 0x1C00479A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUsbDeviceGetCharacteristic(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( a3[1] == 1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
      WdfDriverGlobals,
      a1,
      off_1C0061428);
    a3[2] = 2;
    a3[3] = 4;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
