/*
 * XREFs of swprintf_s @ 0x1403D32F0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14037C290 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14037C370 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x14037F7F0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x14037F890 (RtlIpv4AddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x1403AF9C8 (HalpExtBuildResourceIdString.c)
 *     RtlEthernetAddressToStringW @ 0x140586CF0 (RtlEthernetAddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405BEB2C (BiSpacesUpdatePhysicalDevicePath.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14063EC74 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     PnpInitializeNotifyEntry @ 0x1406C5A54 (PnpInitializeNotifyEntry.c)
 *     SeGetTokenDeviceMap @ 0x1406E253C (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406F2D34 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _PnpSetPropertyWorker @ 0x140726CB0 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140756F40 (_CmCreateOrdinalInstanceKey.c)
 *     BiUnloadHiveByName @ 0x140766424 (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x140768614 (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14076F9F8 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x140770368 (BiGetNtPartitionPath.c)
 *     CmSetAcpiHwProfile @ 0x14078EE98 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407BC43C (CmpUpdateReorganizeRegistryValues.c)
 *     CmpRestampVersion @ 0x1408642C0 (CmpRestampVersion.c)
 *     CmpAddAcpiAliasEntry @ 0x140873A3C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140873CB4 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140874470 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140874748 (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x140923560 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x14094C1D0 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094C7BC (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x14094CC70 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14094D0CC (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x14094DB70 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094E364 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14094ECAC (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x14094FA60 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14094FBF0 (NtDeleteDriverEntry.c)
 *     BiCreateBootEntry @ 0x14096DA38 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x140970180 (SiFindSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x140A89540 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403D3320 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
