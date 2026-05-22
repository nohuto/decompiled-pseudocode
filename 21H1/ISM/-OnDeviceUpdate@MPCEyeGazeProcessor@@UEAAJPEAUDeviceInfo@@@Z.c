/*
 * XREFs of ?OnDeviceUpdate@MPCEyeGazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180197960
 * Callers:
 *     <none>
 * Callees:
 *     ?OnETCalibrationRequested@MPCManager@@QEAAXI@Z @ 0x1800734E0 (-OnETCalibrationRequested@MPCManager@@QEAAXI@Z.c)
 */

__int64 __fastcall MPCEyeGazeProcessor::OnDeviceUpdate(MPCEyeGazeProcessor *this, struct DeviceInfo *a2)
{
  unsigned int v2; // edx

  if ( *((_DWORD *)a2 + 2) == 1548 )
  {
    v2 = *((_DWORD *)a2 + 371);
    if ( v2 != *((_DWORD *)this + 1156) )
    {
      *((_DWORD *)this + 1156) = v2;
      if ( v2 )
        MPCManager::OnETCalibrationRequested(MPCManager::s_instance, v2);
    }
  }
  return 0LL;
}
