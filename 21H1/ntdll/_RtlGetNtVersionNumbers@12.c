/*
 * XREFs of _RtlGetNtVersionNumbers@12 @ 0x4B333B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetNtVersionNumbers(PULONG NtMajorVersion, PULONG NtMinorVersion, PULONG NtBuildNumber)
{
  struct _PEB *v3; // ecx

  v3 = NtCurrentPeb();
  if ( NtMajorVersion )
    *NtMajorVersion = v3->OSMajorVersion;
  if ( NtMinorVersion )
    *NtMinorVersion = v3->OSMinorVersion;
  if ( NtBuildNumber )
    *NtBuildNumber = v3->OSBuildNumber | 0xF0000000;
}
