/*
 * XREFs of _RtlClearAllBits@4 @ 0x4B34E310
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void *__stdcall RtlClearAllBits(int a1)
{
  return memset(*(void **)(a1 + 4), 0, 4 * ((*(_DWORD *)a1 >> 5) + ((*(_DWORD *)a1 & 0x1F) != 0)));
}
