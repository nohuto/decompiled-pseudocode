/*
 * XREFs of HvcallInitInputControl @ 0x1403731A0
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x1409311AC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140931378 (HvlpDynamicUpdateMicrocode.c)
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
