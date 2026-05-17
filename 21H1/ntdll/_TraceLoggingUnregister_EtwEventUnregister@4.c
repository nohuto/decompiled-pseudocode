/*
 * XREFs of _TraceLoggingUnregister_EtwEventUnregister@4 @ 0x4B330EB8
 * Callers:
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 * Callees:
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 */

int TraceLoggingUnregister_EtwEventUnregister()
{
  int v1; // [esp-Ch] [ebp-Ch]
  __int16 v2; // [esp-8h] [ebp-8h]

  v2 = dword_4B3A3384;
  v1 = dword_4B3A3380;
  dword_4B3A3368 = 0;
  dword_4B3A3380 = 0;
  dword_4B3A3384 = 0;
  return EtwNotificationUnregister(v1, v2, 0);
}
