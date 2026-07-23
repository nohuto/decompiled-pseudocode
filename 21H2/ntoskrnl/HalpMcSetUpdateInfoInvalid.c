/*
 * XREFs of HalpMcSetUpdateInfoInvalid @ 0x1403A9164
 * Callers:
 *     HalpMcRecordProcessorInfo @ 0x1403A6704 (HalpMcRecordProcessorInfo.c)
 *     HalMcFinishMicrocode @ 0x1403A9100 (HalMcFinishMicrocode.c)
 *     HalpUnloadMicrocode @ 0x140866330 (HalpUnloadMicrocode.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A3A5C8 (HalpMcInitializeMicrocodeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void HalpMcSetUpdateInfoInvalid()
{
  PVOID *v0; // rbx
  PVOID *v1; // rcx

  v0 = (PVOID *)HalpMcUpdateInfoHead;
  qword_140C49788 = (__int64)&HalpMcUpdateInfoHead;
  HalpMcUpdateInfoHead = &HalpMcUpdateInfoHead;
  HalpMcUpdateInfoValid = 0;
  while ( v0 != &HalpMcUpdateInfoHead )
  {
    v1 = v0;
    v0 = (PVOID *)*v0;
    ExFreePoolWithTag(v1, 0);
  }
}
