/*
 * XREFs of XilCommand_WriteDoorbell @ 0x1C00071A8
 * Callers:
 *     XilCommand_AddCommandCRBToRing @ 0x1C000714C (XilCommand_AddCommandCRBToRing.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002E2A4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E790 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C0030450 (XilCommand_SendRequestToRingDoorbell.c)
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
