/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x14073EDB4
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x14073ED20 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x14095F69C (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbGetDatabaseID @ 0x140740F30 (SdbGetDatabaseID.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 1328) |= 1u;
    goto LABEL_8;
  }
  if ( *a2 == 2 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 1328) |= 2u;
    goto LABEL_4;
  }
  if ( *a2 != 3 )
  {
    AslLogCallPrintf(1LL);
    return v2;
  }
LABEL_4:
  if ( !(unsigned int)SdbGetDatabaseID(a1, a1 + 28) )
    AslLogCallPrintf(1LL);
  return 1;
}
