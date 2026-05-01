/*
 * XREFs of CrmStateMonitorStart @ 0x18002B120
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002AE58 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x180030020 (CrmActivityStart.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     CrmStateMonitorListenerAdd @ 0x18002B018 (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BCFC (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmStateMonitorGPUUsageStart @ 0x180037F9C (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorWNFStart @ 0x180042970 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180042D98 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180043658 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180043B44 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180043CC8 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180043E4C (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180043F9C (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x1800441CC (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180044240 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x1800442B4 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180044318 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x1800443C0 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x18004442C (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180044498 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 *     CrmStateMonitorCompositeTestStart @ 0x1800849F0 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x180084E4C (CrmStateMonitorTestStart.c)
 */

__int64 __fastcall CrmStateMonitorStart(_QWORD *CallerContext, __int64 a2, __int64 a3)
{
  int ready; // eax
  __int64 v6; // rdx
  int v7; // edi
  unsigned int v8; // r9d
  GUID *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  const void *v13; // rdx
  unsigned __int16 v14; // ax
  int v15; // r8d
  unsigned int v16; // [rsp+30h] [rbp-59h] BYREF
  int v17; // [rsp+34h] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-49h] BYREF
  UUID *v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  int v21; // [rsp+6Ch] [rbp-1Dh]
  int *v22; // [rsp+70h] [rbp-19h]
  int v23; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+7Ch] [rbp-Dh]
  _DWORD *v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+8Ch] [rbp+3h]
  _BYTE *v28; // [rsp+90h] [rbp+7h]
  _DWORD v29[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v30; // [rsp+A0h] [rbp+17h]
  int v31; // [rsp+A8h] [rbp+1Fh]
  int v32; // [rsp+ACh] [rbp+23h]
  _BYTE v33[16]; // [rsp+B0h] [rbp+27h] BYREF

  CallerContext[6] = MEMORY[0x7FFE0008];
  switch ( *(_DWORD *)CallerContext )
  {
    case 0:
    case 1:
      ready = CrmStateMonitorTestStart(CallerContext);
      goto LABEL_5;
    case 2:
      ready = CrmStateMonitorCompositeTestStart(CallerContext, v33);
      goto LABEL_5;
    case 3:
      v10 = &GUID_GLOBAL_USER_PRESENCE;
      goto LABEL_13;
    case 4:
      v10 = &GUID_ACDC_POWER_SOURCE;
      goto LABEL_13;
    case 5:
      v10 = &GUID_BATTERY_PERCENTAGE_REMAINING;
      goto LABEL_13;
    case 6:
      v10 = &GUID_CONSOLE_DISPLAY_STATE;
      goto LABEL_13;
    case 7:
      v10 = &GUID_POWER_SAVING_STATUS;
      goto LABEL_13;
    case 8:
      v10 = &GUID_LOW_POWER_EPOCH;
LABEL_13:
      ready = CrmStateMonitorPowerSettingsStart(CallerContext, v10, a3, v33);
      goto LABEL_5;
    case 9:
      v6 = WNF_RM_GAME_MODE_ACTIVE;
      goto LABEL_4;
    case 0xA:
      v11 = 10LL;
      goto LABEL_15;
    case 0xB:
      ready = CrmStateMonitorTimeSinceBootStart(CallerContext, v33);
      goto LABEL_5;
    case 0xC:
      ready = CrmStateMonitorTimeSinceLogonStart(CallerContext, v33);
      goto LABEL_5;
    case 0xD:
      v6 = WNF_SEB_INTERNET_PRESENT;
      goto LABEL_4;
    case 0xE:
      v6 = WNF_SEB_FREE_NETWORK_PRESENT;
      goto LABEL_4;
    case 0xF:
      v6 = WNF_SEB_IP_ADDRESS_AVAILABLE;
      goto LABEL_4;
    case 0x10:
      v6 = WNF_XBOX_SYSTEM_CONSTRAINED_MODE_STATUS_CHANGED;
      goto LABEL_4;
    case 0x11:
      v6 = WNF_CNET_NON_CELLULAR_CONNECTED;
      goto LABEL_4;
    case 0x12:
      ready = CrmStateMonitorNetworkStart(CallerContext, v33);
      goto LABEL_5;
    case 0x13:
      ready = CrmStateMonitorPostShellReadyStart(CallerContext, v33);
      goto LABEL_5;
    case 0x14:
      ready = CrmStateMonitorPostResumeStart(CallerContext, v33);
      goto LABEL_5;
    case 0x15:
      ready = CrmStateMonitorPowerConstrainedStart(CallerContext, v33);
      goto LABEL_5;
    case 0x16:
      v6 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
      goto LABEL_4;
    case 0x17:
      v6 = WNF_SHEL_LOCKSTATE;
      goto LABEL_4;
    case 0x18:
      ready = CrmStateMonitorCPUUsageStart(CallerContext, v33);
      goto LABEL_5;
    case 0x19:
      ready = CrmStateMonitorSystemDiskUsageStart(CallerContext, v33);
      goto LABEL_5;
    case 0x1A:
      ready = CrmStateMonitorCsAcDcStart(CallerContext, v33);
      goto LABEL_5;
    case 0x1B:
      ready = CrmStateMonitorDelayedAcStart(CallerContext, v33);
      goto LABEL_5;
    case 0x1C:
      v11 = 28LL;
LABEL_15:
      *((_DWORD *)CallerContext + 14) = 0;
      CallerContext[5] = CallerContext + 7;
      v12 = CrmStateMonitorStateSizeGet(v11);
      memcpy_0(v33, v13, v12);
      goto LABEL_7;
    case 0x1D:
      ready = CrmStateMonitorGPUUsageStart(CallerContext, v33);
      goto LABEL_5;
    case 0x1E:
      v6 = WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY;
      goto LABEL_4;
    case 0x1F:
      ready = CrmStateMonitorDisconnectedStandbyStart(CallerContext, v33);
      goto LABEL_5;
    case 0x20:
      v6 = WNF_SEB_AUDIO_ACTIVITY;
      goto LABEL_4;
    case 0x21:
      ready = CrmStateMonitorDelayedCsStart(CallerContext, v33);
      goto LABEL_5;
    case 0x22:
      v6 = WNF_SEB_SYSTEM_IDLE;
LABEL_4:
      ready = CrmStateMonitorWNFStart(CallerContext, v6, v33);
LABEL_5:
      v7 = ready;
      break;
    default:
      v7 = -1073741822;
      break;
  }
  if ( v7 >= 0 )
  {
LABEL_7:
    CrmStateMonitorListenerAdd((unsigned int *)CallerContext, a2, 0);
    v7 = 0;
  }
  if ( (unsigned int)dword_1800B3250 > 5 && tlgKeywordOn((__int64)&dword_1800B3250, 8LL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &Uuid;
    v22 = (int *)&v16;
    v25 = v29;
    v28 = v33;
    v20 = 16;
    v16 = v8;
    v23 = 4;
    v26 = 2;
    v14 = CrmStateMonitorStateSizeGet(v8);
    v29[1] = 0;
    v32 = 0;
    v30 = &v17;
    v29[0] = v14;
    v31 = v15;
    v17 = v7;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3250, (int)&dword_1800A31A3, 0, 0, 7u, &v18);
  }
  return (unsigned int)v7;
}
