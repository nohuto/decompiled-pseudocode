/*
 * XREFs of PsChargeProcessWakeCounter @ 0x14070CB70
 * Callers:
 *     EtwpQueueNotification @ 0x1406371FC (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 *     PspCreateActivityReference @ 0x14071F118 (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x1408DE58C (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x140296A70 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x140687480 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}
