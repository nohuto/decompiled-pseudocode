/*
 * XREFs of ?RmpGameModeUnapplyPowerProfile@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006FFD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z @ 0x180077CE0 (-RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180085658 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyPowerProfile(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  __int64 v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  if ( (int)RmpSystemEnableDisableGameModePowerProfile(0) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18009C945, 0LL, 0LL, 2u, &v3);
  }
}
