/*
 * XREFs of ProcessorInitGlobalState @ 0x1C00BEB6C
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEA3C (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     memset @ 0x1C0030080 (memset.c)
 */

__int64 ProcessorInitGlobalState()
{
  size_t v0; // rbx
  void *Pool2; // rax
  USHORT MaximumGroupCount; // ax
  __int64 result; // rax

  v0 = 8LL * KeQueryMaximumProcessorCountEx(0xFFFFu);
  Pool2 = (void *)ExAllocatePool2(256LL, v0, 1232102209LL);
  ProcessorByNtNumber = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v0);
    qword_1C0080618 = (__int64)&ProcessorGroupListHead;
    ProcessorGroupListHead = (__int64)&ProcessorGroupListHead;
    MaximumGroupCount = KeQueryMaximumGroupCount();
    ProcessorGroupByNumber = ExAllocatePool2(256LL, 8LL * MaximumGroupCount, 1232102209LL);
    if ( ProcessorGroupByNumber )
    {
      KeInitializeAffinityEx2(&ProcessorpPreferredCpuSet, 32LL);
      result = 0LL;
      ProcessorPreferredCpuSetSpecified = 0;
      return result;
    }
    ExFreePoolWithTag(ProcessorByNtNumber, 0);
    ProcessorByNtNumber = 0LL;
  }
  return 3221225626LL;
}
