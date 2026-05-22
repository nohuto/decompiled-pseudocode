/*
 * XREFs of ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBV1@@Z @ 0x1800AC420
 * Callers:
 *     ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AC4A8 (-TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800ACBF8 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampRangeUpdateReportParser::IsParserValid(const struct HidLampRangeUpdateReportParser *a1)
{
  char v1; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx

  v1 = 0;
  if ( !*((_BYTE *)a1 + 528) && !*((_BYTE *)a1 + 529) && !*((_BYTE *)a1 + 530)
    || *((_QWORD *)a1 + 16) != *((_QWORD *)a1 + 25) )
  {
    return 0;
  }
  if ( *((_BYTE *)a1 + 17) == 2
    && HidChannelValueInfo::IsValid(
         (const struct HidLampRangeUpdateReportParser *)((char *)a1 + 96),
         (__int64)a1,
         0x7FFFFFFFLL)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v3 + 168), v3, v4)
    && HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v5 + 24), v5, 0xFFFFFFFFLL) )
  {
    return 1;
  }
  return v1;
}
