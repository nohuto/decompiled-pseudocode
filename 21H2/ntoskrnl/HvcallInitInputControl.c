/*
 * XREFs of HvcallInitInputControl @ 0x140365F20
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x14088E8CC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x14088EA98 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088EB0C (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitInputControl(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *a2 = a1;
  return result;
}
