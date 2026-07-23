/*
 * XREFs of NtMapViewOfSectionEx @ 0x1406E6FE0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x14064D220 (MiMapViewOfSectionExCommon.c)
 */

NTSTATUS __cdecl NtMapViewOfSectionEx(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-30h]

  LODWORD(ullMultiplicand) = ExtendedParameterCount;
  return MiMapViewOfSectionExCommon(
           SectionHandle,
           (__int64)ProcessHandle,
           0,
           (__int64 *)BaseAddress,
           SectionOffset,
           ViewSize,
           AllocationType,
           PageProtection,
           ExtendedParameters,
           ullMultiplicand,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
