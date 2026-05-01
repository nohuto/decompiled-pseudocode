/*
 * XREFs of memcmp @ 0x180045C77
 * Callers:
 *     sub_180005508 @ 0x180005508 (sub_180005508.c)
 *     sub_1800057C8 @ 0x1800057C8 (sub_1800057C8.c)
 *     sub_180016088 @ 0x180016088 (sub_180016088.c)
 *     sub_1800389C0 @ 0x1800389C0 (sub_1800389C0.c)
 *     sub_18003B1DC @ 0x18003B1DC (sub_18003B1DC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
