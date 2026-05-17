/*
 * XREFs of _EtwEventWriteTransfer@28 @ 0x4B2E3CA0
 * Callers:
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 * Callees:
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 */

int __stdcall EtwEventWriteTransfer(int a1, __int16 a2, int a3, int a4, int a5, int a6, int a7)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, a4, a5, a6, a7);
}
