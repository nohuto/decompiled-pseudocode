/*
 * XREFs of CarLoadConfig @ 0x140604DC0
 * Callers:
 *     CarInit @ 0x140603974 (CarInit.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CarLoadFromDV @ 0x140604E24 (CarLoadFromDV.c)
 *     CarReadRegistry @ 0x140604E78 (CarReadRegistry.c)
 */

__int64 CarLoadConfig()
{
  __int64 v0; // rcx

  memset(CarDrivers, 0, sizeof(CarDrivers));
  CarTriageContext = 1;
  CarTipTag = 0;
  CarXdvOptions = 0;
  CarRuleClasses = 0LL;
  if ( (_DWORD)InitializationPhase )
  {
    LOBYTE(v0) = 1;
    CarLoadFromDV(v0);
    return CarReadRegistry();
  }
  else
  {
    CarLoadFromDV(0LL);
    return 0LL;
  }
}
