/*
 * XREFs of sub_1800443AC @ 0x1800443AC
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_1800443AC(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
