/*
 * XREFs of MiHyperSpaceSize @ 0x1402BDFC8
 * Callers:
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiRealVaToFlushType @ 0x14037700C (MiRealVaToFlushType.c)
 *     MiQueryLeafPte @ 0x140541B50 (MiQueryLeafPte.c)
 *     MiDeleteVadBitmap @ 0x14061D3D8 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140A49010 (MiAssignTopLevelRanges.c)
 *     MiAddSubRegionEntropy @ 0x140A49380 (MiAddSubRegionEntropy.c)
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

  result = qword_140C4E170;
  if ( !qword_140C4E170 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140C4E178[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140C4E170 = v3 + 8 * v4;
  }
  return result;
}
