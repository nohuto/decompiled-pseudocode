/*
 * XREFs of PspWow64GetSharedInformation @ 0x1406F9DB4
 * Callers:
 *     PsThawProcess @ 0x1406CF790 (PsThawProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406F9B48 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1406FC5CC (PspWow64InitThread.c)
 *     PspInitializeSystemDlls @ 0x140A672CC (PspInitializeSystemDlls.c)
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
