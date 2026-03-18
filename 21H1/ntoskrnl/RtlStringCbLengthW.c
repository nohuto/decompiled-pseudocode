/*
 * XREFs of RtlStringCbLengthW @ 0x1402E535C
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x1403B9558 (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1405BB1B8 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x14069F4C0 (_PnpRegQueryValueIndirect.c)
 *     _PnpValidatePropertyData @ 0x14069FB08 (_PnpValidatePropertyData.c)
 *     RtlpValidRelativeAttribute @ 0x1406E1C04 (RtlpValidRelativeAttribute.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PiSwCompleteCreate @ 0x140753438 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     RtlpPopulateLanguageConfigList @ 0x140793F1C (RtlpPopulateLanguageConfigList.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     AslpFileVerStringBlockGetValue @ 0x14079AA98 (AslpFileVerStringBlockGetValue.c)
 *     PpmRegisterProfiles @ 0x1407B03A8 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1408E10B4 (PopFxValidateReturnedUnicodeString.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408EFAC0 (PopIdleWakeGenerateDescriptionString.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x14090E3A0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14090FED8 (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x14092496C (LocalGetStringForRelativeAttribute.c)
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
