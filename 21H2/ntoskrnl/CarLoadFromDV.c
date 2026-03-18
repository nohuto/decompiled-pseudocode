/*
 * XREFs of CarLoadFromDV @ 0x140604E24
 * Callers:
 *     CarLoadConfig @ 0x140604DC0 (CarLoadConfig.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

unsigned __int64 __fastcall CarLoadFromDV(char a1)
{
  unsigned __int64 result; // rax

  CarRuleClasses = VfRuleClasses;
  result = (unsigned int)VfTriageContext;
  CarTriageContext = VfTriageContext;
  if ( !a1 )
  {
    CarXdvOptions = VfFlightOptions;
    return (unsigned __int64)memmove(CarDrivers, MmVerifyDriverBuffer, (unsigned int)MmVerifyDriverBufferLength);
  }
  return result;
}
