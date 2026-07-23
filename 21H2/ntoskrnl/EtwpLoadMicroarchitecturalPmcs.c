/*
 * XREFs of EtwpLoadMicroarchitecturalPmcs @ 0x1407D29BC
 * Callers:
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A75C (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void EtwpLoadMicroarchitecturalPmcs()
{
  __int64 v0; // rax
  SIZE_T v1; // r14
  WCHAR *PoolWithTag; // rdi
  int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD KeyInformation[136]; // [rsp+98h] [rbp-70h] BYREF

  KeyHandle = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  memset(KeyInformation, 0, 0x218uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  v0 = -1LL;
  do
    ++v0;
  while ( aRegistryMachin_24[v0] );
  v1 = (unsigned int)(2 * v0 + 514);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v1, 0x50777445u);
  if ( PoolWithTag )
  {
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v3 = -1;
      do
      {
        v4 = ZwEnumerateKey(DestinationString[0], ++v3, KeyBasicInformation, KeyInformation, 0x216u, ResultLength);
        v5 = v4;
        if ( v4 < 0 || KeyInformation[3] >= 0x1FEu )
        {
          if ( v4 == -1073741789 || v4 == -2147483643 )
            v5 = 0;
        }
        else
        {
          *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
          if ( RtlStringCbPrintfW(
                 PoolWithTag,
                 v1,
                 L"%ws\\%ws",
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
                 &KeyInformation[4]) >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], PoolWithTag);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              EtwpLoadMicroarchitecturalProfileGroup(KeyHandle);
              ZwClose(KeyHandle);
            }
          }
        }
      }
      while ( v5 >= 0 );
      ZwClose(DestinationString[0]);
    }
    ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  }
}
