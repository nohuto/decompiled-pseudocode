/*
 * XREFs of SdbReadWORDTag @ 0x14074451C
 * Callers:
 *     SdbpCheckForMatch @ 0x14073EE98 (SdbpCheckForMatch.c)
 *     InitOnceScanIndexes @ 0x140744610 (InitOnceScanIndexes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140744590 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 2LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
