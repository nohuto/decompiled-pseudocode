/*
 * XREFs of memcpy @ 0x180046822
 * Callers:
 *     sub_18000220C @ 0x18000220C (sub_18000220C.c)
 *     sub_18000A230 @ 0x18000A230 (sub_18000A230.c)
 *     PsmHostStateNotification2 @ 0x18000B680 (PsmHostStateNotification2.c)
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 *     sub_180021AD4 @ 0x180021AD4 (sub_180021AD4.c)
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 *     sub_18002BEE0 @ 0x18002BEE0 (sub_18002BEE0.c)
 *     sub_18002C6F4 @ 0x18002C6F4 (sub_18002C6F4.c)
 *     sub_1800312B0 @ 0x1800312B0 (sub_1800312B0.c)
 *     sub_180031588 @ 0x180031588 (sub_180031588.c)
 *     sub_1800317B0 @ 0x1800317B0 (sub_1800317B0.c)
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 *     PsmMemoryLimitNotification2 @ 0x180033530 (PsmMemoryLimitNotification2.c)
 *     sub_180034344 @ 0x180034344 (sub_180034344.c)
 *     sub_18003837C @ 0x18003837C (sub_18003837C.c)
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_180040FD8 @ 0x180040FD8 (sub_180040FD8.c)
 *     sub_1800429A0 @ 0x1800429A0 (sub_1800429A0.c)
 *     sub_180042DC8 @ 0x180042DC8 (sub_180042DC8.c)
 *     sub_180043688 @ 0x180043688 (sub_180043688.c)
 *     sub_180043AF0 @ 0x180043AF0 (sub_180043AF0.c)
 *     sub_180043B74 @ 0x180043B74 (sub_180043B74.c)
 *     sub_180043CF8 @ 0x180043CF8 (sub_180043CF8.c)
 *     sub_180043E7C @ 0x180043E7C (sub_180043E7C.c)
 *     sub_180043FCC @ 0x180043FCC (sub_180043FCC.c)
 *     sub_1800441FC @ 0x1800441FC (sub_1800441FC.c)
 *     sub_180044270 @ 0x180044270 (sub_180044270.c)
 *     sub_1800442E4 @ 0x1800442E4 (sub_1800442E4.c)
 *     sub_180044348 @ 0x180044348 (sub_180044348.c)
 *     sub_1800443F0 @ 0x1800443F0 (sub_1800443F0.c)
 *     sub_18004445C @ 0x18004445C (sub_18004445C.c)
 *     sub_1800444C8 @ 0x1800444C8 (sub_1800444C8.c)
 *     sub_1800849F0 @ 0x1800849F0 (sub_1800849F0.c)
 *     sub_180084E4C @ 0x180084E4C (sub_180084E4C.c)
 *     sub_180086824 @ 0x180086824 (sub_180086824.c)
 *     sub_180087048 @ 0x180087048 (sub_180087048.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
