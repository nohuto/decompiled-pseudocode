/*
 * XREFs of HalAllocateCommonBufferDmaThin @ 0x1403DAA00
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferDmaThinEx @ 0x1403B2580 (HalAllocateCommonBufferDmaThinEx.c)
 */

__int64 __fastcall HalAllocateCommonBufferDmaThin(__int64 a1, int a2, _QWORD *a3)
{
  return HalAllocateCommonBufferDmaThinEx(a1, 0, a2, a3, 1, 0x80000000);
}
