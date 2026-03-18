/*
 * XREFs of ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C01B4FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C01A68C0 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01B5010 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 */

__int64 __fastcall CMouseSensor::ProcessInput(
        CMouseSensor *this,
        struct _MOUSE_INPUT_DATA *a2,
        __int64 a3,
        unsigned int a4,
        char *a5)
{
  bool v8; // si
  struct DEVICEINFO *DeviceInfo; // rdx
  __int64 result; // rax

  v8 = a2->UnitId == 0xFFFE;
  DeviceInfo = CBaseInput::FindDeviceInfo(this, a5, v8);
  result = 0LL;
  if ( DeviceInfo )
    return CMouseSensor::ProcessInputWithRateLimitingIfEnabled(this, DeviceInfo, a2, a4, v8);
  return result;
}
