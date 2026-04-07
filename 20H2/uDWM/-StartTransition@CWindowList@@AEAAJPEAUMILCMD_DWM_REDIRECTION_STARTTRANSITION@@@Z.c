/*
 * XREFs of ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180031718
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800317E0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x1800316A0 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180040EE4 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180084878 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CWindowList::StartTransition(CWindowList *this, struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *a2)
{
  __int64 v3; // rcx
  const struct _GUID *v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v10 = 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmBeginTransitionRequest, *((unsigned int *)a2 + 1));
  v5 = *((_QWORD *)a2 + 1) - v10;
  if ( !v5 )
    v5 = *((_QWORD *)a2 + 2) - *((_QWORD *)&v10 + 1);
  if ( v5 )
  {
    v4 = (const struct _GUID *)((char *)a2 + 8);
    CWindowList::BeginTelemetryScenario(
      (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)((char *)a2 + 8),
      (const struct _GUID *)((char *)a2 + 8),
      *((_QWORD *)a2 + 5));
  }
  v6 = CAnimationScheduler::OnBeginTransitionRequest(
         *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
         *((_DWORD *)a2 + 1),
         v4,
         (struct _GUID *)((char *)a2 + 24));
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1185u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v7;
}
