/*
 * XREFs of ?DisplayID_GetVideoModeFromType7Desc@@YAJAEAU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoModeDescriptor@@@Z @ 0x1C005ED98
 * Callers:
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C005E97C (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetVideoModeFromType7Desc(
        struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *a1,
        struct _VideoModeDescriptor *a2)
{
  signed int v3; // r10d
  USHORT v4; // bx
  USHORT v5; // r11
  USHORT v6; // r8
  unsigned __int16 v7; // r8
  USHORT v8; // si
  __int16 v9; // ax
  __int16 v10; // dx
  int v11; // ebp
  int v12; // r8d
  int v13; // edi
  int v14; // ecx
  unsigned int v15; // esi
  ULONG v16; // eax
  int v17; // ecx
  int v18; // r8d

  a2->TimingType = 4;
  a2->VideoStandardType = 0;
  v3 = 1000 * (*(unsigned __int8 *)a1 + 1 + ((*((unsigned __int8 *)a1 + 1) + (*((unsigned __int8 *)a1 + 2) << 8)) << 8));
  a2->PixelClockRate = v3;
  v4 = *((unsigned __int8 *)a1 + 4) + (*((unsigned __int8 *)a1 + 5) << 8) + 1;
  a2->HorizontalActivePixels = v4;
  v5 = *((unsigned __int8 *)a1 + 12) + (*((unsigned __int8 *)a1 + 13) << 8) + 1;
  a2->VerticalActivePixels = v5;
  if ( v3 )
  {
    if ( v4 )
    {
      if ( v5 )
      {
        v6 = *((unsigned __int8 *)a1 + 6) + (*((unsigned __int8 *)a1 + 7) << 8) + 1;
        a2->HorizontalBlankingPixels = v6;
        v7 = v4 + v6;
        v8 = *((unsigned __int8 *)a1 + 14) + (*((unsigned __int8 *)a1 + 15) << 8) + 1;
        a2->VerticalBlankingPixels = v8;
        a2->HorizontalSyncOffset = *((unsigned __int8 *)a1 + 8) + ((*((_BYTE *)a1 + 9) & 0x7F) << 8) + 1;
        a2->VerticalSyncOffset = *((unsigned __int8 *)a1 + 16) + ((*((_BYTE *)a1 + 17) & 0x7F) << 8) + 1;
        a2->HorizontalSyncPulseWidth = *((unsigned __int8 *)a1 + 10) + (*((unsigned __int8 *)a1 + 11) << 8) + 1;
        v9 = *((unsigned __int8 *)a1 + 18);
        v10 = *((unsigned __int8 *)a1 + 19);
        *(_DWORD *)&a2->HorizontalBorder = 0;
        a2->VerticalSyncPulseWidth = v9 + (v10 << 8) + 1;
        a2->IsInterlaced = (*((_BYTE *)a1 + 3) & 0x10) != 0;
        LOBYTE(v9) = (*((_BYTE *)a1 + 3) >> 5) & 3;
        a2->SyncSignalType = 3;
        a2->StereoModeType = v9;
        a2->HorizontalPolarityType = (unsigned __int8)~*((_BYTE *)a1 + 9) >> 7;
        LOBYTE(v9) = ~*((_BYTE *)a1 + 17);
        *(_WORD *)&a2->IsSerrationRequired = 514;
        a2->VerticalPolarityType = (unsigned __int8)v9 >> 7;
        a2->CompositePolarityType = 2;
        a2->HorizontalImageSize = *((_BYTE *)a1 + 3) >> 7;
        if ( v7 )
        {
          if ( v8 + v5 )
          {
            v11 = v7;
            v12 = v3;
            v13 = v11 * (unsigned __int16)(v8 + v5);
            if ( v3 < 0 )
              v12 = -v3;
            v14 = -v13;
            if ( v13 >= 0 )
              v14 = v11 * (unsigned __int16)(v8 + v5);
            if ( v14 )
            {
              while ( 1 )
              {
                v12 %= v14;
                if ( !v12 )
                  break;
                v14 %= v12;
                if ( !v14 )
                  goto LABEL_13;
              }
            }
            else
            {
LABEL_13:
              v14 = v12;
            }
            v15 = v3 / v14;
            a2->VerticalRefreshRateNumerator = v3 / v14;
            v16 = v13 / v14;
            v17 = -v3;
            a2->VerticalRefreshRateDenominator = v16;
            if ( v3 >= 0 )
              v17 = v3;
            v18 = v11;
            while ( 1 )
            {
              v17 %= v18;
              if ( !v17 )
                break;
              v18 %= v17;
              if ( !v18 )
              {
                v18 = v17;
                break;
              }
            }
            a2->HorizontalRefreshRateNumerator = v3 / v18;
            a2->HorizontalRefreshRateDenominator = v11 / v18;
            if ( v4 != 1920 )
              return 0LL;
            if ( v5 != 540 )
              return 0LL;
            if ( !a2->IsInterlaced )
              return 0LL;
            a2->VerticalActivePixels = 1080;
            if ( v15 / v16 != 30 )
              return 0LL;
            if ( v15 <= 0x7FFFFFFF )
            {
              a2->VerticalRefreshRateNumerator = 2 * v15;
              return 0LL;
            }
            if ( v16 >= 2 )
            {
              a2->VerticalRefreshRateDenominator = v16 >> 1;
              return 0LL;
            }
          }
        }
      }
    }
  }
  return 3223126025LL;
}
