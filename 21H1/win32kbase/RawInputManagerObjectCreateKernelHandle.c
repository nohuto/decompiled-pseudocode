/*
 * XREFs of RawInputManagerObjectCreateKernelHandle @ 0x1C0057210
 * Callers:
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0057070 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C00571D0 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0170644 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0170910 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectCreateKernelHandle(
        _DWORD *a1,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  __int64 v5; // rcx
  NTSTATUS v6; // ebx

  *Handle = (void *)-1LL;
  if ( a1[1] == 1 )
  {
    v6 = ObOpenObjectByPointer(a1, 2 * a3 + 512, 0LL, a2, ExRawInputManagerObjectType, AccessMode, Handle);
    if ( v6 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v6;
}
