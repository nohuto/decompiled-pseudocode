/*
 * XREFs of wcsnlen @ 0x1403CFC90
 * Callers:
 *     _wcslwr_s @ 0x1403CDD50 (_wcslwr_s.c)
 *     EmonAddProfileSource @ 0x1404CD9A0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404D8010 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1407BC300 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140910A9C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x140935FD0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14096DAB0 (BiGetObjectReferenceFromEfiEntry.c)
 *     SiIsValidWindowsBootEntry @ 0x14096FB40 (SiIsValidWindowsBootEntry.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Src )
  {
    if ( !*Src )
      break;
    ++result;
  }
  return result;
}
