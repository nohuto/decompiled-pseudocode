/*
 * XREFs of ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x18006CA78
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x18006C910 (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180078C60 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTestMode@@SA_NXZ @ 0x180065384 (-IsEnabled@ISMTestMode@@SA_NXZ.c)
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x18006C464 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x18008900C (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 */

void __fastcall MPCGamepadInputHelper::UpdateGamepadFocus(MPCGamepadInputHelper *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  const char *v5; // r9
  unsigned int v6; // edi
  bool v7; // [rsp+50h] [rbp-28h] BYREF
  bool v8; // [rsp+88h] [rbp+10h] BYREF
  bool v9; // [rsp+90h] [rbp+18h] BYREF
  bool v10; // [rsp+98h] [rbp+20h] BYREF

  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) != 1
    || (*((_BYTE *)MPCHolographicInputManager::GetInstance() + 2640) & 2) != 0
    || *((_BYTE *)this + 1)
    || *((_BYTE *)this + 40)
    || *((_BYTE *)this + 38) )
  {
    v6 = 0;
  }
  else if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365)
         || !*((_BYTE *)this + 39) && (!*(_BYTE *)this || *((_BYTE *)this + 41)) )
  {
    v6 = *((_DWORD *)this + 7);
  }
  else
  {
    v6 = *((_DWORD *)this + 6);
  }
  if ( !ISMTestMode::IsEnabled(v3, v2, v4, v5) && v6 != *((_DWORD *)this + 8) )
  {
    *((_DWORD *)this + 8) = v6;
    v7 = v6 != 0;
    SetGameControllerMpcFocusOverride(v6);
    v8 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365);
    v9 = (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 660) & 2) != 0;
    v10 = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) == 1;
    ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus<bool &,unsigned long &,bool,bool,bool &,bool,bool &,bool &,bool &,bool &>(
      &v7,
      (unsigned int *)this + 8,
      &v10,
      &v9,
      (bool *)this + 1,
      &v8,
      (bool *)this + 39,
      (bool *)this,
      (bool *)this + 41,
      (bool *)this + 40);
  }
}
