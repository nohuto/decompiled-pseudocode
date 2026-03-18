/*
 * XREFs of RtlStringCbLengthW @ 0x140312FE0
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x1403BCD48 (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1405BF438 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x1406BD070 (_PnpRegQueryValueIndirect.c)
 *     _PnpValidatePropertyData @ 0x1406BD280 (_PnpValidatePropertyData.c)
 *     RtlpValidRelativeAttribute @ 0x1406D7BB4 (RtlpValidRelativeAttribute.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PiSwCompleteCreate @ 0x140746764 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 *     RtlpPopulateLanguageConfigList @ 0x1407A2FFC (RtlpPopulateLanguageConfigList.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407AE198 (AslpFileVerStringBlockGetValue.c)
 *     PpmRegisterProfiles @ 0x1407C1468 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1408E8174 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F69C0 (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140915280 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140916DB8 (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x14092BA44 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v5; // rax
  size_t i; // r8
  NTSTATUS v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
