/*
 * XREFs of ZwDeleteWnfStateName @ 0x1403F9C90
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14062F538 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406DC7A8 (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407112A0 (PspAllocateAndQueryNotificationChannel.c)
 *     PopFreeRegistration @ 0x140774E64 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
