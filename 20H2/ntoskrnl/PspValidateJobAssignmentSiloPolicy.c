/*
 * XREFs of PspValidateJobAssignmentSiloPolicy @ 0x14062C78C
 * Callers:
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14023CDA0 (PsGetEffectiveServerSilo.c)
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14023F1B0 (PsGetProcessServerSilo.c)
 */

bool __fastcall PspValidateJobAssignmentSiloPolicy(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 EffectiveServerSilo; // rbx

  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    if ( a4 != 4 )
      return 1;
    return !PsIsServerSilo(a1);
  }
  else
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
    if ( PsGetEffectiveServerSilo(a2) == EffectiveServerSilo )
      return 1;
    return EffectiveServerSilo == PsGetProcessServerSilo(a3);
  }
}
