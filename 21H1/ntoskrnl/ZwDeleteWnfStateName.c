/*
 * XREFs of ZwDeleteWnfStateName @ 0x1403F3E30
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1405D5DEC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E6538 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x140764414 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
