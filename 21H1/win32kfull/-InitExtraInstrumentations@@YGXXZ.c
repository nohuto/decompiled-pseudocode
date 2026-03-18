/*
 * XREFs of ?InitExtraInstrumentations@@YGXXZ @ 0xEAA6E
 * Callers:
 *     _InitModuleAllocations@0 @ 0xEAA64 (_InitModuleAllocations@0.c)
 * Callees:
 *     ?Feature_AtomicCheckFailure__private_IsEnabledPreCheck@@YGHXZ @ 0xEAA9A (-Feature_AtomicCheckFailure__private_IsEnabledPreCheck@@YGHXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __stdcall InitExtraInstrumentations()
{
  FastGetProfileDword(0, 2, L"USERExtraInstrumentations", _gdwExtraInstrumentations, _gdwExtraInstrumentations);
  Feature_AtomicCheckFailure__private_IsEnabledPreCheck();
  if ( (_gdwExtraInstrumentations & 4) != 0 )
    _gfRecordPnpNotification = 1;
}
