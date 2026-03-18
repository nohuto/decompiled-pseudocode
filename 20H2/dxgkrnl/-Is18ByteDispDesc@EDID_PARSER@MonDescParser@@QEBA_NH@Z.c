/*
 * XREFs of ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0009E2C
 * Callers:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0009D34 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C001DC40 (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C001E02C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C001F550 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0021D1C (-ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor.c)
 * Callees:
 *     <none>
 */

char __fastcall MonDescParser::EDID_PARSER::Is18ByteDispDesc(MonDescParser::EDID_PARSER *this, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  char result; // al

  v2 = *(_QWORD *)this;
  v3 = 9 * (a2 + 3LL);
  result = 0;
  if ( !*(_WORD *)(*(_QWORD *)this + 2 * v3)
    && !*(_BYTE *)(v2 + 2 * v3 + 2)
    && (!*(_BYTE *)(v2 + 2 * v3 + 4) || *(_BYTE *)(v2 + 2 * v3 + 3) == 0xFD)
    && *(_BYTE *)(v2 + 2 * v3 + 3) != 16 )
  {
    return 1;
  }
  return result;
}
