/*
 * XREFs of ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C005DB34
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01548F8 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00124E4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetWmiColorCharacteristics@EDID_PARSER@MonDescParser@@QEBAJAEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C005FAA8 (-GetWmiColorCharacteristics@EDID_PARSER@MonDescParser@@QEBAJAEAU_WmiMonitorColorCharacteristics@.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorColorCharacteristics(
        unsigned __int8 *a1,
        struct _WmiMonitorColorCharacteristics *a2)
{
  __int64 result; // rax
  struct _WmiMonitorColorCharacteristics *v3; // r11
  _BYTE v4[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+70h] [rbp-18h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v4, a1, 0x80u);
  if ( (int)result >= 0 )
    return MonDescParser::EDID_PARSER::GetWmiColorCharacteristics((MonDescParser::EDID_PARSER *)v4, v3);
  return result;
}
