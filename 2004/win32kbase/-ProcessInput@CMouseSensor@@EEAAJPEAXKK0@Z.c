/*
 * XREFs of ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C01AF240
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A0B60 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01AF2B0 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 */

__int64 __fastcall CMouseSensor::ProcessInput(
        CMouseSensor *this,
        struct _MOUSE_INPUT_DATA *a2,
        __int64 a3,
        __int64 a4,
        char *a5)
{
  unsigned int v6; // ebp
  bool v8; // si
  struct DEVICEINFO *DeviceInfo; // rdx
  __int64 result; // rax

  v6 = a4;
  v8 = a2->UnitId == 0xFFFE;
  DeviceInfo = CBaseInput::FindDeviceInfo(this, a5, v8, a4);
  result = 0LL;
  if ( DeviceInfo )
    return CMouseSensor::ProcessInputWithRateLimitingIfEnabled(this, DeviceInfo, a2, v6, v8);
  return result;
}
