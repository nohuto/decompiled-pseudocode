/*
 * XREFs of DeviceSlot_DisableAllDeviceSlots @ 0x1C000A11C
 * Callers:
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000AB5C (DeviceSlot_D0EntryCleanupState.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0035830 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     UsbDevice_SetDeviceDisabled @ 0x1C000A1DC (UsbDevice_SetDeviceDisabled.c)
 */

__int64 __fastcall DeviceSlot_DisableAllDeviceSlots(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    if ( *(_BYTE *)(a1 + 80) )
      v3 = *(_QWORD *)(a1 + 24);
    else
      v3 = *(_QWORD *)(a1 + 72);
    result = i;
    if ( *(_QWORD *)(v3 + 8LL * i) )
      result = UsbDevice_SetDeviceDisabled();
  }
  return result;
}
