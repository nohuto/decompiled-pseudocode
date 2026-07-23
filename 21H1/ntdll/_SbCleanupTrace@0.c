/*
 * XREFs of _SbCleanupTrace@0 @ 0x4B2DD868
 * Callers:
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 * Callees:
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 */

int __stdcall SbCleanupTrace()
{
  int v0; // edi
  char *pShimData; // esi
  char *v2; // esi

  v0 = 0;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v2 = pShimData + 2016;
    if ( !v2 || !*((_DWORD *)v2 + 12) )
      v2 = 0;
    if ( v2 && *((_QWORD *)v2 + 2) )
    {
      EtwNotificationUnregister(*((_QWORD *)v2 + 2), 0);
      *((_DWORD *)v2 + 4) = 0;
      *((_DWORD *)v2 + 5) = 0;
      return 1;
    }
  }
  return v0;
}
