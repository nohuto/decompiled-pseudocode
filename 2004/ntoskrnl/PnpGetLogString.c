/*
 * XREFs of PnpGetLogString @ 0x14036C1D0
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x14072EC14 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14072EED0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_1409889C4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_1409889C4;
  return result;
}
