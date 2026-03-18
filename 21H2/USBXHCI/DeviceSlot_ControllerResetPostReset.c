/*
 * XREFs of DeviceSlot_ControllerResetPostReset @ 0x1C0036250
 * Callers:
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 * Callees:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C000D15C (DeviceSlot_DisableAllDeviceSlots.c)
 *     DeviceSlot_Initialize @ 0x1C0014604 (DeviceSlot_Initialize.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0036A14 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     UsbDevice_ControllerResetPostReset @ 0x1C0045F3C (UsbDevice_ControllerResetPostReset.c)
 */

__int64 __fastcall DeviceSlot_ControllerResetPostReset(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 *j; // rdi

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    if ( *(_BYTE *)(a1 + 80) )
      v3 = *(_QWORD *)(a1 + 24);
    else
      v3 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v3 + 8LL * i) )
      UsbDevice_ControllerResetPostReset();
  }
  DeviceSlot_DisableAllDeviceSlots(a1);
  if ( *(_BYTE *)(a1 + 80) )
  {
    XilDeviceSlot_InitializeSecureScratchpadBuffers(a1 + 16);
  }
  else
  {
    for ( j = *(__int64 **)(a1 + 56); j != (__int64 *)(a1 + 56); j = (__int64 *)*j )
      memset((void *)j[2], 0, *((unsigned int *)j + 10));
  }
  return DeviceSlot_Initialize(a1);
}
