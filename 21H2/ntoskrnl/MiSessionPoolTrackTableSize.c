/*
 * XREFs of MiSessionPoolTrackTableSize @ 0x1407D5058
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14039D714 (ExInitializeSessionHeapManager.c)
 * Callees:
 *     <none>
 */

__int64 MiSessionPoolTrackTableSize()
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 292LL;
  if ( _BitScanReverse64((unsigned __int64 *)&v2, 0x124uLL) )
    return 1LL << v2;
  return result;
}
