/*
 * XREFs of CmpCreateControlSetOverride @ 0x140A8F6E4
 * Callers:
 *     CmpCreateExtendedControlSets @ 0x140A594D0 (CmpCreateExtendedControlSets.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 */

__int64 __fastcall CmpCreateControlSetOverride(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v9; // [rsp+90h] [rbp-70h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  KeyHandle = 0LL;
  DestinationString.Buffer = (wchar_t *)&v9;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Handle = 0LL;
  v3 = RtlUnicodeStringPrintf(&DestinationString, L"\\REGISTRY\\%ws\\%ws", v2, v1);
  if ( v3 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
    if ( v3 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v3 >= 0 )
        v3 = 0;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
