/*
 * XREFs of EtwpEnumerateKeyProviders @ 0x140794898
 * Callers:
 *     EtwpEnableKeyProviders @ 0x14079C0FC (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140264B20 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1403FA9E0 (ZwEnumerateKey.c)
 *     RtlNtStatusToDosError @ 0x14068A4C0 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1406B4930 (RtlWriteRegistryValue.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407949F4 (EtwpEnableAutoLoggerProvider.c)
 */

int __fastcall EtwpEnumerateKeyProviders(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        const WCHAR *a4,
        unsigned int *KeyInformation,
        BOOLEAN NewElement,
        PRTL_AVL_TABLE Table,
        int a8)
{
  int result; // eax
  ULONG v11; // edi
  int v12; // r13d
  int v13; // ebx
  unsigned __int64 v14; // rax
  RTL_AVL_TABLE *v15; // rcx
  const WCHAR *v16; // rdx
  __int64 ValueData; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ValueData = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  NewElement = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  RtlInitUnicodeString(&DestinationString, a3);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v11 = 0;
    v12 = a8;
    do
    {
      v13 = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, KeyInformation, 0x11Eu, (PULONG)&ValueData + 1);
      v14 = KeyInformation[3];
      if ( v14 >= 0x108 )
        v13 = -2147483643;
      if ( v13 < 0 )
      {
        if ( v13 != -2147483622 )
        {
          LODWORD(ValueData) = RtlNtStatusToDosError(v13);
          if ( a4 )
            v16 = a4;
          else
            v16 = a3;
          RtlWriteRegistryValue(0, v16, L"EnableStatus", 4u, &ValueData, 4u);
        }
      }
      else
      {
        v15 = Table;
        *((_WORD *)KeyInformation + (v14 >> 1) + 8) = 0;
        RtlInsertElementGenericTableAvl(v15, KeyInformation + 4, KeyInformation[3] + 2, &NewElement);
        if ( NewElement )
          EtwpEnableAutoLoggerProvider(a1, a2, KeyInformation + 4, a3, a4, v12, ValueData);
      }
      ++v11;
    }
    while ( v13 >= 0 );
    return ZwClose(KeyHandle);
  }
  return result;
}
