/*
 * XREFs of HalpMcSetUpdateInfoInvalid @ 0x1403A4D94
 * Callers:
 *     HalpMcRecordProcessorInfo @ 0x1403A31C4 (HalpMcRecordProcessorInfo.c)
 *     HalMcFinishMicrocode @ 0x1403A4D30 (HalMcFinishMicrocode.c)
 *     HalpUnloadMicrocode @ 0x140861880 (HalpUnloadMicrocode.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A36548 (HalpMcInitializeMicrocodeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void HalpMcSetUpdateInfoInvalid()
{
  PVOID *v0; // rbx
  PVOID *v1; // rcx

  v0 = (PVOID *)HalpMcUpdateInfoHead;
  qword_140C496E8 = (__int64)&HalpMcUpdateInfoHead;
  HalpMcUpdateInfoHead = &HalpMcUpdateInfoHead;
  HalpMcUpdateInfoValid = 0;
  while ( v0 != &HalpMcUpdateInfoHead )
  {
    v1 = v0;
    v0 = (PVOID *)*v0;
    ExFreePoolWithTag(v1, 0);
  }
}
