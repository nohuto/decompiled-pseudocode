/*
 * XREFs of _ZwWow64CsrAllocateMessagePointer@12 @ 0x4B2F4740
 * Callers:
 *     _CsrAllocateMessagePointer@12 @ 0x4B33E720 (_CsrAllocateMessagePointer@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwWow64CsrAllocateMessagePointer(int a1, int a2, int a3)
{
  return Wow64SystemServiceCall();
}
