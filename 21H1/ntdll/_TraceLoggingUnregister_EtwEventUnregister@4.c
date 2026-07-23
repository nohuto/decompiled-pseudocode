/*
 * XREFs of _TraceLoggingUnregister_EtwEventUnregister@4 @ 0x4B330EB8
 * Callers:
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 * Callees:
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 */

ULONG TraceLoggingUnregister_EtwEventUnregister()
{
  REGHANDLE v1; // [esp-Ch] [ebp-Ch]

  v1 = qword_4B3A3380;
  dword_4B3A3368 = 0;
  qword_4B3A3380 = 0LL;
  return EtwNotificationUnregister(v1, 0);
}
