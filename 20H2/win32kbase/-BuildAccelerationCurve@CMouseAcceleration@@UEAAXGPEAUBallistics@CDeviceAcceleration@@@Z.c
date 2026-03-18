/*
 * XREFs of ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C00AF030
 * Callers:
 *     <none>
 * Callees:
 *     ?_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z @ 0x1C00AF0CC (-_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00AF1B0 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 */

void __fastcall CMouseAcceleration::BuildAccelerationCurve(
        CMouseAcceleration *this,
        unsigned __int16 a2,
        struct CDeviceAcceleration::Ballistics *a3)
{
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO *v6; // rcx
  unsigned int MouseSensitivity; // eax

  if ( *((_BYTE *)this + 8) )
  {
    v6 = (CMouseAcceleration *)((char *)this + 104);
    if ( (unsigned int)(*(_DWORD *)v6 - 1) <= 0x13 )
    {
      MouseSensitivity = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(v6);
      CDeviceAcceleration::_BuildAccelerationCurve(this, a3, a2, MouseSensitivity);
    }
  }
}
