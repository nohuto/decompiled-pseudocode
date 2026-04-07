/*
 * XREFs of ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800980C0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180015780 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180097104 (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009BE9C (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENT.c)
 */

__int64 __fastcall CWindowList::OnWindowArrangementContinue(
        CWindowArrangementTransition **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = CWindowList::EnsureWindowArrangementTransition((CWindowList *)this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CWindowArrangementTransition::OnWindowArrangementContinue(this[64], a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1ACFu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1ACEu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v5;
}
