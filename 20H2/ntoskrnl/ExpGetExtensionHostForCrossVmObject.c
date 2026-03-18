/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x14095EE70
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x14095EB1C (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x14095EEC0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x14095EF30 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x14095EFA0 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x14095EFF0 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x14095F034 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x14095F090 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x14095F0FC (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x14095F158 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x14095F1B4 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
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
