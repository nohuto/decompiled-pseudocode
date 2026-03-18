/*
 * XREFs of NtMapViewOfSectionEx @ 0x1406E6FE0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x14064D220 (MiMapViewOfSectionExCommon.c)
 */

NTSTATUS __fastcall NtMapViewOfSectionEx(
        void *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9)
{
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-30h]

  LODWORD(ullMultiplicand) = a9;
  return MiMapViewOfSectionExCommon(
           a1,
           a2,
           0,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           ullMultiplicand,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
