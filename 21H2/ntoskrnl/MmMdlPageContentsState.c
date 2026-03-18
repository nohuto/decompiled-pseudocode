/*
 * XREFs of MmMdlPageContentsState @ 0x1402344C0
 * Callers:
 *     SmKmIssueVolumeIo @ 0x1405FB99C (SmKmIssueVolumeIo.c)
 *     MdlInvariantPostProcessing1 @ 0x1405FF19C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405FF390 (MdlInvariantPreProcessing1.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
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
