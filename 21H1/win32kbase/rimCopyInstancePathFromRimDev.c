/*
 * XREFs of rimCopyInstancePathFromRimDev @ 0x1C015C324
 * Callers:
 *     RIMGetDevicePropertiesLockfree @ 0x1C015F710 (RIMGetDevicePropertiesLockfree.c)
 * Callees:
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimCopyInstancePathFromRimDev(_WORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  memmove(a1, *(const void **)(a2 + 216), *(unsigned __int16 *)(a2 + 208));
  if ( *a1 != 92 || a1[1] != 63 || a1[2] != 63 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  a1[1] = 92;
  result = 0LL;
  a1[a3 - 1] = 0;
  return result;
}
