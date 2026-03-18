/*
 * XREFs of swprintf_s @ 0x1403D24B0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14037B510 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x14037B5F0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x14037EE00 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x14037EEA0 (RtlIpv4AddressToStringW.c)
 *     HalpExtBuildResourceIdString @ 0x1403A8908 (HalpExtBuildResourceIdString.c)
 *     RtlEthernetAddressToStringW @ 0x1405865C0 (RtlEthernetAddressToStringW.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405BE40C (BiSpacesUpdatePhysicalDevicePath.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14068ED94 (LocalConvertSDToStringSD_Rev1.c)
 *     PnpInitializeNotifyEntry @ 0x1406B3954 (PnpInitializeNotifyEntry.c)
 *     SeGetTokenDeviceMap @ 0x1406C1FBC (SeGetTokenDeviceMap.c)
 *     SiGetBootDeviceName @ 0x1406D1D74 (SiGetBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     RtlStringFromGUIDEx @ 0x14070EF18 (RtlStringFromGUIDEx.c)
 *     _PnpSetPropertyWorker @ 0x14072BE70 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1407548A8 (_CmCreateOrdinalInstanceKey.c)
 *     BiUnloadHiveByName @ 0x140764A70 (BiUnloadHiveByName.c)
 *     SiGetBiosSystemPartition @ 0x14076622C (SiGetBiosSystemPartition.c)
 *     BiAddStoreFromFile @ 0x14076D5E8 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x14076DF58 (BiGetNtPartitionPath.c)
 *     CmSetAcpiHwProfile @ 0x14078CFC8 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407B92CC (CmpUpdateReorganizeRegistryValues.c)
 *     CmpRestampVersion @ 0x140862FA0 (CmpRestampVersion.c)
 *     CmpAddAcpiAliasEntry @ 0x14087274C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140873180 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140873458 (CmpMoveBiosAliasTable.c)
 *     SddlpUuidToString @ 0x1409222B0 (SddlpUuidToString.c)
 *     ExpConvertSignatureName @ 0x14094AE30 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094B41C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x14094B8D0 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14094BD2C (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x14094C7D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094CFC4 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14094D90C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x14094E6C0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14094E850 (NtDeleteDriverEntry.c)
 *     BiCreateBootEntry @ 0x14096C698 (BiCreateBootEntry.c)
 *     SiFindSystemPartition @ 0x14096EDE0 (SiFindSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x140A89FB0 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1403D24E0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
