/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x140740934
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1407408A0 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x140960A3C (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbGetDatabaseID @ 0x140742AB0 (SdbGetDatabaseID.c)
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
