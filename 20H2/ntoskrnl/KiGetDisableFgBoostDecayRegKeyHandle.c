/*
 * XREFs of KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403B3A74
 * Callers:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B39F0 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x1405108B0 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KiInitializeVelocity @ 0x140A4AFA8 (KiInitializeVelocity.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
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
