/*
 * XREFs of ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18006C9D0
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1801925F0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCGamepadInputHelper::ShouldHandleMPCInput(MPCGamepadInputHelper *this)
{
  char v2; // bl

  v2 = 1;
  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) != 1
    || (*((_BYTE *)MPCHolographicInputManager::GetInstance() + 2640) & 2) != 0
    || *(_BYTE *)this && !*((_BYTE *)this + 41) )
  {
    return 0;
  }
  return v2;
}
