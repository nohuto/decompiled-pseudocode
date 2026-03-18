/*
 * XREFs of sprintf_s @ 0x1403D45F0
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x14036A390 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14038E430 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x140586AA0 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x140586B10 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x140586BD0 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14076A41C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpFindControlSet @ 0x14078B248 (CmpFindControlSet.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078FE30 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407914CC (CmpSetVersionData.c)
 *     HdlspDispatch @ 0x1409EBE80 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1409EC5F8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1409ECC18 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x1409ED2AC (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140A57EF8 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403D4620 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
