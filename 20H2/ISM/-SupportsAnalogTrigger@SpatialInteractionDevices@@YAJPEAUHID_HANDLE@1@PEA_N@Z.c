/*
 * XREFs of ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x1800CA1CC
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016B9B0 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800CB894 (-GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@W4_HIDP_REPORT_TYPE@@GGGGP.c)
 */

__int64 __fastcall SpatialInteractionDevices::SupportsAnalogTrigger(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        bool *a3)
{
  bool v5; // al
  int v6; // ebx
  struct _HIDP_VALUE_CAPS **v8; // [rsp+38h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v5 = 1;
  v6 = 0;
  do
  {
    if ( v6 )
      break;
    v9 = 0LL;
    v5 = (int)SpatialInteractionDevices::Internal::GetValueCaps(
                this,
                a2,
                (enum _HIDP_REPORT_TYPE)word_1801B8D98[0],
                word_1801B8D98[1],
                word_1801B8D98[2],
                word_1801B8D98[3],
                (unsigned __int16)&v9,
                v8) >= 0;
    v6 = 1;
  }
  while ( v5 );
  *(_BYTE *)a2 = v5;
  return 0LL;
}
