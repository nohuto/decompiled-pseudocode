/*
 * XREFs of MiHyperSpaceSize @ 0x14031CC88
 * Callers:
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiRealVaToFlushType @ 0x140378CF8 (MiRealVaToFlushType.c)
 *     MiQueryLeafPte @ 0x140547260 (MiQueryLeafPte.c)
 *     MiDeleteVadBitmap @ 0x14067C9A4 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140A518A8 (MiAssignTopLevelRanges.c)
 *     MiAddSubRegionEntropy @ 0x140A51C18 (MiAddSubRegionEntropy.c)
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

  result = qword_140C4E3B0;
  if ( !qword_140C4E3B0 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140C4E3B8[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140C4E3B0 = v3 + 8 * v4;
  }
  return result;
}
