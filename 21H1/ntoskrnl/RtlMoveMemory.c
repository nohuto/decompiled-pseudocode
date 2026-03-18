/*
 * XREFs of RtlMoveMemory @ 0x1403624C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 */

void __stdcall RtlMoveMemory(void *a1, const void *Source, SIZE_T Length)
{
  memmove(a1, Source, Length);
}
