/*
 * XREFs of AudioEncoderIdToRenderingMode @ 0x180127E6C
 * Callers:
 *     ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x1801284E0 (-GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 *     ?GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x180129350 (-GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall AudioEncoderIdToRenderingMode(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *a1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *a1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v5 = a1[1] - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( v5 )
  {
    v6 = *a1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
    if ( *a1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
      v6 = a1[1] - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
    if ( v6 )
    {
      v7 = *a1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
      if ( *a1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
        v7 = a1[1] - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
      if ( v7 )
      {
        v8 = *a1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
        if ( *a1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
          v8 = a1[1] - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
        if ( v8 )
        {
          v9 = *a1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
          if ( *a1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
            v9 = a1[1] - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
          if ( v9 )
          {
            v10 = *a1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
            if ( *a1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
              v10 = a1[1] - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
            if ( v10 )
            {
              v11 = *a1 - MULTICHANNEL_SPATIAL_ENCODER;
              if ( *a1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
                v11 = a1[1] - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
              if ( v11 )
              {
                v12 = *a1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
                if ( *a1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
                  v12 = a1[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
                if ( v12 && (unsigned int)dword_18019D4B0 > 2 )
                {
                  LODWORD(v14) = -2147418113;
                  v16 = (__int64)"AudioEncoderIdToRenderingMode";
                  LODWORD(v15) = 453;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)&dword_18019D4B0,
                    byte_18016D337,
                    a3,
                    a4,
                    (const CHAR **)&v16,
                    (__int64)&v15,
                    (__int64)&v14);
                }
              }
            }
            else
            {
              return 6;
            }
          }
          else
          {
            return 5;
          }
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 1;
  }
  return v4;
}
