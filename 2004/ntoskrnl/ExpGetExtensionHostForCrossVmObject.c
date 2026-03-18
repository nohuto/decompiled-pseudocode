/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x1409590B0
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x140958D5C (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x140959100 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x140959170 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x1409591E0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x140959230 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x140959274 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x1409592D0 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x14095933C (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x140959398 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x1409593F4 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
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
