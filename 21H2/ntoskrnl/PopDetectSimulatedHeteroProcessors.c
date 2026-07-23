/*
 * XREFs of PopDetectSimulatedHeteroProcessors @ 0x1407BBF98
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x1405DE4B0 (RtlUnicodeStringToInteger.c)
 */

char __fastcall PopDetectSimulatedHeteroProcessors(__int64 a1)
{
  char v1; // r14
  ULONG v3; // esi
  HANDLE v4; // rcx
  NTSTATUS v5; // ebx
  unsigned __int16 v6; // di
  __int64 v7; // rcx
  __int64 v8; // r15
  ULONG ActiveProcessorCount; // eax
  int *v10; // r9
  _BYTE *v11; // r8
  __int64 v12; // r10
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING String; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  __int128 KeyValueInformation; // [rsp+C0h] [rbp-40h] BYREF
  __int128 KeyInformation; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+F0h] [rbp-10h]
  _DWORD v29[43]; // [rsp+F4h] [rbp-Ch] BYREF

  Value = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  v21 = a1;
  KeyInformation = 0LL;
  v27 = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  v28 = 1310721;
  String = 0LL;
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  memset(v29, 0, 0xA4uLL);
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v1 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) < 0 )
    return v1;
  v3 = 0;
  String.Buffer = (wchar_t *)&v27;
  String.MaximumLength = 4;
  RtlInitUnicodeString(&ValueName, L"SmallProcessorMask");
  v4 = KeyHandle;
  ObjectAttributes.RootDirectory = KeyHandle;
  do
  {
    v5 = ZwEnumerateKey(v4, v3, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    if ( v5 < 0 )
      goto LABEL_20;
    ResultLength = HIDWORD(KeyInformation);
    if ( HIDWORD(KeyInformation) <= 4 )
    {
      String.Length = WORD6(KeyInformation);
      v5 = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
      if ( v5 >= 0 )
      {
        v6 = Value;
        if ( Value < HIWORD(v28) )
        {
          DestinationString = String;
          v5 = ZwOpenKey(&Handle, 1u, &ObjectAttributes);
          if ( v5 < 0 )
          {
LABEL_20:
            ++v3;
            goto LABEL_21;
          }
          v5 = ZwQueryValueKey(
                 Handle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 &ResultLength);
          if ( v5 >= 0 && ((_DWORD)KeyValueInformation == 4 || (_DWORD)KeyValueInformation == 11) )
          {
            v1 = 1;
            if ( DWORD1(KeyValueInformation) == 4 )
            {
              v7 = DWORD2(KeyValueInformation);
              *((_QWORD *)&KeyValueInformation + 1) = DWORD2(KeyValueInformation);
LABEL_16:
              if ( (unsigned __int16)v28 <= v6 )
                LOWORD(v28) = v6 + 1;
              *(_QWORD *)&v29[2 * v6 + 1] |= v7;
              goto LABEL_19;
            }
            if ( DWORD1(KeyValueInformation) == 8 )
            {
              v7 = *((_QWORD *)&KeyValueInformation + 1);
              goto LABEL_16;
            }
          }
LABEL_19:
          ZwClose(Handle);
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    v4 = KeyHandle;
  }
  while ( v5 >= 0 );
  ZwClose(KeyHandle);
  v8 = v21;
  if ( v1 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v10 = KiProcessorIndexToNumberMappingTable;
    v11 = (_BYTE *)(v8 + 8);
    v12 = ActiveProcessorCount + 1;
    do
    {
      v13 = *v10++;
      v14 = v13;
      LOBYTE(v13) = v13 & 0x3F;
      v14 >>= 6;
      v15 = (*(_QWORD *)&v29[2 * v14 + 1] >> v13) & 1LL;
      LOBYTE(v13) = !((*(_QWORD *)&v29[2 * v14 + 1] >> v13) & 1);
      *v11 = v13;
      *(v11 - 1) = v15;
      *(v11 - 2) = v13;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    *(_WORD *)(v8 + 4) = 257;
  }
  return v1;
}
