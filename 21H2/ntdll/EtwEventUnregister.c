/*
 * XREFs of EtwEventUnregister @ 0x1800514E0
 * Callers:
 *     LdrShutdownProcess @ 0x18005EFD0 (LdrShutdownProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventUnregister(__int64 a1)
{
  return EtwNotificationUnregister(a1, 0LL);
}
