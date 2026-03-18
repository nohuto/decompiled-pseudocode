/*
 * XREFs of RtlFillMemory @ 0x140587210
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
