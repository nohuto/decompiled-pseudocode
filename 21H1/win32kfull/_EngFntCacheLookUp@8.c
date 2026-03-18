/*
 * XREFs of _EngFntCacheLookUp@8 @ 0xDC166
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xDBF9C (-CreateUsermodeParameters@LoadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0xDF15E (SearchFNTCacheHlink.c)
 */

PVOID __stdcall EngFntCacheLookUp(ULONG FastCheckSum, ULONG *pulSize)
{
  *pulSize = 0;
  if ( !FastCheckSum )
    return 0;
  if ( (dword_274064 & 1) != 0 && dword_274068 )
  {
    if ( *(_DWORD *)dword_274068 )
      SearchFNTCacheHlink(*(_DWORD *)dword_274068);
  }
  return 0;
}
