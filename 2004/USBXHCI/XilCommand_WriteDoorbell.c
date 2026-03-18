/*
 * XREFs of XilCommand_WriteDoorbell @ 0x1C0006C3C
 * Callers:
 *     Command_InternalSendCommand @ 0x1C00069D8 (Command_InternalSendCommand.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002DAE4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C002FC64 (XilCommand_SendRequestToRingDoorbell.c)
 */

_DWORD *__fastcall XilCommand_WriteDoorbell(__int64 a1)
{
  _DWORD *result; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  result = *(_DWORD **)(a1 + 152);
  if ( !result )
    return (_DWORD *)XilCommand_SendRequestToRingDoorbell();
  *result = 0;
  _InterlockedOr(v2, 0);
  return result;
}
