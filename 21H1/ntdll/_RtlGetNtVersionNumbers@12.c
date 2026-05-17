/*
 * XREFs of _RtlGetNtVersionNumbers@12 @ 0x4B333B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlGetNtVersionNumbers(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
  struct _PEB *v3; // ecx
  unsigned int result; // eax

  v3 = NtCurrentPeb();
  if ( a1 )
  {
    result = v3->OSMajorVersion;
    *a1 = result;
  }
  if ( a2 )
  {
    result = v3->OSMinorVersion;
    *a2 = result;
  }
  if ( a3 )
  {
    result = v3->OSBuildNumber | 0xF0000000;
    *a3 = result;
  }
  return result;
}
