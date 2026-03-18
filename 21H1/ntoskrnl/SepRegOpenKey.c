/*
 * XREFs of SepRegOpenKey @ 0x140677D14
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403C774C (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x140677BB8 (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1407A79B8 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1407AF95C (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x1407B819C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x140921124 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
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
