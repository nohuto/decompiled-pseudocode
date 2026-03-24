/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x14095C6F0
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x14095C39C (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x14095C740 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x14095C7B0 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x14095C820 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x14095C870 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x14095C8B4 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x14095C910 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x14095C97C (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x14095C9D8 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x14095CA34 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14029F2F8 (ExGetExtensionTable.c)
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
