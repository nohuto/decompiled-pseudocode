/*
 * XREFs of _EngAllocPrivateUserMem@12 @ 0x1D4419
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall EngAllocPrivateUserMem(PDD_SURFACE_LOCAL psl, SIZE_T cjMemSize, ULONG ulTag)
{
  int v3; // eax

  v3 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v3);
  return 0;
}
