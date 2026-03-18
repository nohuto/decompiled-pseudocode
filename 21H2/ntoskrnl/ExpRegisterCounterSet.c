/*
 * XREFs of ExpRegisterCounterSet @ 0x14085BA10
 * Callers:
 *     EtwRegisterCounters @ 0x14085B72C (EtwRegisterCounters.c)
 *     ExpPcwHostCallback @ 0x14085B800 (ExpPcwHostCallback.c)
 * Callees:
 *     PcwRegister @ 0x1408114C0 (PcwRegister.c)
 */

NTSTATUS __fastcall ExpRegisterCounterSet(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  NTSTATUS result; // eax

  result = PcwRegister(Registration, Info);
  if ( result == -1073741584 )
  {
    Info->Version = 256;
    return PcwRegister(Registration, Info);
  }
  return result;
}
