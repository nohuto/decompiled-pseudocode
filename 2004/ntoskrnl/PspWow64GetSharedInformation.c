/*
 * XREFs of PspWow64GetSharedInformation @ 0x14065D79C
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x14065D530 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1406E53AC (PspWow64InitThread.c)
 *     PsThawProcess @ 0x1406F0A90 (PsThawProcess.c)
 *     PspInitializeSystemDlls @ 0x140A66CAC (PspInitializeSystemDlls.c)
 * Callees:
 *     <none>
 */

void *__fastcall PspWow64GetSharedInformation(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &PsWowX86SharedInformation;
  if ( v1 == 1 )
    return &PsWowArm32SharedInformation;
  return 0LL;
}
