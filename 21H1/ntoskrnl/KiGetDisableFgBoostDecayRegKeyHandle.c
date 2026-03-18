/*
 * XREFs of KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403AB484
 * Callers:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403AB400 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x14050C930 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KiInitializeVelocity @ 0x140A3F4E4 (KiInitializeVelocity.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 */

NTSTATUS KiGetDisableFgBoostDecayRegKeyHandle()
{
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  result = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( !KiDisableFgBoostDecayRegistryHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&KiDisableFgBoostDecayRegKeyName;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(&KiDisableFgBoostDecayRegistryHandle, 0x11u, &ObjectAttributes);
  }
  return result;
}
