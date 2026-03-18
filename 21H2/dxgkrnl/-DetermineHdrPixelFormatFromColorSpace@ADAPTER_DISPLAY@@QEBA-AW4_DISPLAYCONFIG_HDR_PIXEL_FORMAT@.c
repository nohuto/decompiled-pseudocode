/*
 * XREFs of ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x1C01E78C0
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C01E76A8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1C01E7CF0 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03B06F4 (MonitorIsMonitorAndLinkHDRCapable.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DetermineHdrPixelFormatFromColorSpace(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // ecx
  int v7; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  switch ( a2 )
  {
    case 12:
      v7 = 0;
      if ( (int)MonitorIsMonitorAndLinkHDRCapable(a3, &v7) >= 0 && (v7 & 1) != 0 )
        return (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(a1);
      break;
    case 30:
      return 3;
    case 33:
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 436LL);
      if ( (v6 & 0x200) == 0 && (v6 & 8) == 0 )
      {
        WdLogSingleEntry1(1LL, 3035LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"this->GetAdapter()->IsXBoxOneDevice() || this->GetAdapter()->IsSoftGPU()",
          3035LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      break;
  }
  return v3;
}
