/*
 * XREFs of KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B1080
 * Callers:
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x14050CF80 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 * Callees:
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403B1104 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403F58E0 (ZwNotifyChangeKey.c)
 */

NTSTATUS KiRegisterForDisableFgBoostDecayRegistryNotification()
{
  NTSTATUS result; // eax

  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    qword_140C31F58 = 0LL;
    *(_QWORD *)KiDisableFgBoostDecayRegistryChangeWork = 0LL;
    qword_140C31F50 = (__int64)KiDisableFgBoostDecayRegistryChangeHandler;
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
