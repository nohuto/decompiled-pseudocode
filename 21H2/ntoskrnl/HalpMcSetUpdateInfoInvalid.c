/*
 * XREFs of HalpMcSetUpdateInfoInvalid @ 0x1403A83D4
 * Callers:
 *     HalpMcRecordProcessorInfo @ 0x1403A65B4 (HalpMcRecordProcessorInfo.c)
 *     HalMcFinishMicrocode @ 0x1403A8370 (HalMcFinishMicrocode.c)
 *     HalpUnloadMicrocode @ 0x1408661D0 (HalpUnloadMicrocode.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A395C8 (HalpMcInitializeMicrocodeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void HalpMcSetUpdateInfoInvalid()
{
  PVOID *v0; // rbx
  PVOID *v1; // rcx

  v0 = (PVOID *)HalpMcUpdateInfoHead;
  qword_140C49748 = (__int64)&HalpMcUpdateInfoHead;
  HalpMcUpdateInfoHead = &HalpMcUpdateInfoHead;
  HalpMcUpdateInfoValid = 0;
  while ( v0 != &HalpMcUpdateInfoHead )
  {
    v1 = v0;
    v0 = (PVOID *)*v0;
    ExFreePoolWithTag(v1, 0);
  }
}
