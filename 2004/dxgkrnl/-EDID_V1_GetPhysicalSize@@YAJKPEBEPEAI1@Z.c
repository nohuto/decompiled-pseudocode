/*
 * XREFs of ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000BBDC
 * Callers:
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0141C4C (MonitorGetDpiInfoFromDescriptor.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0188E6C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0189A20 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AFA38 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0009F28 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C000BCF4 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 */

__int64 __fastcall EDID_V1_GetPhysicalSize(__int64 a1, unsigned __int8 *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 result; // rax
  bool v7; // r9
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  _QWORD v16[12]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int8 *v17; // [rsp+98h] [rbp+10h] BYREF

  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  v16[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v16, a2, 0x80u);
  if ( (int)result >= 0 )
  {
    v17 = 0LL;
    v8 = 10 * *(unsigned __int8 *)(v16[0] + 21LL);
    v9 = 10 * *(unsigned __int8 *)(v16[0] + 22LL);
    if ( MonDescParser::EDID_PARSER::GetDetTimParser(
           (MonDescParser::EDID_PARSER *)v16,
           0,
           (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v17,
           v7) )
    {
      v10 = v17[14];
      v11 = v10 & 0xF;
      v12 = v17[12] + (v10 >> 4 << 8);
      v13 = (v11 << 8) + v17[13];
      v14 = v12 - v8;
      if ( v12 < v8 )
        v14 = v8 - v12;
      if ( v14 >= 0xA )
        goto LABEL_15;
      v15 = v13 - v9;
      if ( v13 < v9 )
        v15 = v9 - v13;
      if ( v15 >= 0xA )
      {
LABEL_15:
        v13 = v9;
        v12 = v8;
      }
      *a3 = v12;
      *a4 = v13;
    }
    else
    {
      *a3 = v8;
      *a4 = v9;
    }
    return 0LL;
  }
  return result;
}
