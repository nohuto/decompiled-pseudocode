/*
 * XREFs of KeCommitSmtState @ 0x1403CDAAC
 * Callers:
 *     CmpAcceptBoot @ 0x14078D730 (CmpAcceptBoot.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 */

int KeCommitSmtState()
{
  int result; // eax
  int v1; // ecx
  int Data; // [rsp+30h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v6[2]; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+98h] [rbp+2Fh] BYREF
  int v9; // [rsp+A8h] [rbp+3Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ResultLength = 0;
  Data = 0;
  ObjectAttributes.RootDirectory = 0LL;
  v9 = 0;
  v6[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  ValueName.Buffer = L"FeatureSettings";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  KeyValueInformation = 0LL;
  v6[0] = 11141288LL;
  *(_QWORD *)&ValueName.Length = 2097182LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result < 0 )
    goto LABEL_7;
  result = ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result == -1073741772 )
  {
    v1 = 0;
  }
  else
  {
    if ( result < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
      goto LABEL_7;
    v1 = HIDWORD(KeyValueInformation);
  }
  Data = v1 ^ (v1 ^ KiFeatureSettings) & 0x1C0000;
  result = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
LABEL_7:
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
