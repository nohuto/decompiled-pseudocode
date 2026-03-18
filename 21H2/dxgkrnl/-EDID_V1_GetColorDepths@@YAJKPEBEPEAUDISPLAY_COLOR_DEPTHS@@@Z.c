/*
 * XREFs of ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0071624
 * Callers:
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C021AED0 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0018CC0 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00737FC (-GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VE.c)
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0073874 (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 */

__int64 __fastcall EDID_V1_GetColorDepths(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_COLOR_DEPTHS *a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // r9d
  int v12; // eax
  unsigned __int64 v13; // [rsp+20h] [rbp-19h] BYREF
  int v14; // [rsp+28h] [rbp-11h]
  _QWORD v15[12]; // [rsp+30h] [rbp-9h] BYREF
  unsigned __int64 v16; // [rsp+A8h] [rbp+6Fh] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v15[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v15, a2, a1);
  if ( (int)result < 0 )
    return result;
  v13 = 0LL;
  *(_OWORD *)a3 = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  v14 = 0;
  if ( MonDescParser::EDID_PARSER::GetHdmiLLCVendorDataBlock(
         (MonDescParser::EDID_PARSER *)v15,
         (struct _EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC *)&v13) )
  {
    v5 = v13;
    v6 = (v13 >> 42) & 0xC | (v13 >> 41) & 0x20 | 2;
    *(_DWORD *)a3 = v6;
    if ( (v5 & 0x80000000000LL) != 0 )
    {
      v7 = v15[0];
      *((_DWORD *)a3 + 1) = v6;
      *((_DWORD *)a3 + 2) = (*(_BYTE *)(v7 + 24) & 0x10) != 0 ? v6 : 0;
    }
    v16 = 0LL;
    if ( MonDescParser::EDID_PARSER::GetHdmiForumVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v15,
           (struct _EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC *)&v16) )
    {
      *((_DWORD *)a3 + 3) |= (v16 >> 46) & 0xC | (v16 >> 45) & 0x20;
    }
    return 0LL;
  }
  v8 = v15[0];
  v9 = *(unsigned __int8 *)(v15[0] + 20LL);
  if ( (v9 & 0x80u) == 0 )
    return 3221226021LL;
  switch ( (v9 >> 4) & 7 )
  {
    case 0u:
      goto LABEL_27;
    case 1u:
      *(_DWORD *)a3 = 1;
      goto LABEL_28;
    case 2u:
LABEL_27:
      *(_DWORD *)a3 = 2;
LABEL_28:
      switch ( (*(unsigned __int8 *)(v8 + 24) >> 3) & 3 )
      {
        case 0:
          v11 = *(unsigned __int16 *)(v8 + 33);
          v13 = *(_QWORD *)(v8 + 25);
          LOWORD(v14) = v11;
          if ( !(((unsigned __int8)v13 >> 6) | (4 * BYTE2(v13)))
            && !(((unsigned __int8)v13 >> 4) & 3 | (4 * BYTE3(v13)))
            && !(((unsigned __int8)v13 >> 2) & 3 | (4 * BYTE4(v13)))
            && !(v13 & 3 | (4 * (unsigned int)BYTE5(v13)))
            && !((BYTE1(v13) >> 6) | (4 * BYTE6(v13)))
            && !((BYTE1(v13) >> 4) & 3 | (4 * HIBYTE(v13)))
            && (BYTE1(v13) >> 2) & 3 | (4 * (unsigned __int8)v11)
            && BYTE1(v13) & 3 | (4 * (v11 >> 8)) )
          {
            v12 = *(_DWORD *)a3;
            *(_DWORD *)a3 = 0;
            *((_DWORD *)a3 + 4) = v12;
          }
          return 0LL;
        case 1:
          *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
          return 0LL;
        case 2:
          v10 = *(_DWORD *)a3;
          break;
        case 3:
          v10 = *(_DWORD *)a3;
          *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
          break;
        default:
          return 0LL;
      }
      *((_DWORD *)a3 + 2) = v10;
      return 0LL;
    case 3u:
      *(_DWORD *)a3 = 6;
      goto LABEL_28;
    case 4u:
      *(_DWORD *)a3 = 14;
      goto LABEL_28;
    case 5u:
      *(_DWORD *)a3 = 30;
      goto LABEL_28;
    case 6u:
      *(_DWORD *)a3 = 62;
      goto LABEL_28;
  }
  if ( ((v9 >> 4) & 7) != 7 )
    goto LABEL_28;
  return 3221225485LL;
}
