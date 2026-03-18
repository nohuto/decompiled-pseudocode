/*
 * XREFs of PnpGetLogString @ 0x1402D0E78
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x1407456F8 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407459F4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140A416D4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140A416D4;
  return result;
}
