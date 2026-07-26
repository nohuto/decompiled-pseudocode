/*
 * XREFs of ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014578C
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145088 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0019180 (NdisConvertNdisStatusToNtStatus.c)
 *     NdisCloseConfiguration @ 0x1C00288E0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00289C0 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C0029330 (NdisOpenProtocolConfiguration.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003A1A4 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 */

__int64 ndisIfInterfaceSubsystemInitialize(void)
{
  unsigned int v1; // edx
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rcx
  size_t v5; // r8
  _UNICODE_STRING v6; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v8; // [rsp+50h] [rbp-10h] BYREF
  int Status; // [rsp+70h] [rbp+10h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp+18h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+80h] [rbp+20h] BYREF

  Status = 0;
  KeInitializeSpinLock(&ndisIfListLock);
  ConfigurationHandle = 0LL;
  qword_1C00E4AE0 = (__int64)&ndisIfList;
  ndisIfList.Flink = &ndisIfList;
  *(_QWORD *)&v6.Length = 655368LL;
  v6.Buffer = L"Ndis";
  NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &v6);
  if ( Status )
    return NdisConvertNdisStatusToNtStatus(Status);
  ParameterValue = 0LL;
  Keyword.Buffer = L"DefaultIfLoopbackDesc";
  *(_QWORD *)&Keyword.Length = 2883626LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterString);
  if ( Status
    || !ndisIsValidIfStringParts((const wchar_t *)ParameterValue, ParameterValue->ParameterData.StringData.Length) )
  {
    word_1C00E45C0 = 54;
    wmemcpy((wchar_t *)&xmmword_1C00E45C2, L"Software Loopback Interface", 27);
  }
  else
  {
    word_1C00E45C0 = v1;
    memmove(&xmmword_1C00E45C2, *(const void **)(v2 + 16), v1);
  }
  v8.Buffer = L"DefaultIfLoopbackAlias";
  *(_QWORD *)&v8.Length = 3014700LL;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v8, NdisParameterString);
  if ( Status
    || !ndisIsValidIfStringParts((const wchar_t *)ParameterValue, ParameterValue->ParameterData.StringData.Length) )
  {
    word_1C00E47D0 = 50;
    wmemcpy((wchar_t *)&xmmword_1C00E47D2, L"Loopback Pseudo-Interface", 25);
  }
  else
  {
    v5 = 512LL;
    word_1C00E47D0 = v3;
    if ( (unsigned __int16)v3 <= 0x200u )
      v5 = v3;
    memmove(&xmmword_1C00E47D2, *(const void **)(v4 + 16), v5);
  }
  NdisCloseConfiguration(ConfigurationHandle);
  return 0LL;
}
