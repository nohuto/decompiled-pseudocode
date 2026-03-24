/*
 * XREFs of KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B5070
 * Callers:
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x1405123E0 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403B50F4 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403FC6E0 (ZwNotifyChangeKey.c)
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
