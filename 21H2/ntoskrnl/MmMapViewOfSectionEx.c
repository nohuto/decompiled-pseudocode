/*
 * XREFs of MmMapViewOfSectionEx @ 0x1402D6B9C
 * Callers:
 *     MiMapSecurePureReserveView @ 0x140755714 (MiMapSecurePureReserveView.c)
 *     MiMapProcessExecutable @ 0x1407557F0 (MiMapProcessExecutable.c)
 *     PspMapSystemDll @ 0x140756AD4 (PspMapSystemDll.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x140756C90 (MiMapViewOfSectionExCommon.c)
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
  int v12; // [rsp+68h] [rbp-10h]

  return MiMapViewOfSectionExCommon(a1, a2, 1, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0, v12);
}
