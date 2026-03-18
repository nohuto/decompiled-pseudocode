/*
 * XREFs of ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095F4AC
 * Callers:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407C58A8 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140267DE0 (RtlAppendUnicodeToString.c)
 *     ZwCreateKey @ 0x1403F8510 (ZwCreateKey.c)
 *     RtlLengthSidAsUnicodeString @ 0x1406FB6A8 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfGetPermanentPerUserDataStoreHandle(unsigned __int8 *Sid, PHANDLE KeyHandle)
{
  __int64 result; // rax
  unsigned __int16 v5; // si
  unsigned __int16 v6; // r14
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rbx
  NTSTATUS v9; // edi
  UNICODE_STRING Destination; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  int v13; // [rsp+D0h] [rbp+77h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  v13 = 0;
  result = RtlLengthSidAsUnicodeString(Sid, &v13);
  if ( (int)result >= 0 )
  {
    v5 = v13;
    v6 = v13 + 82;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v13 + 82), 0x20666E57u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)&Destination.Length = 0LL;
      Destination.MaximumLength = v6;
      Destination.Buffer = PoolWithTag;
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\");
      UnicodeString.Length = 0;
      UnicodeString.MaximumLength = v5;
      UnicodeString.Buffer = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
      v9 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
      if ( v9 >= 0 )
      {
        Destination.Length += UnicodeString.Length;
        RtlAppendUnicodeToString(&Destination, L"_Classes\\NotificationData");
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      }
      ExFreePoolWithTag(v8, 0x20666E57u);
      return (unsigned int)v9;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
