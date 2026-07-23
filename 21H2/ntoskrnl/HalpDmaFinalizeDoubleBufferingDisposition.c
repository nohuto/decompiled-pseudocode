/*
 * XREFs of HalpDmaFinalizeDoubleBufferingDisposition @ 0x140A649A4
 * Callers:
 *     HalpDmaInitSystem @ 0x1409A1270 (HalpDmaInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void HalpDmaFinalizeDoubleBufferingDisposition()
{
  void *v0; // rbx
  _BYTE *v1; // rdi
  NTSTATUS v2; // eax
  PVOID PoolWithTag; // rax
  size_t v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-25h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+90h] [rbp+37h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  v12[1] = L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v0 = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ValueName.Buffer = L"DynamicMemory";
  v12[0] = 11141288LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  *(_QWORD *)&ValueName.Length = 1835034LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( !ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) )
  {
    v1 = KeyValueInformation;
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength);
    if ( (v2 == -2147483643 || v2 == -1073741789) && ResultLength > 0x10 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x206C6148u);
      v0 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_7:
        if ( KeyHandle )
          ZwClose(KeyHandle);
        return;
      }
      v1 = PoolWithTag;
      v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
    }
    if ( !v2 )
    {
      v4 = *((unsigned int *)v1 + 2);
      v5 = (unsigned int *)(v1 + 12);
      if ( (unsigned int)v4 < 4 )
      {
        v9 = 0;
        memmove(&v9, v5, v4);
        v6 = v9;
      }
      else
      {
        v6 = *v5;
      }
      v7 = (v6 << 30) - 1;
      if ( v7 > HalpMaximumPhysicalMemoryAddress )
        HalpMaximumPhysicalMemoryAddress = v7;
    }
    if ( v0 )
      ExFreePoolWithTag(v0, 0x206C6148u);
    goto LABEL_7;
  }
}
