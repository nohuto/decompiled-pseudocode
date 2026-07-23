/*
 * XREFs of PnpGetLogString @ 0x14036EB68
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x14073AF94 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_14098C0C4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_14098C0C4;
  return result;
}
