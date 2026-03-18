/*
 * XREFs of RtlpCtAllocateMemory @ 0x140916068
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405891A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpCtAllocateMemory(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67744364u);
}
