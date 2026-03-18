/*
 * XREFs of HvcallInitInputControl @ 0x140363120
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x14088A35C (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x14088A528 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088A59C (HvlpDynamicUpdateMicrocode.c)
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
