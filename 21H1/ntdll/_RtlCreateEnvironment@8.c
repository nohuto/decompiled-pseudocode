/*
 * XREFs of _RtlCreateEnvironment@8 @ 0x4B2DACC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 */

int __stdcall RtlCreateEnvironment(char a1, int a2)
{
  int v2; // eax

  if ( a1 )
    v2 = 0;
  else
    v2 = 4;
  return RtlCreateEnvironmentEx(0, a2, v2);
}
