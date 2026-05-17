/*
 * XREFs of _CsrAllocateMessagePointer@12 @ 0x4B33E720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall CsrAllocateMessagePointer(int a1, int a2, int a3)
{
  return ZwWow64CsrAllocateMessagePointer(a1, a2, a3);
}
