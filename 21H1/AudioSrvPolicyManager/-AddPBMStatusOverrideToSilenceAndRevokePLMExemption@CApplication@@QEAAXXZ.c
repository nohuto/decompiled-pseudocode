/*
 * XREFs of ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x180017A98
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180024018 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800249F0 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180025364 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x180032380 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(CApplication *this)
{
  if ( *((_DWORD *)this + 141) != 1 )
  {
    *((_DWORD *)this + 143) = 0;
    *((_DWORD *)this + 145) = 0;
    *((_DWORD *)this + 141) = 1;
    *((_DWORD *)this + 142) = 1;
    *((_DWORD *)this + 144) = 1;
    *((_DWORD *)this + 146) = 1;
    *((_DWORD *)this + 147) = 1;
  }
}
