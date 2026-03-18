/*
 * XREFs of ACPIPepPowerSettingChangeCallback @ 0x1C00B0520
 * Callers:
 *     <none>
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     PepPromoteNextNotificationState @ 0x1C00B0810 (PepPromoteNextNotificationState.c)
 */

__int64 __fastcall ACPIPepPowerSettingChangeCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        char *Context)
{
  struct _FAST_MUTEX *v4; // r14
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char NotificationState; // al
  void *OutputBufferLength; // r9
  __int128 InputBuffer; // [rsp+30h] [rbp-38h] BYREF

  v4 = (struct _FAST_MUTEX *)(Context + 184);
  InputBuffer = 0LL;
  ExAcquireFastMutex((PFAST_MUTEX)(Context + 184));
  v10 = *(_QWORD *)&SettingGuid->Data1;
  v11 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v11 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v11 && ValueLength == 4 && Value )
  {
    v12 = 3LL;
LABEL_13:
    LOBYTE(v9) = *Value != 0;
    goto LABEL_30;
  }
  v13 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - v10;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == v10 )
    v13 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v13 && ValueLength == 4 && Value )
  {
    v12 = 2LL;
    goto LABEL_13;
  }
  v14 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - v10;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == v10 )
    v14 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v14 && ValueLength == 4 && Value )
  {
    *((_DWORD *)Context + 65) = *Value;
  }
  else
  {
    v15 = *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 - v10;
    if ( *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 == v10 )
      v15 = *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 - *(_QWORD *)SettingGuid->Data4;
    if ( !v15 && ValueLength == 4 && Value )
      *((_DWORD *)Context + 66) = *Value;
  }
  if ( *((_DWORD *)Context + 65) || (LOBYTE(v9) = 1, *((_DWORD *)Context + 66) != 2) )
    LOBYTE(v9) = 0;
  v12 = 1LL;
LABEL_30:
  NotificationState = PepPromoteNextNotificationState(Context, v12, v9, 0LL);
  if ( Context[256] == (_BYTE)OutputBufferLength && NotificationState )
  {
    Context[256] = 1;
    LODWORD(InputBuffer) = 40;
    DWORD2(InputBuffer) = (_DWORD)OutputBufferLength;
    BYTE12(InputBuffer) = 1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, OutputBufferLength, (ULONG)OutputBufferLength);
    ACPISetDeviceWorker((__int64)Context, 0);
  }
  ExReleaseFastMutex(v4);
  return 0LL;
}
