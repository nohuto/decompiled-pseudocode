/*
 * XREFs of _EtwEventUnregister@8 @ 0x4B2D99B0
 * Callers:
 *     _LdrpLogDeprecatedDllEtwEvent@4 @ 0x4B2EBC3E (_LdrpLogDeprecatedDllEtwEvent@4.c)
 * Callees:
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 */

int __stdcall EtwEventUnregister(int a1, __int16 a2)
{
  return EtwNotificationUnregister(a1, a2, 0);
}
