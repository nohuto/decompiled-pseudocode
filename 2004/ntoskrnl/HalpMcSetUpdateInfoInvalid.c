/*
 * XREFs of HalpMcSetUpdateInfoInvalid @ 0x1403ABE54
 * Callers:
 *     HalpMcRecordProcessorInfo @ 0x1403A3924 (HalpMcRecordProcessorInfo.c)
 *     HalMcFinishMicrocode @ 0x1403ABDF0 (HalMcFinishMicrocode.c)
 *     HalpUnloadMicrocode @ 0x140862BA0 (HalpUnloadMicrocode.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A3F8D4 (HalpMcInitializeMicrocodeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void HalpMcSetUpdateInfoInvalid()
{
  PVOID *v0; // rbx
  PVOID *v1; // rcx

  v0 = (PVOID *)HalpMcUpdateInfoHead;
  qword_140C49588 = (__int64)&HalpMcUpdateInfoHead;
  HalpMcUpdateInfoHead = &HalpMcUpdateInfoHead;
  HalpMcUpdateInfoValid = 0;
  while ( v0 != &HalpMcUpdateInfoHead )
  {
    v1 = v0;
    v0 = (PVOID *)*v0;
    ExFreePoolWithTag(v1, 0);
  }
}
