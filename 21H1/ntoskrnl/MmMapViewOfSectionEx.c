/*
 * XREFs of MmMapViewOfSectionEx @ 0x1402C1530
 * Callers:
 *     PspMapSystemDll @ 0x14064D080 (PspMapSystemDll.c)
 *     MiMapProcessExecutable @ 0x14064EB10 (MiMapProcessExecutable.c)
 *     MiMapCfgBitMapSection @ 0x1406512D4 (MiMapCfgBitMapSection.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x14064D220 (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall MmMapViewOfSectionEx(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9,
        int a10,
        __int64 a11)
{
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-30h]

  LODWORD(ullMultiplicand) = a9;
  return MiMapViewOfSectionExCommon(a1, a2, 1, a3, a4, a5, a6, a7, a8, ullMultiplicand, a10, a11, 0, 0);
}
