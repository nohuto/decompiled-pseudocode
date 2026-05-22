/*
 * XREFs of ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x180129A6C
 * Callers:
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x18009D478 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18009D944 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18009DA88 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1801298F4 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x180129F84 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x18012A090 (-at@-$map@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$$CBW4GazeProperty.c)
 */

__int64 __fastcall GazeHidParser::GetPropertyValue(
        __int64 a1,
        __int64 a2,
        CHAR *a3,
        ULONG a4,
        HIDP_REPORT_TYPE ReportType,
        PCHAR a6,
        unsigned int a7)
{
  int v9; // ebx
  USHORT v11; // r14
  __int64 v12; // rdx
  USAGE v13; // r9
  PCHAR v15; // r13
  HIDP_REPORT_TYPE v16; // ecx
  PCHAR v17; // r13
  HIDP_REPORT_TYPE v18; // ecx
  HIDP_REPORT_TYPE v19; // ecx
  HIDP_REPORT_TYPE v20; // ecx
  USAGE v21; // r9
  ULONG UsageValue[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v24; // [rsp+98h] [rbp+38h] BYREF

  v24 = a2;
  UsageValue[0] = 0;
  v9 = a2;
  if ( !(unsigned __int8)GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v11 = *(_WORD *)std::map<enum GazeProperty,unsigned short>::at(a1 + 72, &v24);
  switch ( v9 )
  {
    case 1:
      v21 = 1024;
LABEL_37:
      if ( HidP_GetUsageValue(ReportType, 0x12u, v11, v21, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      {
        *(_DWORD *)a6 = UsageValue[0];
        return 0LL;
      }
      return 2147943568LL;
    case 2:
      v21 = 769;
      goto LABEL_37;
    case 3:
      if ( a7 < 0xA )
      {
        v12 = 338LL;
        goto LABEL_19;
      }
      if ( HidP_GetUsageValue(ReportType, 0x12u, v11, 0x200u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      {
        v17 = a6;
        v18 = ReportType;
        *(_WORD *)a6 = UsageValue[0];
        if ( HidP_GetUsageValue(v18, 0x12u, v11, 0x201u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
        {
          v19 = ReportType;
          *((_WORD *)v17 + 1) = UsageValue[0];
          if ( HidP_GetUsageValue(v19, 0x12u, v11, 0x202u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
          {
            v20 = ReportType;
            *((_DWORD *)v17 + 1) = UsageValue[0];
            if ( HidP_GetUsageValue(v20, 0x12u, v11, 0x203u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
            {
              *((_WORD *)v17 + 4) = UsageValue[0];
              return 0LL;
            }
          }
        }
      }
      return 2147943568LL;
  }
  if ( v9 != 4 )
  {
    if ( v9 != 5 )
    {
      if ( v9 != 6 )
      {
        if ( v9 <= 6 )
          goto LABEL_11;
        if ( v9 <= 9 )
        {
          v12 = 279LL;
          goto LABEL_19;
        }
        if ( v9 != 10 )
        {
LABEL_11:
          v12 = 428LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
            (const char *)0x80070057LL);
          return 2147942487LL;
        }
      }
      if ( a7 < 8 )
      {
        v12 = 303LL;
        goto LABEL_19;
      }
      if ( HidP_GetUsageValue(ReportType, 0x12u, v11, 0x21u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
        return 2147943568LL;
      v13 = 34;
      goto LABEL_26;
    }
    if ( a7 < 8 )
    {
      v12 = 254LL;
      goto LABEL_19;
    }
    if ( HidP_GetUsageValueArray(ReportType, 0x12u, v11, 0x20u, a6, 8u, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      return 0LL;
    return 2147943568LL;
  }
  if ( a7 < 8 )
  {
    v12 = 397LL;
    goto LABEL_19;
  }
  if ( HidP_GetUsageValue(ReportType, 0x12u, v11, 0x204u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
    return 2147943568LL;
  v13 = 517;
LABEL_26:
  v15 = a6;
  v16 = ReportType;
  *(_DWORD *)a6 = UsageValue[0];
  if ( HidP_GetUsageValue(v16, 0x12u, v11, v13, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
    return 2147943568LL;
  *((_DWORD *)v15 + 1) = UsageValue[0];
  return 0LL;
}
