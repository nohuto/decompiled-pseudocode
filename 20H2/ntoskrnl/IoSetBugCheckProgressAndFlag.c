/*
 * XREFs of IoSetBugCheckProgressAndFlag @ 0x140500DDC
 * Callers:
 *     IoWriteCrashDump @ 0x140501150 (IoWriteCrashDump.c)
 * Callees:
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140501060 (IoUpdateBugCheckProgressEnvVariable.c)
 */

void IoSetBugCheckProgressAndFlag()
{
  int v0; // eax

  if ( CrashdmpDumpBlock )
  {
    v0 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v0 & 0x60000) == 0 )
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v0 & 0xFFFFFE00 | 0x25;
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x800u;
    IoUpdateBugCheckProgressEnvVariable();
  }
}
