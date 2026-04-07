/*
 * XREFs of ?StartupBegin@CWindowList@@AEAAJXZ @ 0x180051EB0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180015780 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000F580 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003887C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180051F50 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x180051F74 (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::StartupBegin(CWindowList *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GetDesktopID(1LL, &v7);
  v2 = CDesktopManager::SendSwitchModeCommand(v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x17A5u);
  }
  else
  {
    v4 = CDesktopManager::EnsureDCompResources(CDesktopManager::s_pDesktopManagerInstance);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x17A8u);
    }
    else
    {
      *((_BYTE *)this + 600) = (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) == 0;
      CDesktopManager::SetPreferences(v5);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v3;
}
