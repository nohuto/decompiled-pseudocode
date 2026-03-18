/*
 * XREFs of RtlpCtFreeMemory @ 0x1409161B0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405891A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
