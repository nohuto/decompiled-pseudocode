/*
 * XREFs of PiDcInitUpdateProperties @ 0x1407A3E28
 * Callers:
 *     PiDcInit @ 0x140A54024 (PiDcInit.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     RtlUnicodeStringToInteger @ 0x1405DE4B0 (RtlUnicodeStringToInteger.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 PiDcInitUpdateProperties()
{
  unsigned __int16 *PoolWithTag; // rdi
  NTSTATUS v1; // eax
  NTSTATUS v2; // ebx
  ULONG v3; // r15d
  ULONG i; // edx
  NTSTATUS v5; // eax
  _WORD *v6; // r14
  unsigned __int16 v7; // ax
  int v8; // esi
  ULONG j; // edx
  NTSTATUS v10; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-21h] BYREF
  GUID Guid; // [rsp+90h] [rbp+Fh] BYREF
  ULONG Value; // [rsp+A0h] [rbp+1Fh] BYREF
  GUID Buffer; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+37h]

  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  Value = 0;
  v20 = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  Buffer = 0LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x47706E50u);
  if ( PoolWithTag )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\DeviceContainerPropertyUpdateEvents");
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v1 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v2 = v1;
    if ( v1 != -1073741772 )
    {
      if ( v1 < 0 )
        goto LABEL_24;
      v3 = 0;
      for ( i = 0; ; i = v3 )
      {
        v5 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, PoolWithTag, 0x218u, &ResultLength);
        v2 = v5;
        if ( v5 == -2147483622 )
          break;
        if ( v5 < 0 )
          goto LABEL_24;
        *(&ObjectAttributes.Length + 1) = 0;
        v6 = PoolWithTag + 8;
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        DestinationString.Buffer = PoolWithTag + 8;
        v7 = PoolWithTag[6];
        Handle = 0LL;
        DestinationString.Length = v7;
        DestinationString.MaximumLength = v7;
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        v2 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( v2 < 0 )
          goto LABEL_24;
        v8 = 0;
        for ( j = 0; ; j = ++v8 )
        {
          v10 = ZwEnumerateValueKey(Handle, j, KeyValueFullInformation, PoolWithTag, 0x218u, &ResultLength);
          v2 = v10;
          if ( v10 == -2147483622 )
          {
            v2 = 0;
            goto LABEL_21;
          }
          if ( v10 != -2147483643 )
          {
            if ( v10 < 0 )
              goto LABEL_21;
            if ( (unsigned int)(*(_DWORD *)v6 - 80) <= 0x12 )
            {
              *(_DWORD *)&DestinationString.Length = 4980812;
              DestinationString.Buffer = PoolWithTag + 10;
              if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
              {
                DestinationString.Buffer = PoolWithTag + 49;
                DestinationString.Length = *v6 - 78;
                DestinationString.MaximumLength = DestinationString.Length;
                if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) >= 0 )
                {
                  LODWORD(v20) = Value;
                  Buffer = Guid;
                  if ( *((_DWORD *)PoolWithTag + 1) == 4 && *((_DWORD *)PoolWithTag + 3) == 4 )
                    HIDWORD(v20) = *(_DWORD *)((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2));
                  else
                    HIDWORD(v20) = 0;
                  if ( !RtlInsertElementGenericTableAvl(&PiDcUpdateProperties, &Buffer, 0x18u, 0LL) )
                    break;
                }
              }
            }
          }
        }
        v2 = -1073741670;
LABEL_21:
        ZwClose(Handle);
        Handle = 0LL;
        if ( v2 < 0 )
          goto LABEL_24;
        ++v3;
      }
    }
    v2 = 0;
  }
  else
  {
    v2 = -1073741670;
  }
LABEL_24:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
  return (unsigned int)v2;
}
