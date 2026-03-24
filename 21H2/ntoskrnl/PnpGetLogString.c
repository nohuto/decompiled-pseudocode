/*
 * XREFs of PnpGetLogString @ 0x14036E9B8
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x14073ADD4 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B090 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_14098BEE4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_14098BEE4;
  return result;
}
