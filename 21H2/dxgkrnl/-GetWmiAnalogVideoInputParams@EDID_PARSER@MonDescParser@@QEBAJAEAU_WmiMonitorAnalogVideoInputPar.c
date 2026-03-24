/*
 * XREFs of ?GetWmiAnalogVideoInputParams@EDID_PARSER@MonDescParser@@QEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C0024730
 * Callers:
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C00246DC (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_PARSER::GetWmiAnalogVideoInputParams(
        MonDescParser::EDID_PARSER *this,
        struct _WmiMonitorAnalogVideoInputParams *a2)
{
  char v2; // cl

  v2 = *(_BYTE *)(*(_QWORD *)this + 20LL);
  if ( v2 < 0 )
    return 3221226021LL;
  a2->SetupExpected = (v2 & 0x10) != 0;
  a2->SeparateSyncsSupported = (v2 & 8) != 0;
  a2->CompositeSyncSupported = (v2 & 4) != 0;
  a2->SyncOnGreenVideoSupported = (v2 & 2) != 0;
  a2->SerrationOfVsyncRequired = v2 & 1;
  a2->SignalLevelStandard = ((unsigned __int8)v2 >> 5) & 3;
  return 0LL;
}
