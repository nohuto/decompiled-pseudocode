/*
 * XREFs of PopAdaptivePowerSettingCallback @ 0x140828BC0
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x1403C0A40 (PopVideoPowerSettingCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 *     PopDiagTracePolicyChange @ 0x140828D4C (PopDiagTracePolicyChange.c)
 *     PopBroadcastSessionInfo @ 0x140828EBC (PopBroadcastSessionInfo.c)
 *     PopSendSessionInfo @ 0x14099CDDC (PopSendSessionInfo.c)
 */

__int64 __fastcall PopAdaptivePowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  char v5; // r14
  char v6; // bp
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  GUID v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+40h] [rbp-18h]

  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  PopAcquireAdaptiveLock(1);
  v8 = *a1;
  v9 = *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 == *a1 )
    v9 = *(_QWORD *)GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data4 - a1[1];
  if ( !v9 )
  {
    if ( *a2 != PopInputTimeout )
    {
      PopInputTimeout = *a2;
      v5 = 1;
    }
    goto LABEL_18;
  }
  v10 = *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 == v8 )
    v10 = *(_QWORD *)GUID_VIDEO_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v10 )
  {
    if ( *a2 == PopDisplayTimeout )
      goto LABEL_18;
    PopDisplayTimeout = *a2;
LABEL_26:
    v6 = 1;
    goto LABEL_18;
  }
  v11 = *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 == v8 )
    v11 = *(_QWORD *)GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data4 - a1[1];
  if ( !v11 )
  {
    if ( *a2 == PopAdaptiveLockConsoleTimeout )
      goto LABEL_18;
    PopAdaptiveLockConsoleTimeout = *a2;
    goto LABEL_26;
  }
  v12 = *(_QWORD *)&GUID_HUPR_ADAPTIVE_DISPLAY_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_DISPLAY_TIMEOUT.Data1 == v8 )
    v12 = *(_QWORD *)GUID_HUPR_ADAPTIVE_DISPLAY_TIMEOUT.Data4 - a1[1];
  if ( !v12 )
  {
    PopAdaptiveSensorDisplayTimeout = *a2;
LABEL_18:
    PopDiagTracePolicyChange();
    goto LABEL_19;
  }
  v7 = -1073741811;
LABEL_19:
  PopReleaseAdaptiveLock();
  v17 = 0;
  v16 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
  if ( v5 )
  {
    PopBroadcastSessionInfo(0LL, 20LL, &v16);
  }
  else if ( v6 && PopConsoleSession )
  {
    PopSendSessionInfo((unsigned int)dword_140C1F3B8, v13, v14, &v16);
  }
  return v7;
}
