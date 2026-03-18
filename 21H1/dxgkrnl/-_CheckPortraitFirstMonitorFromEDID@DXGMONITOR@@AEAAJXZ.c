/*
 * XREFs of ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C016A954
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0167C8C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C016A258 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00120B8 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00F05A0 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(DXGMONITOR *this)
{
  unsigned __int8 *EdidBaseBlockPtr; // rax
  unsigned int v3; // eax
  int v4; // ecx
  unsigned int v5; // ecx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v8 = 0;
  EdidBaseBlockPtr = (unsigned __int8 *)DXGMONITOR::_GetEdidBaseBlockPtr(this);
  if ( (int)EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v7) < 0 )
    return 3221226021LL;
  v3 = v7;
  v4 = *((_DWORD *)this + 10);
  if ( (unsigned int)v7 < HIDWORD(v7) )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  if ( (unsigned int)v7 >= HIDWORD(v7) )
    v3 = HIDWORD(v7);
  *((_DWORD *)this + 10) = v5 & 0xFFFFFDFF | (v3 < 0x400 ? 0x200 : 0);
  return 0LL;
}
