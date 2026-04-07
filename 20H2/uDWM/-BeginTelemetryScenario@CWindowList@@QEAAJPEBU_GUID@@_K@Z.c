/*
 * XREFs of ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180040EE4
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800253FC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180031718 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800AC874 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BeginTelemetryScenario(CWindowList *this, const struct _GUID *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  int v6; // eax
  _QWORD v7[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+50h] [rbp-28h]

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
  {
    v7[0] = 0LL;
    v7[1] = a3;
    v9 = 0LL;
    v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
    v8 = 0LL;
    LODWORD(v7[0]) = 4198400;
    LOWORD(v9) = 48;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, const struct _GUID *))(**(_QWORD **)(v5 + 16) + 208LL))(
           *(_QWORD *)(v5 + 16),
           v7,
           48LL,
           a2);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x115Fu);
  }
  return v3;
}
