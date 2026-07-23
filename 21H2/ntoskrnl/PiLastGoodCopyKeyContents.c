/*
 * XREFs of PiLastGoodCopyKeyContents @ 0x140A70008
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x140A6FF54 (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiLastGoodCopyKeyContents(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  char *PoolWithTag; // rdi
  NTSTATUS v5; // ebx
  NTSTATUS v7; // eax
  HANDLE v8; // rcx
  NTSTATUS v9; // eax
  ULONG v10; // esi
  HANDLE KeyHandle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES v15; // [rsp+90h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+100h] [rbp+77h] BYREF
  ULONG Disposition; // [rsp+108h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&v15.Length + 1) = 0;
  *(&v15.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  Disposition = 0;
  ValueName = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x418uLL, 0x674C7050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v15.Length = 48;
    v15.RootDirectory = 0LL;
    v15.Attributes = 576;
    v15.ObjectName = a2;
    *(_OWORD *)&v15.SecurityDescriptor = 0LL;
    v7 = ZwCreateKey(&Handle, 0xF003Fu, &v15, 0, 0LL, 0, &Disposition);
    v8 = KeyHandle;
    v5 = v7;
    if ( v7 >= 0 )
    {
      v9 = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, PoolWithTag, 0x418u, &ResultLength);
      v10 = 1;
      if ( v9 < 0 )
      {
LABEL_9:
        v5 = 0;
        if ( v9 != -2147483622 )
          v5 = v9;
        if ( v5 >= 0 )
          ZwDeleteKey(KeyHandle);
      }
      else
      {
        while ( 1 )
        {
          ValueName.Buffer = (wchar_t *)(PoolWithTag + 20);
          ValueName.Length = *((_WORD *)PoolWithTag + 8);
          ValueName.MaximumLength = ValueName.Length;
          v5 = ZwSetValueKey(
                 Handle,
                 &ValueName,
                 0,
                 *((_DWORD *)PoolWithTag + 1),
                 &PoolWithTag[*((unsigned int *)PoolWithTag + 2)],
                 *((_DWORD *)PoolWithTag + 3));
          if ( v5 < 0 )
            break;
          v9 = ZwEnumerateValueKey(KeyHandle, v10++, KeyValueFullInformation, PoolWithTag, 0x418u, &ResultLength);
          if ( v9 < 0 )
            goto LABEL_9;
        }
      }
      ZwClose(KeyHandle);
      v8 = Handle;
    }
    ZwClose(v8);
  }
  ExFreePoolWithTag(PoolWithTag, 0x674C7050u);
  return (unsigned int)v5;
}
