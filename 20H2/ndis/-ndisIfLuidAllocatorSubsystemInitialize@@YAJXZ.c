/*
 * XREFs of ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0145150
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145064 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0018F70 (NdisConvertNdisStatusToNtStatus.c)
 *     NdisCloseConfiguration @ 0x1C0028580 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C0028660 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C0028FD0 (NdisOpenProtocolConfiguration.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C0032BF0 (NdisOpenConfigurationKeyByIndex.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

NTSTATUS ndisIfLuidAllocatorSubsystemInitialize(void)
{
  ULONG v0; // r15d
  unsigned __int16 Length; // r13
  wchar_t *Buffer; // r12
  unsigned int v3; // r14d
  _QWORD *PoolWithTag; // rdi
  __int64 v5; // rax
  int v6; // ebx
  NTSTATUS result; // eax
  UNICODE_STRING Keyword; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-30h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING KeyName; // [rsp+60h] [rbp-10h] BYREF
  int Status; // [rsp+B0h] [rbp+40h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+48h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+C0h] [rbp+50h] BYREF
  PVOID KeyHandle; // [rsp+C8h] [rbp+58h] BYREF

  Status = 0;
  qword_1C00E5F60 = (__int64)&qword_1C00E5F58;
  qword_1C00E5F58 = (__int64)&qword_1C00E5F58;
  KeInitializeMutex(&Mutex, 0xFFFFu);
  if ( !RtlCheckRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes")
    || (result = RtlCreateRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes"), result >= 0) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes");
    ConfigurationHandle = 0LL;
    NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &DestinationString);
    if ( Status )
    {
      return NdisConvertNdisStatusToNtStatus(Status);
    }
    else
    {
      v0 = 0;
      while ( 1 )
      {
        KeyHandle = 0LL;
        NdisOpenConfigurationKeyByIndex(&Status, ConfigurationHandle, v0++, &KeyName, &KeyHandle);
        if ( Status )
          break;
        Keyword.Buffer = (wchar_t *)L"IfType";
        ParameterValue = 0LL;
        *(_QWORD *)&Keyword.Length = 917516LL;
        NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &Keyword, NdisParameterInteger);
        if ( !Status )
        {
          Length = ParameterValue->ParameterData.StringData.Length;
          v9.Buffer = (wchar_t *)L"IfUsedNetLuidIndices";
          *(_QWORD *)&v9.Length = 2752552LL;
          NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &v9, NdisParameterBinary);
          if ( Status )
          {
            Buffer = 0LL;
            v3 = 0;
          }
          else
          {
            Buffer = ParameterValue->ParameterData.StringData.Buffer;
            v3 = ParameterValue->ParameterData.StringData.Length;
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v3 + 64, 0x6669444Eu);
          memset(PoolWithTag, 0, 2 * v3 + 64);
          *((_WORD *)PoolWithTag + 8) = Length;
          if ( v3 )
          {
            PoolWithTag[7] = (char *)PoolWithTag + v3 + 64;
            *((_DWORD *)PoolWithTag + 10) = v3;
            PoolWithTag[6] = PoolWithTag + 8;
            memmove(PoolWithTag + 8, Buffer, v3);
            memmove((void *)PoolWithTag[7], Buffer, v3);
          }
          v5 = qword_1C00E5F58;
          if ( *(__int64 **)(qword_1C00E5F58 + 8) != &qword_1C00E5F58 )
            __fastfail(3u);
          *PoolWithTag = qword_1C00E5F58;
          PoolWithTag[1] = &qword_1C00E5F58;
          *(_QWORD *)(v5 + 8) = PoolWithTag;
          qword_1C00E5F58 = (__int64)PoolWithTag;
        }
      }
      v6 = NdisConvertNdisStatusToNtStatus(Status);
      if ( ConfigurationHandle )
        NdisCloseConfiguration(ConfigurationHandle);
      return v6;
    }
  }
  return result;
}
