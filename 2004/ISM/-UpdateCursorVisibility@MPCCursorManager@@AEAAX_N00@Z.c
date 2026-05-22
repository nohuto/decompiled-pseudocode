/*
 * XREFs of ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18007C580
 * Callers:
 *     ??_GMPCCursorManager@@QEAAPEAXI@Z @ 0x1800754C0 (--_GMPCCursorManager@@QEAAPEAXI@Z.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180075628 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x18007C098 (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18007C618 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x18007C130 (-Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x18007C500 (-Update2DCursor@MPCCursorManager@@AEAAX_N@Z.c)
 */

void __fastcall MPCCursorManager::UpdateCursorVisibility(
        MPCCursorManager *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4)
{
  int v6; // r8d
  char v7; // al

  v6 = (4 * a3) | (*((_BYTE *)this + 56) != 0 ? 8 : 0) | (*((_BYTE *)this + 65) != 0 ? 0x10 : 0) | ((a2 | *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2366)) != 0
                                                                                                  ? 2
                                                                                                  : 0);
  if ( *((_DWORD *)this + 15) != v6 || a4 )
  {
    *((_DWORD *)this + 15) = v6;
    v7 = MPCCursorManager::Is2DCursorVisible(this);
    MPCCursorManager::Update2DCursor(this, v7);
  }
}
