/*
 * XREFs of swprintf_s @ 0x1403D5F80
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14037DFC0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14037E0A0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x140381520 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x1403815C0 (RtlIpv4AddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x1403B1FB8 (HalpExtBuildResourceIdString.c)
 *     RtlEthernetAddressToStringW @ 0x14058A650 (RtlEthernetAddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C27AC (BiSpacesUpdatePhysicalDevicePath.c)
 *     SeGetTokenDeviceMap @ 0x14063C438 (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406C6114 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PnpInitializeNotifyEntry @ 0x1406ECF54 (PnpInitializeNotifyEntry.c)
 *     RtlStringFromGUIDEx @ 0x1406FA618 (RtlStringFromGUIDEx.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB214 (LocalConvertSDToStringSD_Rev1.c)
 *     _PnpSetPropertyWorker @ 0x140735740 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140765B80 (_CmCreateOrdinalInstanceKey.c)
 *     BiUnloadHiveByName @ 0x140775454 (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x140776C1C (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14077DFF8 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x14077E968 (BiGetNtPartitionPath.c)
 *     CmSetAcpiHwProfile @ 0x14079B850 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CACCC (CmpUpdateReorganizeRegistryValues.c)
 *     CmpRestampVersion @ 0x140869CE0 (CmpRestampVersion.c)
 *     CmpAddAcpiAliasEntry @ 0x14087958C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140879FC0 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x14087A298 (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x140929388 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x140951F90 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14095257C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x140952A30 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x140952E8C (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x140953930 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140954124 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x140954A6C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x140955820 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409559B0 (NtDeleteDriverEntry.c)
 *     BiCreateBootEntry @ 0x140973808 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140975F50 (SiFindSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x140A8F250 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403D5FB0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
