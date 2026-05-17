/*
 * XREFs of _RtlSetEnvironmentVariable@12 @ 0x4B2DB170
 * Callers:
 *     _RtlpWow64ThunkEnvironment64To32@0 @ 0x4B2DAFBF (_RtlpWow64ThunkEnvironment64To32@0.c)
 *     _RtlpResetDriveEnvironment@4 @ 0x4B32D76C (_RtlpResetDriveEnvironment@4.c)
 * Callees:
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 */

int __stdcall RtlSetEnvironmentVariable(int a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  void *v3; // edx
  int v4; // ecx

  v3 = 0;
  if ( a3 )
    v4 = *a3 >> 1;
  else
    v4 = 0;
  if ( a3 )
    v3 = (void *)*((_DWORD *)a3 + 1);
  return RtlSetEnvironmentVar(a1, *((void **)a2 + 1), *a2 >> 1, v3, v4);
}
