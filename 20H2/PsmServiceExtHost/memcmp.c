/*
 * XREFs of memcmp @ 0x180046816
 * Callers:
 *     sub_18000A230 @ 0x18000A230 (sub_18000A230.c)
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_180022D04 @ 0x180022D04 (sub_180022D04.c)
 *     sub_18002DFB0 @ 0x18002DFB0 (sub_18002DFB0.c)
 *     sub_180033700 @ 0x180033700 (sub_180033700.c)
 *     sub_180033C34 @ 0x180033C34 (sub_180033C34.c)
 *     sub_1800346E0 @ 0x1800346E0 (sub_1800346E0.c)
 *     sub_1800398DC @ 0x1800398DC (sub_1800398DC.c)
 *     sub_180081948 @ 0x180081948 (sub_180081948.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
