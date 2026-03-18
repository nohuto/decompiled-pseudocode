/*
 * XREFs of HalpMcSetUpdateInfoInvalid @ 0x1403AE424
 * Callers:
 *     HalpMcRecordProcessorInfo @ 0x1403A5CF4 (HalpMcRecordProcessorInfo.c)
 *     HalMcFinishMicrocode @ 0x1403AE3C0 (HalMcFinishMicrocode.c)
 *     HalpUnloadMicrocode @ 0x1408685C0 (HalpUnloadMicrocode.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A45B74 (HalpMcInitializeMicrocodeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void HalpMcSetUpdateInfoInvalid()
{
  PVOID *v0; // rbx
  PVOID *v1; // rcx

  v0 = (PVOID *)HalpMcUpdateInfoHead;
  qword_140C495E8 = (__int64)&HalpMcUpdateInfoHead;
  HalpMcUpdateInfoHead = &HalpMcUpdateInfoHead;
  HalpMcUpdateInfoValid = 0;
  while ( v0 != &HalpMcUpdateInfoHead )
  {
    v1 = v0;
    v0 = (PVOID *)*v0;
    ExFreePoolWithTag(v1, 0);
  }
}
