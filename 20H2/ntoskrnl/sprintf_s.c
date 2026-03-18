/*
 * XREFs of sprintf_s @ 0x1403D7280
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x14036C370 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x140390920 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x14058A400 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x14058A470 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x14058A530 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140778A2C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14079C7E8 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x14079DD6C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x1407A2768 (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x1409F1E80 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1409F25F8 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x1409F2C18 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x1409F32AC (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140A58578 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1403D72B0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
