/*
 * XREFs of memcmp @ 0x180074433
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_1800289B0 @ 0x1800289B0 (sub_1800289B0.c)
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_180063074 @ 0x180063074 (sub_180063074.c)
 *     sub_1800E7678 @ 0x1800E7678 (sub_1800E7678.c)
 *     sub_18010BDE8 @ 0x18010BDE8 (sub_18010BDE8.c)
 *     sub_18010C07C @ 0x18010C07C (sub_18010C07C.c)
 *     sub_18010C39C @ 0x18010C39C (sub_18010C39C.c)
 *     sub_18010C578 @ 0x18010C578 (sub_18010C578.c)
 *     sub_18012C25C @ 0x18012C25C (sub_18012C25C.c)
 *     sub_180132760 @ 0x180132760 (sub_180132760.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
