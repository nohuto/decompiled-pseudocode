/*
 * XREFs of _RtlGetSearchPath@4 @ 0x4B2AB5E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetCachedPath@16 @ 0x4B2B34F6 (_RtlpGetCachedPath@16.c)
 */

NTSTATUS __cdecl RtlGetSearchPath(PWSTR *SearchPathA)
{
  int CachedPath; // eax

  CachedPath = RtlpGetCachedPath(0, 0);
  if ( CachedPath )
  {
    *SearchPathA = (PWSTR)(CachedPath + 80);
    return 0;
  }
  else
  {
    *SearchPathA = 0;
    return -1073741801;
  }
}
