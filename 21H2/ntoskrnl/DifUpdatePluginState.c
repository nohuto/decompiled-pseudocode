/*
 * XREFs of DifUpdatePluginState @ 0x140604D38
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x1407DE98C (MmManagePartitionMemoryInformation.c)
 */

unsigned __int64 DifUpdatePluginState()
{
  unsigned __int64 result; // rax

  result = HIDWORD(VfRuleClasses);
  if ( (VfRuleClasses & 0x8000000000LL) != 0 && DifpSystemPartition )
  {
    memset(&DifpSPMemoryInfo, 0, 0xF0uLL);
    dword_140D019AC = -1;
    dword_140D019B0 = -1;
    result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
    if ( (result & 0x80000000) == 0LL )
    {
      DifpLwSPAvailableSystemPages = qword_140D019E0;
      result = (unsigned int)DifiPluginControlNumerator
             * (qword_140D019E0
              / (unsigned __int64)(unsigned int)DifiPluginControlDenominator);
      DifpLwSPAllowedSPPages = result;
    }
  }
  return result;
}
