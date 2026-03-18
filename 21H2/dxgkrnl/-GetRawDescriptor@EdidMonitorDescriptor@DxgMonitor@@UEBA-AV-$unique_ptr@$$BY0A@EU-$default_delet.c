/*
 * XREFs of ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01D1EF0
 * Callers:
 *     ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C0213F70 (-GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$def.c)
 *     ?GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x1C02190F0 (-GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z.c)
 *     ?GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x1C0219150 (-GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z.c)
 *     ?GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x1C0219B30 (-GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z.c)
 *     ?IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1C0219BC0 (-IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C021A260 (-GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C021ABB0 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C021AED0 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor@@AEBAXIPEAIPEAE@Z @ 0x1C01D1F88 (-_GetContiguousEDID@EdidMonitorDescriptor@DxgMonitor@@AEBAXIPEAIPEAE@Z.c)
 */

unsigned __int8 **__fastcall DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        __int64 a4)
{
  int v5; // esi
  unsigned int v8; // esi
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rbx

  *a3 = 0;
  v5 = *((_DWORD *)this + 4);
  if ( v5 )
  {
    v8 = v5 << 7;
    v9 = (unsigned __int8 *)operator new[](v8, 0x4D677844u, 256LL, a4);
    v10 = v9;
    if ( v9 )
    {
      DxgMonitor::EdidMonitorDescriptor::_GetContiguousEDID(this, v8, a3, v9);
      if ( v8 != *a3 )
        WdLogSingleEntry0(1LL);
    }
    else
    {
      WdLogSingleEntry0(3LL);
    }
    *a2 = v10;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
