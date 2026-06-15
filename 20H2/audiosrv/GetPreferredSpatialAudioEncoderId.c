/*
 * XREFs of GetPreferredSpatialAudioEncoderId @ 0x18004C36C
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180049AAC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180125920 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPreferredSpatialAudioEncoderId(_OWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rax

  *a1 = MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( !a2 )
    goto LABEL_2;
  if ( a2 == 3 && *(_DWORD *)a3 )
  {
    v4 = *(_QWORD *)(a3 + 12) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(a3 + 20) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v4 )
LABEL_2:
      *a1 = *(_OWORD *)(a3 + 12);
  }
  return a1;
}
