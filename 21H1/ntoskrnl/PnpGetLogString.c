/*
 * XREFs of PnpGetLogString @ 0x14036C908
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x1407354E8 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140987614;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140987614;
  return result;
}
