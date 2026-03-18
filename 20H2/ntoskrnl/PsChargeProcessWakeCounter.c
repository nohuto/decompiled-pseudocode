/*
 * XREFs of PsChargeProcessWakeCounter @ 0x14071BC10
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1405ECB50 (AlpcpCompleteDispatchMessage.c)
 *     EtwpQueueNotification @ 0x14071A734 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x14072D168 (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x1408E43CC (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1402084B0 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1405EE0B0 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}
