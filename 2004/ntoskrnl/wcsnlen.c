/*
 * XREFs of wcsnlen @ 0x1403D0AD0
 * Callers:
 *     _wcslwr_s @ 0x1403CEB90 (_wcslwr_s.c)
 *     EmonAddProfileSource @ 0x1404CDE50 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404D8520 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1407BF470 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140911E1C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x140937270 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14096EE50 (BiGetObjectReferenceFromEfiEntry.c)
 *     SiIsValidWindowsBootEntry @ 0x140970EE0 (SiIsValidWindowsBootEntry.c)
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
