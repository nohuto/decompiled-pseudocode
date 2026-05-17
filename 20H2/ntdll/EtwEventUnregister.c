/*
 * XREFs of EtwEventUnregister @ 0x1800503D0
 * Callers:
 *     LdrShutdownProcess @ 0x18005DAA0 (LdrShutdownProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventUnregister(__int64 a1)
{
  return EtwNotificationUnregister(a1, 0LL);
}
