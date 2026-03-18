/*
 * XREFs of PspWow64GetSharedInformation @ 0x1406AD2D4
 * Callers:
 *     PspWow64InitThread @ 0x1406AA374 (PspWow64InitThread.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406AD068 (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x14071C6B0 (PsThawProcess.c)
 *     PspInitializeSystemDlls @ 0x140A6DF7C (PspInitializeSystemDlls.c)
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
