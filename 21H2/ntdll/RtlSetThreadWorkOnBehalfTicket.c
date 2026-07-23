/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x180020500
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180020450 (TppCleanupGroupMemberCallbackProlog.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D7A0 (NtSetInformationThread.c)
 */

NTSTATUS __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *ThreadInformation)
{
  NTSTATUS result; // eax

  if ( !ThreadInformation )
    return -1073741811;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *ThreadInformation )
    return 0;
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, ThreadInformation, 8u);
  if ( result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *ThreadInformation;
  return result;
}
