/*
 * XREFs of sub_14065DBBC @ 0x14065DBBC
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x1405D4C04 (WbInitializeEncryptionSegment.c)
 *     WbCreateHeapExecutedBlock @ 0x14065E314 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
 *     WbHashData @ 0x14065DC58 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14065DBBC(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( Source1 && a2 > 0x20 )
  {
    v2 = WbHashData(Source1 + 32, a2 - 32);
    if ( v2 >= 0 )
      return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
