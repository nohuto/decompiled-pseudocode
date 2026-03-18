/*
 * XREFs of SepRegOpenKey @ 0x14068D944
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1403CB19C (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x14068D7DC (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1407B8A58 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1407C0A1C (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x1407C9B9C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409281FC (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
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
