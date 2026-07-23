/*
 * XREFs of _RtlCreateEnvironment@8 @ 0x4B2DACC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 */

NTSTATUS __cdecl RtlCreateEnvironment(BOOLEAN CloneCurrentEnvironment, PVOID *Environment)
{
  ULONG v2; // eax

  if ( CloneCurrentEnvironment )
    v2 = 0;
  else
    v2 = 4;
  return RtlCreateEnvironmentEx(0, Environment, v2);
}
