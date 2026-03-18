/*
 * XREFs of SdbGetDatabaseEdition @ 0x14073EF7C
 * Callers:
 *     KsepSdbMapToMemory @ 0x14073E494 (KsepSdbMapToMemory.c)
 *     KsepSdbBootInitialize @ 0x1407BC228 (KsepSdbBootInitialize.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x140742864 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbGetDatabaseEdition(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // eax

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
  if ( FirstTag )
  {
    v4 = SdbFindFirstTag(a1, FirstTag, 16469LL);
    if ( v4 )
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0LL);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v2;
}
