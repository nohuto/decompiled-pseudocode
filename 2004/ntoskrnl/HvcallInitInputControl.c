/*
 * XREFs of HvcallInitInputControl @ 0x140363AE0
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x14088B67C (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x14088B848 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088B8BC (HvlpDynamicUpdateMicrocode.c)
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
