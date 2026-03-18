/*
 * XREFs of EtwpQueryPartitionRegistryInformation @ 0x1403B9ABC
 * Callers:
 *     EtwpContainerResumeWnfCallback @ 0x1405A5200 (EtwpContainerResumeWnfCallback.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     StringToGuidNoBrackets @ 0x1403B9CFC (StringToGuidNoBrackets.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlUnicodeToUTF8N @ 0x140707A20 (RtlUnicodeToUTF8N.c)
 *     RtlQueryRegistryValuesEx @ 0x140709DA0 (RtlQueryRegistryValuesEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpQueryPartitionRegistryInformation(
        GUID *a1,
        PVOID *a2,
        _WORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        GUID *a6)
{
  NTSTATUS RegistryValues; // ebx
  ULONG v12; // ebx
  CHAR *PoolWithTag; // rax
  NTSTATUS v14; // eax
  _WORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  PCWCH UnicodeStringSource[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h] BYREF
  PCWCH *v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+C8h] [rbp-38h]
  _QWORD v28[28]; // [rsp+E0h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  UTF8StringActualByteCount = 0;
  v15[0] = 0;
  *a4 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  *(_OWORD *)UnicodeStringSource = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    memset(v28, 0, sizeof(v28));
    v23 = a4;
    LODWORD(v28[11]) = 1;
    v28[0] = &EtwpQueryRegistryCallback;
    v28[3] = &v22;
    v28[7] = &EtwpQueryRegistryCallback;
    v28[2] = L"ContainerType";
    v24 = 1;
    LODWORD(v28[4]) = 4;
    v22 = 4;
    v28[10] = &v24;
    v28[9] = L"ContainerId";
    v28[12] = v15;
    v25 = UnicodeStringSource;
    v28[17] = &v26;
    v28[16] = L"ContainerCorrelationId";
    v28[19] = v15;
    v28[14] = &EtwpQueryRegistryCallback;
    LODWORD(v28[18]) = 1;
    v26 = 1;
    p_UnicodeString = &UnicodeString;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v28, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      *a5 = 0LL;
      if ( (unsigned int)StringToGuidNoBrackets(UnicodeStringSource, a1) )
        *a1 = NullGuid;
      if ( !RtlUnicodeToUTF8N(
              0LL,
              0,
              &UTF8StringActualByteCount,
              UnicodeStringSource[1],
              LOWORD(UnicodeStringSource[0])) )
      {
        v12 = UTF8StringActualByteCount;
        if ( UTF8StringActualByteCount < 0xFFFF )
        {
          PoolWithTag = (CHAR *)ExAllocatePoolWithTag(
                                  NonPagedPoolNxCacheAligned,
                                  UTF8StringActualByteCount,
                                  0x61777445u);
          *a2 = PoolWithTag;
          if ( PoolWithTag )
          {
            v14 = RtlUnicodeToUTF8N(
                    PoolWithTag,
                    v12,
                    &UTF8StringActualByteCount,
                    UnicodeStringSource[1],
                    LOWORD(UnicodeStringSource[0]));
            if ( !v14 || v14 == 263 )
            {
              *a3 = UTF8StringActualByteCount;
            }
            else
            {
              ExFreePoolWithTag(*a2, 0x61777445u);
              *a2 = 0LL;
            }
          }
        }
      }
      RegistryValues = StringToGuidNoBrackets(&UnicodeString, a6);
      if ( RegistryValues )
      {
        RegistryValues = 0;
        *a6 = NullGuid;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeAnsiString((PUNICODE_STRING)UnicodeStringSource);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)RegistryValues;
}
