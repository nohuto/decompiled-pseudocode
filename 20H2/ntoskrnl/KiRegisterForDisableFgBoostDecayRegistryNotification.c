/*
 * XREFs of KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B39F0
 * Callers:
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x1405108B0 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 * Callees:
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403B3A74 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403FA4B0 (ZwNotifyChangeKey.c)
 */

NTSTATUS KiRegisterForDisableFgBoostDecayRegistryNotification()
{
  NTSTATUS result; // eax

  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    qword_140C31FF8 = 0LL;
    *(_QWORD *)KiDisableFgBoostDecayRegistryChangeWork = 0LL;
    qword_140C31FF0 = (__int64)KiDisableFgBoostDecayRegistryChangeHandler;
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
