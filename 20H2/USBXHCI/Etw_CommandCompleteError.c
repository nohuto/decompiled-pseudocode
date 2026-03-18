/*
 * XREFs of Etw_CommandCompleteError @ 0x1C0048A48
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     Command_ControllerResetPostReset @ 0x1C002EAEC (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C002ED80 (Command_FailAllCommands.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002EFA4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002F490 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x1C0049474 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_CommandCompleteError(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( (WPP_MAIN_CB.AlignmentRequirement & 0x40) != 0 )
    return McTemplateK0ppb16qu_EtwWriteTransfer(
             (int)a3 + 24,
             (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE_ERROR,
             a3,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             a3,
             a3 + 24,
             a4,
             *(_BYTE *)(a3 + 60));
  return result;
}
