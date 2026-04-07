/*
 * XREFs of ?ModeChange@CWindowList@@AEAAJXZ @ 0x180097F7C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180015780 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180035FC0 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ModeChange(CWindowList *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v1 = CDesktopManager::ModeChange(CDesktopManager::s_pDesktopManagerInstance);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x17D1u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
