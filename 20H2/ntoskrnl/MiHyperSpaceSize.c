/*
 * XREFs of MiHyperSpaceSize @ 0x140299518
 * Callers:
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiRealVaToFlushType @ 0x140378F9C (MiRealVaToFlushType.c)
 *     MiQueryLeafPte @ 0x140545520 (MiQueryLeafPte.c)
 *     MiDeleteVadBitmap @ 0x1406602C0 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140A4F2A0 (MiAssignTopLevelRanges.c)
 *     MiAddSubRegionEntropy @ 0x140A4F610 (MiAddSubRegionEntropy.c)
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

  result = qword_140C4E1F0;
  if ( !qword_140C4E1F0 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140C4E1F8[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140C4E1F0 = v3 + 8 * v4;
  }
  return result;
}
