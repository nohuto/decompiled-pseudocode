/*
 * XREFs of RtlFillMemory @ 0x14058B2A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
