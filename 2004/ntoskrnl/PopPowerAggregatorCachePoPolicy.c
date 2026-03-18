/*
 * XREFs of PopPowerAggregatorCachePoPolicy @ 0x14077BFAC
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140763854 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorInitialize @ 0x140A3CA70 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopNetCheckOpportunisticDs @ 0x14077C03C (PopNetCheckOpportunisticDs.c)
 */

char PopPowerAggregatorCachePoPolicy()
{
  int v0; // ecx
  char result; // al

  v0 = 0;
  qword_140C21528 = 0LL;
  LODWORD(qword_140C21528) = dword_140C238FC;
  dword_140C21530 = 0;
  if ( PopPolicy )
    HIDWORD(qword_140C21528) = *((_DWORD *)PopPolicy + 10);
  else
    HIDWORD(qword_140C21528) = 0;
  if ( byte_140C238ED )
  {
    v0 = 1;
    dword_140C21530 = 1;
  }
  if ( dword_140C238F8 )
    dword_140C21530 = v0 | 2;
  if ( (unsigned __int8)PopNetCheckOpportunisticDs() )
    dword_140C21530 |= 4u;
  result = dword_140C21530 & 6;
  if ( (dword_140C21530 & 6) != 2 )
    dword_140C21530 |= 8u;
  return result;
}
