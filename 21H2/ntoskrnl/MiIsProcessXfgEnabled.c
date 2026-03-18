/*
 * XREFs of MiIsProcessXfgEnabled @ 0x14096EBDC
 * Callers:
 *     MiValidateXfgUserCallTarget @ 0x14059A6AC (MiValidateXfgUserCallTarget.c)
 *     MiDisableXfgOnPatchedFunctions @ 0x1405A36D0 (MiDisableXfgOnPatchedFunctions.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x14096EC0C (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsProcessXfgEnabled(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) && (*(_DWORD *)(a1 + 2516) & 0x2000000) != 0;
}
