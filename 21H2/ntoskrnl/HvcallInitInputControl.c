/*
 * XREFs of HvcallInitInputControl @ 0x140365D70
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x14088E76C (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x14088E938 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9AC (HvlpDynamicUpdateMicrocode.c)
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
