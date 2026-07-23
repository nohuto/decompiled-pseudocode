/*
 * XREFs of CmpAddAliasEntry @ 0x140A8C334
 * Callers:
 *     CmpCreateHardwareProfiles @ 0x140A50B9C (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14036A8CC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     CmpAddDockingInfo @ 0x140A51024 (CmpAddDockingInfo.c)
 */

__int64 __fastcall CmpAddAliasEntry(void *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  NTSTATUS v6; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-B8h] BYREF
  int Data; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  char v14; // [rsp+A0h] [rbp-60h] BYREF

  ObjectAttributes.RootDirectory = a1;
  KeyHandle = 0LL;
  Handle = 0LL;
  Data = 0;
  Disposition = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpStrAliasString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v6 == -1073741772 )
    v6 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      ++v5;
      DestinationString.Buffer = (wchar_t *)&v14;
      RtlUnicodeStringPrintf(&DestinationString, L"%04d", v5);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      if ( v6 < 0 )
        break;
      ZwClose(Handle);
      if ( v5 >= 0xC8 )
        goto LABEL_10;
    }
    if ( v6 == -1073741772 )
      v6 = 0;
LABEL_10:
    if ( v6 < 0 || (v6 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition), v6 < 0) )
    {
      Handle = 0LL;
    }
    else
    {
      CmpAddDockingInfo(Handle, a2);
      Data = a3;
      v6 = ZwSetValueKey(Handle, (PUNICODE_STRING)&CmpStrProfileNumberString, 0, 4u, &Data, 4u);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    KeyHandle = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
