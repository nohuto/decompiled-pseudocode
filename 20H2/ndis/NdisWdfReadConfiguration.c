/*
 * XREFs of NdisWdfReadConfiguration @ 0x1C005F180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C0012E28 (WPP_RECORDER_SF_Z.c)
 *     NdisReadConfiguration @ 0x1C0028660 (NdisReadConfiguration.c)
 */

void __fastcall NdisWdfReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        UNICODE_STRING *a4,
        NDIS_PARAMETER_TYPE ParameterType)
{
  const UNICODE_STRING *v6; // rbx

  v6 = &stru_1C00C9130;
  while ( !RtlEqualUnicodeString(a4, v6, 1u) )
  {
    if ( ++v6 == (const UNICODE_STRING *)&unk_1C00C9220 )
    {
      NdisReadConfiguration(Status, ParameterValue, ConfigurationHandle, a4, ParameterType);
      return;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      8u,
      0x25u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      &a4->Length);
  *Status = -1073741823;
}
