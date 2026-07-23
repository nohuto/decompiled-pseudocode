/*
 * XREFs of _wil_RtlStagingConfig_QueryFeatureState@16 @ 0x4B3A1000
 * Callers:
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0x4B306714 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 * Callees:
 *     _RtlQueryFeatureConfiguration@16 @ 0x4B2E51D0 (_RtlQueryFeatureConfiguration@16.c)
 */

int __fastcall wil_RtlStagingConfig_QueryFeatureState(int a1, RTL_FEATURE_ID a2, int a3, int a4)
{
  int v4; // ebx
  NTSTATUS v6; // eax
  ULONG Flags; // ecx
  ULONG v8; // ecx
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [esp+Ch] [ebp-14h] BYREF
  ULONGLONG ChangeStamp; // [esp+18h] [ebp-8h] BYREF

  v4 = 0;
  memset(&FeatureConfiguration, 0, sizeof(FeatureConfiguration));
  v6 = RtlQueryFeatureConfiguration(a2, (RTL_FEATURE_CONFIGURATION_TYPE)(a3 == 0), &ChangeStamp, &FeatureConfiguration);
  if ( !v6 )
  {
    Flags = FeatureConfiguration.Flags;
    v4 = 1;
    *(_DWORD *)a1 = (FeatureConfiguration.Flags >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(Flags) & 0x3F;
    *(_DWORD *)(a1 + 12) = FeatureConfiguration.VariantPayload;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)Flags >> 14;
    *(_DWORD *)(a1 + 20) = (Flags >> 6) & 1;
    v8 = (Flags >> 7) & 1;
LABEL_5:
    *(_DWORD *)(a1 + 16) = v8;
    return v4;
  }
  if ( v6 == 279 )
  {
    v8 = (FeatureConfiguration.Flags >> 7) & 1;
    goto LABEL_5;
  }
  return v4;
}
