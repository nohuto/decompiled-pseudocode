/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x140957D10
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x1409579BC (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x140957D60 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x140957DD0 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x140957E40 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x140957E90 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x140957ED4 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x140957F30 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x140957F9C (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x140957FF8 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x140958054 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
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
