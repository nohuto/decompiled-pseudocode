/*
 * XREFs of SdbpReadStringRef @ 0x14073F1F8
 * Callers:
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140742A10 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
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
