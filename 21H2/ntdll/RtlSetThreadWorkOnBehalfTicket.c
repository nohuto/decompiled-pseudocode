/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x180020500
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180020450 (TppCleanupGroupMemberCallbackProlog.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D7E0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *a1 )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, a1, 8LL);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *a1;
  return result;
}
