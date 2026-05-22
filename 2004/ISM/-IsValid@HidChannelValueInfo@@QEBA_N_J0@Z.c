/*
 * XREFs of ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800AC738
 * Callers:
 *     ?TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800A9BE0 (-TryCreateAndInitialize@HidLampArrayAttributesReportParser@@SAJPEBUParsedHidReportDescriptor@@PE.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AA090 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z @ 0x1800AA668 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AA9A4 (-TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBUParsedHidReportDescriptor@.c)
 *     ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800AB508 (-IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV-$vector@VHidChannelValueInfo@@V-$alloc.c)
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z @ 0x1800AB57C (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEAV1@@Z.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z @ 0x1800ABF60 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z.c)
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800ABFE8 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 *     ?TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AC464 (-TryCreateAndInitialize@HidLampArrayControlReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPE.c)
 * Callees:
 *     <none>
 */

bool __fastcall HidChannelValueInfo::IsValid(HidChannelValueInfo *this, __int64 a2, __int64 a3)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)this + 1) && *(_DWORD *)this && !*((_QWORD *)this + 3) && *((_QWORD *)this + 4) <= a3 )
    return *((_QWORD *)this + 4) > 0LL;
  return result;
}
