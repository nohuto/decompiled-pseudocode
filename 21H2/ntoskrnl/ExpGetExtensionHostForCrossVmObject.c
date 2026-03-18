/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x140A07EC0
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x140A07BFC (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x140A07F10 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x140A07F80 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x140A07FF0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x140A08040 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x140A08084 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x140A080E0 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x140A0814C (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x140A081A8 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x140A08204 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
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
