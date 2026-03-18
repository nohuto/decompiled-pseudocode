/*
 * XREFs of ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C000A014
 * Callers:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0009F28 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001F758 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C0021ECC (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISIO.c)
 *     ?GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x1C0021FB0 (-GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 *     ?GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1C00221BC (-GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@.c)
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00222A0 (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C002243C (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 *     ?GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0060A14 (-GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VE.c)
 * Callees:
 *     <none>
 */

union _EDID_V1_BLOCK *const *__fastcall MonDescParser::EDID_PARSER::GetIterAtElement(
        MonDescParser::EDID_PARSER *this,
        int a2)
{
  int v2; // r8d
  MonDescParser::EDID_PARSER *v3; // r9

  v2 = 0;
  v3 = (MonDescParser::EDID_PARSER *)((char *)this + 8 * *((_QWORD *)this + 10));
  while ( this != v3 )
  {
    if ( v2 == a2 )
      return (union _EDID_V1_BLOCK *const *)this;
    ++v2;
    this = (MonDescParser::EDID_PARSER *)((char *)this + 8);
  }
  return 0LL;
}
