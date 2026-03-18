/*
 * XREFs of sprintf_s @ 0x1403D37B0
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x1403699D0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14038D8C0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x140586370 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1405863E0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1405864A0 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076803C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078DF60 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x14078F0CC (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x140793688 (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x1409EBE80 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1409EC5F8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1409ECC18 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x1409ED2AC (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140A521F8 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403D37E0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
