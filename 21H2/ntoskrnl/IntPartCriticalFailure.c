/*
 * XREFs of IntPartCriticalFailure @ 0x140571FB4
 * Callers:
 *     IntPartCreate @ 0x140B01BE0 (IntPartCreate.c)
 *     IntpAddNextProcessorToPartition @ 0x140B01E40 (IntpAddNextProcessorToPartition.c)
 *     IntpAllocateProcessorContext @ 0x140B01F80 (IntpAllocateProcessorContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn IntPartCriticalFailure(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA0u, 0x4001uLL, 0x105uLL, BugCheckParameter3, BugCheckParameter4);
}
