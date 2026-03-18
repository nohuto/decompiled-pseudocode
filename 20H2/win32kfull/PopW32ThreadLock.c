/*
 * XREFs of PopW32ThreadLock @ 0x1C011F7B0
 * Callers:
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
