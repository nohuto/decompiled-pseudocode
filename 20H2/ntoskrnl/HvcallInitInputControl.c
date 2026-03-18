/*
 * XREFs of HvcallInitInputControl @ 0x140365AC0
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x1408911CC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x140891398 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14089140C (HvlpDynamicUpdateMicrocode.c)
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
