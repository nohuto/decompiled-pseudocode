/*
 * XREFs of _RtlGetSearchPath@4 @ 0x4B2AB5E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetCachedPath@16 @ 0x4B2B34F6 (_RtlpGetCachedPath@16.c)
 */

int __stdcall RtlGetSearchPath(_DWORD *a1)
{
  int CachedPath; // eax

  CachedPath = RtlpGetCachedPath(0, 0);
  if ( CachedPath )
  {
    *a1 = CachedPath + 80;
    return 0;
  }
  else
  {
    *a1 = 0;
    return -1073741801;
  }
}
