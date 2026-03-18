/*
 * XREFs of PopPowerAggregatorCachePoPolicy @ 0x140779B9C
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140761F74 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorInitialize @ 0x140A3CE18 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopNetCheckOpportunisticDs @ 0x140779C2C (PopNetCheckOpportunisticDs.c)
 */

char PopPowerAggregatorCachePoPolicy()
{
  int v0; // ecx
  char result; // al

  v0 = 0;
  qword_140C21768 = 0LL;
  LODWORD(qword_140C21768) = dword_140C23F1C;
  dword_140C21770 = 0;
  if ( PopPolicy )
    HIDWORD(qword_140C21768) = *((_DWORD *)PopPolicy + 10);
  else
    HIDWORD(qword_140C21768) = 0;
  if ( byte_140C23F0D )
  {
    v0 = 1;
    dword_140C21770 = 1;
  }
  if ( dword_140C23F18 )
    dword_140C21770 = v0 | 2;
  if ( (unsigned __int8)PopNetCheckOpportunisticDs() )
    dword_140C21770 |= 4u;
  result = dword_140C21770 & 6;
  if ( (dword_140C21770 & 6) != 2 )
    dword_140C21770 |= 8u;
  return result;
}
