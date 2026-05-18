/*
 * XREFs of memcmp @ 0x18011E0BE
 * Callers:
 *     sub_180064B64 @ 0x180064B64 (sub_180064B64.c)
 *     sub_180066684 @ 0x180066684 (sub_180066684.c)
 *     sub_18006DFC4 @ 0x18006DFC4 (sub_18006DFC4.c)
 *     sub_18006E3B4 @ 0x18006E3B4 (sub_18006E3B4.c)
 *     sub_18006F2C0 @ 0x18006F2C0 (sub_18006F2C0.c)
 *     sub_180070114 @ 0x180070114 (sub_180070114.c)
 *     sub_1800706D4 @ 0x1800706D4 (sub_1800706D4.c)
 *     sub_1800750F0 @ 0x1800750F0 (sub_1800750F0.c)
 *     sub_18009D2A0 @ 0x18009D2A0 (sub_18009D2A0.c)
 *     sub_18009D878 @ 0x18009D878 (sub_18009D878.c)
 *     sub_18009DAAC @ 0x18009DAAC (sub_18009DAAC.c)
 *     sub_18009DE18 @ 0x18009DE18 (sub_18009DE18.c)
 *     sub_18009E044 @ 0x18009E044 (sub_18009E044.c)
 *     sub_18009E2F8 @ 0x18009E2F8 (sub_18009E2F8.c)
 *     sub_18009E3D0 @ 0x18009E3D0 (sub_18009E3D0.c)
 *     sub_18009E4A8 @ 0x18009E4A8 (sub_18009E4A8.c)
 *     sub_1800A1C7C @ 0x1800A1C7C (sub_1800A1C7C.c)
 *     sub_1800A5C38 @ 0x1800A5C38 (sub_1800A5C38.c)
 *     sub_1800A5D24 @ 0x1800A5D24 (sub_1800A5D24.c)
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 *     sub_1800B675C @ 0x1800B675C (sub_1800B675C.c)
 *     sub_1800B6B4C @ 0x1800B6B4C (sub_1800B6B4C.c)
 *     sub_1800BD2B0 @ 0x1800BD2B0 (sub_1800BD2B0.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800CC5B0 @ 0x1800CC5B0 (sub_1800CC5B0.c)
 *     sub_1800CE62C @ 0x1800CE62C (sub_1800CE62C.c)
 *     sub_1800CEA1C @ 0x1800CEA1C (sub_1800CEA1C.c)
 *     sub_1800CEE00 @ 0x1800CEE00 (sub_1800CEE00.c)
 *     sub_1800EB1E0 @ 0x1800EB1E0 (sub_1800EB1E0.c)
 *     sub_1800EE4F0 @ 0x1800EE4F0 (sub_1800EE4F0.c)
 *     sub_1800EE5A8 @ 0x1800EE5A8 (sub_1800EE5A8.c)
 *     sub_1800EE614 @ 0x1800EE614 (sub_1800EE614.c)
 *     ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x1800FD8E4 (--$_Traits_find@U-$char_traits@D@std@@@std@@YA_KQEBD_K101@Z.c)
 *     sub_1800FEA0C @ 0x1800FEA0C (sub_1800FEA0C.c)
 *     sub_1800FF83C @ 0x1800FF83C (sub_1800FF83C.c)
 *     sub_180102848 @ 0x180102848 (sub_180102848.c)
 *     sub_1801029A0 @ 0x1801029A0 (sub_1801029A0.c)
 *     sub_1801075B4 @ 0x1801075B4 (sub_1801075B4.c)
 *     sub_18010B778 @ 0x18010B778 (sub_18010B778.c)
 *     sub_18011571C @ 0x18011571C (sub_18011571C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
