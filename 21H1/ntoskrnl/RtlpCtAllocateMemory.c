/*
 * XREFs of RtlpCtAllocateMemory @ 0x140914DF8
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x140588AB0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpCtAllocateMemory(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67744364u);
}
