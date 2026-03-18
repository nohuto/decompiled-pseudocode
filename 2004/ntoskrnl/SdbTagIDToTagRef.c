/*
 * XREFs of SdbTagIDToTagRef @ 0x1407BAA10
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140744058 (SdbGetDatabaseMatchEx.c)
 *     SdbGetDatabaseMatch @ 0x14076BAA8 (SdbGetDatabaseMatch.c)
 *     KsepDbGetShimInfo @ 0x1408BC2FC (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpFindLocalDatabaseByPDB @ 0x1407BAA68 (SdbpFindLocalDatabaseByPDB.c)
 */

__int64 __fastcall SdbTagIDToTagRef(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)SdbpFindLocalDatabaseByPDB(a1, a2, a3, v9) )
  {
    v6 = 1;
    v7 = v5 | (v9[0] << 28);
  }
  else
  {
    AslLogCallPrintf(1LL);
    v7 = 0;
  }
  *a4 = v7;
  return v6;
}
