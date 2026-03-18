/*
 * XREFs of wcsnlen @ 0x1403D3760
 * Callers:
 *     _wcslwr_s @ 0x1403D1820 (_wcslwr_s.c)
 *     EmonAddProfileSource @ 0x1404D13F0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1404DBAB0 (Amd64AddProfileSource.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1407CDD00 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091795C (RtlpSetTimeZoneInformationWorker.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093D0A0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140974C20 (BiGetObjectReferenceFromEfiEntry.c)
 *     SiIsValidWindowsBootEntry @ 0x140976CB0 (SiIsValidWindowsBootEntry.c)
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
