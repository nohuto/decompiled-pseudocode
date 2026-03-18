/*
 * XREFs of KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403AB400
 * Callers:
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x14050C930 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 * Callees:
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403AB484 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403F4650 (ZwNotifyChangeKey.c)
 */

NTSTATUS KiRegisterForDisableFgBoostDecayRegistryNotification()
{
  NTSTATUS result; // eax

  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    qword_140C32178 = 0LL;
    *(_QWORD *)KiDisableFgBoostDecayRegistryChangeWork = 0LL;
    qword_140C32170 = (__int64)KiDisableFgBoostDecayRegistryChangeHandler;
    result = ZwNotifyChangeKey(
               KiDisableFgBoostDecayRegistryHandle,
               0LL,
               KiDisableFgBoostDecayRegistryChangeWork,
               (PVOID)1,
               &KiDisableFgBoostDecayRegistryChangeIoStatus,
               4u,
               0,
               0LL,
               0,
               1u);
    if ( result < 0 )
    {
      result = ZwClose(KiDisableFgBoostDecayRegistryHandle);
      KiDisableFgBoostDecayRegistryHandle = 0LL;
    }
  }
  return result;
}
