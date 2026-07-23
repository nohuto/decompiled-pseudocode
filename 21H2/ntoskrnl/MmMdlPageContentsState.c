/*
 * XREFs of MmMdlPageContentsState @ 0x14022C930
 * Callers:
 *     SmKmIssueVolumeIo @ 0x14059E1D4 (SmKmIssueVolumeIo.c)
 *     MdlInvariantPostProcessing1 @ 0x1405A17D4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405A19C8 (MdlInvariantPreProcessing1.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CFD4 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPageContentsState(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int16 v4; // ax
  __int16 v5; // r8

  v2 = *(unsigned __int16 *)(a1 + 10);
  if ( a2 == 2 )
    return (v2 >> 14) & 1;
  v4 = v2 & 0xBFFF;
  v5 = v2 | 0x4000;
  if ( a2 != 1 )
    v5 = v4;
  result = a2;
  *(_WORD *)(a1 + 10) = v5;
  return result;
}
