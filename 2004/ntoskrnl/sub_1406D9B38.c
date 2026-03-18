/*
 * XREFs of sub_1406D9B38 @ 0x1406D9B38
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x1405CE760 (WbInitializeEncryptionSegment.c)
 *     WbCreateHeapExecutedBlock @ 0x1406D8EB0 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     WbHashData @ 0x1406D9BD4 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406D9B38(UCHAR *Source1, unsigned int a2)
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
