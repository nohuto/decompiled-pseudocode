/*
 * XREFs of KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403B1104
 * Callers:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B1080 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x14050CF80 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KiInitializeVelocity @ 0x140A44D08 (KiInitializeVelocity.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
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
