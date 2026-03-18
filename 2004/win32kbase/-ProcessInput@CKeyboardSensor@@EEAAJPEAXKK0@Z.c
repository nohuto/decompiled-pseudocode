/*
 * XREFs of ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C01A8130
 * Callers:
 *     <none>
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x1C015AE40 (RIMRefreshDeviceAttributes.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C019F3A8 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A0B60 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 */

__int64 __fastcall CKeyboardSensor::ProcessInput(char **this, _WORD *a2, __int64 a3, __int64 a4, char *a5)
{
  unsigned int v6; // ebp
  unsigned __int8 v8; // si
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v10; // rcx

  v6 = a4;
  v8 = (unsigned __int16)(*a2 + 3) <= 1u;
  DeviceInfo = CBaseInput::FindDeviceInfo((CBaseInput *)this, a5, v8, a4);
  if ( DeviceInfo && (unsigned int)CKeyboardProcessor::ProcessInput(v10, (__int64)DeviceInfo, (__int64)a2, v6, v8) == 1 )
    RIMRefreshDeviceAttributes(this[1], a5);
  return 0LL;
}
