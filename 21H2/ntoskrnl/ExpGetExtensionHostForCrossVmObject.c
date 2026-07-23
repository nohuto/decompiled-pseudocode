/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x14095C8B0
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x14095C55C (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x14095C900 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x14095C970 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x14095C9E0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x14095CA30 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x14095CA74 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x14095CAD0 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x14095CB3C (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x14095CB98 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x14095CBF4 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 */

unsigned __int64 __fastcall ExpGetExtensionHostForCrossVmObject(__int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx

  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot);
  if ( result )
  {
    v4 = ExpCrossVmIntExtensionHostRoot;
LABEL_3:
    *a2 = v4;
    return result;
  }
  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest);
  if ( result )
  {
    v4 = ExpCrossVmIntExtensionHostGuest;
    goto LABEL_3;
  }
  return result;
}
