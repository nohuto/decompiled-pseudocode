/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1406E8CD0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     EtwpQueueNotification @ 0x14067FA78 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x14071D498 (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x1408DD27C (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x14025A1F0 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x14060F300 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}
