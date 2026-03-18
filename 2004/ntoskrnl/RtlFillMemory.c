/*
 * XREFs of RtlFillMemory @ 0x140587940
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
