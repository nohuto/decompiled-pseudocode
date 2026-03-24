/*
 * XREFs of DpiAcpiExposeInfo @ 0x1C0196F08
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C01971D4 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C0197718 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiExposeInfo(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rsi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  wchar_t *Buffer; // rax
  CHAR *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  wchar_t *v10; // rax
  unsigned int v11; // r14d
  wchar_t *v12; // rdi
  __int64 v13; // rax
  struct _STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  STRING Source; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v19[2]; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v21[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v22; // [rsp+E0h] [rbp+27h]
  wchar_t v23; // [rsp+E4h] [rbp+2Bh]

  v1 = *(struct _UNICODE_STRING **)(a1 + 64);
  *(_QWORD *)&Source.Length = 65537LL;
  Source.Buffer = (PCHAR)File;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  result = DpiAcpiPrepareAcpiChildNameList(v1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    Buffer = v1[205].Buffer;
    if ( *(_DWORD *)Buffer == 1198089537 && *((_DWORD *)Buffer + 1) )
    {
      Destination.MaximumLength = 4096;
      PoolWithTag = (CHAR *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x74727044u);
      Destination.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Destination.MaximumLength);
        v10 = v1[205].Buffer;
        v11 = 1;
        v12 = v10 + 4;
        if ( *((_DWORD *)v10 + 1) > 1u )
        {
          do
          {
            v12 = (wchar_t *)((char *)v12 + *((unsigned int *)v12 + 1) + 8);
            if ( (*(_BYTE *)v12 & 1) == 0 )
            {
              DestinationString = 0LL;
              RtlInitAnsiString(&DestinationString, (PCSZ)v12 + 8);
              RtlAppendStringToString(&Destination, &DestinationString);
              RtlAppendStringToString(&Destination, &Source);
            }
            ++v11;
          }
          while ( v11 < *((_DWORD *)v1[205].Buffer + 1) );
        }
        if ( !Destination.Buffer )
          return (unsigned int)v3;
        if ( Destination.Length )
        {
          v22 = *(_DWORD *)L"FO";
          v23 = aDisplayAcpiInf[18];
          v19[0] = 2490404LL;
          v19[1] = v21;
          v21[0] = *(_OWORD *)L"_DISPLAY_ACPI_INFO";
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          KeyHandle = 0LL;
          v21[1] = *(_OWORD *)L"_ACPI_INFO";
          Handle = 0LL;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = v1 + 32;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
          if ( v3 >= 0 )
          {
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v3 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
            ZwClose(KeyHandle);
            if ( v3 >= 0 )
            {
              v3 = ZwSetValueKey(
                     Handle,
                     (PUNICODE_STRING)&DestinationString,
                     0,
                     3u,
                     Destination.Buffer,
                     Destination.Length);
              ZwClose(Handle);
            }
          }
        }
      }
      else
      {
        v3 = -1073741801;
        v13 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
        *(_QWORD *)(v13 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v13);
      }
    }
    else
    {
      v3 = -1072431089;
    }
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)v3;
  }
  return result;
}
