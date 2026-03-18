/*
 * XREFs of ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0009F28
 * Callers:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0009D34 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0009EB4 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000BB30 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000BBDC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C001DBE0 (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C001DFCC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001E0C0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001E170 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001E250 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001E8E0 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0021C44 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0021E34 (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C0021F38 (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C0022000 (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C0022140 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C002220C (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x1C002234C (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C00223C4 (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?EDID_V1_RemovePII@@YAJKPEAE@Z @ 0x1C002248C (-EDID_V1_RemovePII@@YAJKPEAE@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0022548 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C002415C (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C002420C (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C005EB18 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C005EBB4 (-EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z.c)
 *     ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x1C005EC40 (-EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1C005ECF4 (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 * Callees:
 *     ?IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0009FB4 (-IsValidCheckSum@EDID_PARSER@MonDescParser@@AEBA_NPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C000A014 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_PARSER::Initialize(
        MonDescParser::EDID_PARSER *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // rcx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  MonDescParser::EDID_PARSER *v8; // rcx

  if ( (a3 & 0x7F) != 0 )
    return 3223126017LL;
  v4 = 0;
  if ( !a3 )
    return 3223126017LL;
  v5 = a3 >> 7;
  if ( v5 )
  {
    do
    {
      if ( v4 >= 0xA )
        break;
      v6 = v4++ << 7;
      *((_QWORD *)this + (*((_QWORD *)this + 10))++) = &a2[v6];
    }
    while ( v4 < v5 );
  }
  if ( **(_QWORD **)this != 0xFFFFFFFFFFFF00LL )
    return 3223126018LL;
  IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(this, 0);
  return !MonDescParser::EDID_PARSER::IsValidCheckSum(v8, *IterAtElement) ? 0xC01D0003 : 0;
}
