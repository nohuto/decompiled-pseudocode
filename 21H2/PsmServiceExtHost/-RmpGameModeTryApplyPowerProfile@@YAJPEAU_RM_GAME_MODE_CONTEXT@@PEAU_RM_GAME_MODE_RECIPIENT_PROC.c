/*
 * XREFs of ?RmpGameModeTryApplyPowerProfile@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180070480
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z @ 0x1800786B0 (-RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180086088 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall RmpGameModeTryApplyPowerProfile(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  if ( *((_DWORD *)a2 + 26) || (*((_BYTE *)a2 + 144) & 8) == 0 )
    return 255LL;
  v2 = RmpSystemEnableDisableGameModePowerProfile(1u);
  if ( v2 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = v2;
      v8 = 4;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18009CD59, 0LL, 0LL, 3u, &v6);
    }
  }
  return (unsigned int)v2;
}
