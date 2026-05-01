/*
 * XREFs of memset @ 0x1800453CC
 * Callers:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 *     sub_1800023D0 @ 0x1800023D0 (sub_1800023D0.c)
 *     sub_180002EA4 @ 0x180002EA4 (sub_180002EA4.c)
 *     sub_1800038C8 @ 0x1800038C8 (sub_1800038C8.c)
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 *     sub_18000C800 @ 0x18000C800 (sub_18000C800.c)
 *     sub_18000E4E0 @ 0x18000E4E0 (sub_18000E4E0.c)
 *     sub_18000EB70 @ 0x18000EB70 (sub_18000EB70.c)
 *     sub_180010C20 @ 0x180010C20 (sub_180010C20.c)
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 *     sub_180010E20 @ 0x180010E20 (sub_180010E20.c)
 *     sub_180010F38 @ 0x180010F38 (sub_180010F38.c)
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 *     sub_1800140A0 @ 0x1800140A0 (sub_1800140A0.c)
 *     sub_180015080 @ 0x180015080 (sub_180015080.c)
 *     sub_1800153F0 @ 0x1800153F0 (sub_1800153F0.c)
 *     sub_180015E40 @ 0x180015E40 (sub_180015E40.c)
 *     sub_180015F40 @ 0x180015F40 (sub_180015F40.c)
 *     sub_180018E10 @ 0x180018E10 (sub_180018E10.c)
 *     sub_180019ED0 @ 0x180019ED0 (sub_180019ED0.c)
 *     sub_18001A560 @ 0x18001A560 (sub_18001A560.c)
 *     sub_18001A674 @ 0x18001A674 (sub_18001A674.c)
 *     sub_180029FB8 @ 0x180029FB8 (sub_180029FB8.c)
 *     sub_18002E210 @ 0x18002E210 (sub_18002E210.c)
 *     sub_18002F100 @ 0x18002F100 (sub_18002F100.c)
 *     sub_180030F30 @ 0x180030F30 (sub_180030F30.c)
 *     sub_180034AFC @ 0x180034AFC (sub_180034AFC.c)
 *     sub_180034BB0 @ 0x180034BB0 (sub_180034BB0.c)
 *     sub_180037E70 @ 0x180037E70 (sub_180037E70.c)
 *     sub_180037F40 @ 0x180037F40 (sub_180037F40.c)
 *     sub_180038000 @ 0x180038000 (sub_180038000.c)
 *     sub_18003E874 @ 0x18003E874 (sub_18003E874.c)
 *     sub_18003EE0C @ 0x18003EE0C (sub_18003EE0C.c)
 *     sub_18003F04C @ 0x18003F04C (sub_18003F04C.c)
 *     sub_180042BDC @ 0x180042BDC (sub_180042BDC.c)
 *     __scrt_fastfail @ 0x180044D50 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}
