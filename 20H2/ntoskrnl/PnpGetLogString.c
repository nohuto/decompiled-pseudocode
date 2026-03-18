/*
 * XREFs of PnpGetLogString @ 0x14036E1B0
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x14073D3CC (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073D688 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_14098E7A4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_14098E7A4;
  return result;
}
