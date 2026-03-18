/*
 * XREFs of ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0021784
 * Callers:
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00216F0 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 * Callees:
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C00125D0 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001F50C (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C005F498 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C005F858 (-GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC.c)
 */

char __fastcall MonDescParser::EDID_PARSER::GetHdmiLLCVendorDataBlock(
        MonDescParser::EDID_PARSER *this,
        struct _EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC *a2)
{
  int v2; // ebx
  int v5; // edx
  union _EDID_V1_BLOCK **IterAtElement; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  while ( 1 )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(this, v2) == 2 )
    {
      IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(this, v5);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v8,
        *IterAtElement);
      if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiLLCVendorData(
             (MonDescParser::EDID_PARSER_CEA_861_EXT *)v8,
             a2) )
      {
        break;
      }
    }
    if ( (unsigned int)++v2 >= *((_DWORD *)this + 20) )
      return 0;
  }
  return 1;
}
