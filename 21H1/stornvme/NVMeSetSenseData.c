/*
 * XREFs of NVMeSetSenseData @ 0x1C001AFC8
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 *     FormInquiryBlockLimitsData @ 0x1C00012E8 (FormInquiryBlockLimitsData.c)
 *     ScsiUnmapRequest @ 0x1C0001C54 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001E0C (ScsiModeSenseRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C0003858 (ScsiReadCapacityRequest.c)
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0010758 (FormInquiryBlockProvisioningData.c)
 *     FormInquiryDeviceCharacteristicsData @ 0x1C001083C (FormInquiryDeviceCharacteristicsData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00108A4 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0010AE8 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C0010CF0 (FormInquiryStandardData.c)
 *     FormInquiryVpdSupportedPagesData @ 0x1C0010EA0 (FormInquiryVpdSupportedPagesData.c)
 *     LogSenseInformationalExceptions @ 0x1C0012810 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C001297C (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C00129F8 (LogSenseTemperature.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0014304 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00145EC (NVMeWriteBufferFirmwareDownload.c)
 *     ScsiLogSenseRequest @ 0x1C00154BC (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0015548 (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C00157F4 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001598C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0015A94 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0015B9C (ScsiStartStopUnitRequest.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00034C8 (GetSrbScsiData.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0005240 (memmove.c)
 */

void *__fastcall NVMeSetSenseData(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  void *result; // rax
  char *v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // edx
  void *v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 Src; // [rsp+38h] [rbp-18h] BYREF
  __int16 v11; // [rsp+48h] [rbp-8h]
  _BYTE *v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int8 v13; // [rsp+78h] [rbp+28h] BYREF

  *(_BYTE *)(a1 + 3) = a2;
  v11 = 0;
  Src = 0LL;
  WORD6(Src) = a4;
  v12 = 0LL;
  v9 = 0LL;
  v13 = 0;
  BYTE2(Src) = a3 & 0xF;
  LOBYTE(Src) = -16;
  BYTE7(Src) = 10;
  result = (void *)GetSrbScsiData(a1, 0LL, &v12, &v9, &v13);
  if ( v12 )
    *v12 = 2;
  v6 = (char *)v9;
  if ( v9 && v13 )
  {
    v7 = 18;
    if ( v13 <= 0x12u )
      v7 = v13;
    result = memmove(v9, &Src, v7);
    v8 = v13;
    *(_BYTE *)(a1 + 3) |= 0x80u;
    if ( v8 > v7 )
      return NVMeZeroMemory(&v6[v7], v8 - v7);
  }
  return result;
}
