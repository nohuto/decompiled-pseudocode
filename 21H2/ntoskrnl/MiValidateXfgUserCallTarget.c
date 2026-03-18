/*
 * XREFs of MiValidateXfgUserCallTarget @ 0x14059A6AC
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x1405A36D0 (MiDisableXfgOnPatchedFunctions.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 * Callees:
 *     CfgAddressToBitState @ 0x14059A668 (CfgAddressToBitState.c)
 *     MiIsProcessXfgEnabled @ 0x14096EBDC (MiIsProcessXfgEnabled.c)
 */

_BOOL8 __fastcall MiValidateXfgUserCallTarget(unsigned __int64 a1, const signed __int64 **a2)
{
  _KPROCESS *Process; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  return (unsigned int)CfgAddressToBitState(a1, *a2) == 2 && (unsigned int)MiIsProcessXfgEnabled(Process);
}
