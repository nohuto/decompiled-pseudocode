/*
 * XREFs of ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001F090
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x180014770 (-SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B50C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18001E510 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001F228 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 * Callees:
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x180012138 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001E6B8 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::SilenceAndRevokePLMExemption(CApplicationManager *this, struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_DWORD *)a2 + 141) = 0;
  *((_DWORD *)a2 + 142) = 0;
  *((_DWORD *)a2 + 143) = 0;
  *((_DWORD *)a2 + 144) = 0;
  *((_DWORD *)a2 + 145) = 0;
  *((_DWORD *)a2 + 146) = 0;
  *((_DWORD *)a2 + 147) = 1;
  CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
  CApplicationManager::ApplyPBMPolicy(this, a2, 0xD1u, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
}
