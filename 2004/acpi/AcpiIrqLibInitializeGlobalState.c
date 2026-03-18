/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C00BEDC4
 * Callers:
 *     ACPIInitialize @ 0x1C00BEBFC (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C008F3D0 (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C008F3F0 (IcInitGlobalState.c)
 *     PcisuppInitGlobalState @ 0x1C009F9A8 (PcisuppInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C009F9D0 (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C00BEEF4 (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C00816B8 = (__int64)IrqArbTestAllocation;
  qword_1C00816C0 = (__int64)IrqArbRetestAllocation;
  qword_1C00816C8 = (__int64)IrqArbCommitAllocation;
  qword_1C00816D8 = (__int64)IrqArbBootAllocation;
  qword_1C00816E8 = (__int64)IrqArbQueryConflict;
  qword_1C0081700 = (__int64)IrqArbPreprocessEntry;
  qword_1C0081710 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C0081718 = (__int64)IrqArbFindSuitableRange;
  qword_1C0081730 = (__int64)IrqArbOverrideConflict;
  qword_1C0081720 = (__int64)IrqArbAddAllocation;
  qword_1C0081728 = (__int64)IrqArbBacktrackAllocation;
  qword_1C0081698 = (__int64)IrqArbUnpackRequirement;
  qword_1C00816A0 = (__int64)IrqArbPackResource;
  qword_1C00816A8 = (__int64)IrqArbUnpackResource;
  qword_1C00816B0 = (__int64)IrqArbScoreRequirement;
  qword_1C0081708 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ");
  if ( (int)result >= 0 )
  {
    result = PcisuppInitGlobalState();
    if ( (int)result >= 0 )
    {
      result = LinkNodeInitGlobalState();
      if ( (int)result >= 0 )
      {
        result = IcInitGlobalState();
        if ( (int)result >= 0 )
          return ProcessorInitGlobalState();
      }
    }
  }
  return result;
}
