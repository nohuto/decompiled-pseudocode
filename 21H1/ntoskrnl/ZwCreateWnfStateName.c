/*
 * XREFs of ZwCreateWnfStateName @ 0x1403F3C90
 * Callers:
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1405D5DEC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x14067D7C0 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406EACC0 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
