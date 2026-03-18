/*
 * XREFs of RtlpCtFreeMemory @ 0x14091BDE0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058CBD0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
