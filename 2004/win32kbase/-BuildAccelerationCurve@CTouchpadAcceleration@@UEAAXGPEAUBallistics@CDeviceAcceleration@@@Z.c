/*
 * XREFs of ?BuildAccelerationCurve@CTouchpadAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C004E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z @ 0x1C004E1FC (-_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z.c)
 */

void __fastcall CTouchpadAcceleration::BuildAccelerationCurve(
        CTouchpadAcceleration *this,
        unsigned __int16 a2,
        struct CDeviceAcceleration::Ballistics *a3)
{
  unsigned int v3; // r9d

  if ( *((_BYTE *)this + 8) )
  {
    v3 = qword_1C024AFC0;
    if ( !qword_1C024AFC0 )
    {
      v3 = *((_DWORD *)this + 24);
      qword_1C024AFC0 = v3;
    }
    CDeviceAcceleration::_BuildAccelerationCurve(
      this,
      (struct CDeviceAcceleration::Ballistics *)((char *)a3 + 144),
      a2,
      v3);
  }
}
