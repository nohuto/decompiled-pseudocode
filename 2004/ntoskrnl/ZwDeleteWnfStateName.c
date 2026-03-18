/*
 * XREFs of ZwDeleteWnfStateName @ 0x1403F50C0
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F64D4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14070A3A8 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x140765E34 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
