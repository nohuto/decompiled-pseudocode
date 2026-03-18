/*
 * XREFs of sub_14065C2B0 @ 0x14065C2B0
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x1405CD390 (WbInitializeEncryptionSegment.c)
 *     WbCreateHeapExecutedBlock @ 0x14065CA04 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 *     WbHashData @ 0x14065C34C (WbHashData.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14065C2B0(UCHAR *Source1, unsigned int a2)
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
