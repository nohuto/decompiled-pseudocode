/*
 * XREFs of SepRegOpenKey @ 0x140631044
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403C855C (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x140630EDC (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1407AAB18 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1407B2ACC (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x1407BB30C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x14092219C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
