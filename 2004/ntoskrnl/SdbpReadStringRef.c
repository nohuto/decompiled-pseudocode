/*
 * XREFs of SdbpReadStringRef @ 0x140740D78
 * Callers:
 *     SdbGetStringTagPtr @ 0x140740BD0 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140744590 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v2, &v5, 4LL) )
      return v5;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
