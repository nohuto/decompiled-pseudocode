/*
 * XREFs of PopPowerAggregatorCachePoPolicy @ 0x14078A5AC
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140771E64 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorInitialize @ 0x140A42D10 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopNetCheckOpportunisticDs @ 0x14078A63C (PopNetCheckOpportunisticDs.c)
 */

char PopPowerAggregatorCachePoPolicy()
{
  int v0; // ecx
  char result; // al

  v0 = 0;
  qword_140C21648 = 0LL;
  LODWORD(qword_140C21648) = dword_140C23D9C;
  dword_140C21650 = 0;
  if ( PopPolicy )
    HIDWORD(qword_140C21648) = *((_DWORD *)PopPolicy + 10);
  else
    HIDWORD(qword_140C21648) = 0;
  if ( byte_140C23D8D )
  {
    v0 = 1;
    dword_140C21650 = 1;
  }
  if ( dword_140C23D98 )
    dword_140C21650 = v0 | 2;
  if ( (unsigned __int8)PopNetCheckOpportunisticDs() )
    dword_140C21650 |= 4u;
  result = dword_140C21650 & 6;
  if ( (dword_140C21650 & 6) != 2 )
    dword_140C21650 |= 8u;
  return result;
}
