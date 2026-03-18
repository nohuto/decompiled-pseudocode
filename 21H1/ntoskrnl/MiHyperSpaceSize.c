/*
 * XREFs of MiHyperSpaceSize @ 0x14022B348
 * Callers:
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiRealVaToFlushType @ 0x1403761FC (MiRealVaToFlushType.c)
 *     MiQueryLeafPte @ 0x140541500 (MiQueryLeafPte.c)
 *     MiDeleteVadBitmap @ 0x140662AF8 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140A437B0 (MiAssignTopLevelRanges.c)
 *     MiAddSubRegionEntropy @ 0x140A43B20 (MiAddSubRegionEntropy.c)
 * Callees:
 *     <none>
 */

__int64 MiHyperSpaceSize()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = qword_140C4E2B0;
  if ( !qword_140C4E2B0 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140C4E2B8[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140C4E2B0 = v3 + 8 * v4;
  }
  return result;
}
