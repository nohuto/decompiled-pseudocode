/*
 * XREFs of ?_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ @ 0x1C01680E0
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0167C8C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ @ 0x1C00DEE7C (-_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitColorSpaceTransformCaps(DXGMONITOR *this, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
    v2 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(v2 + 8) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
    v2 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( DXGMONITOR::_IsTargetMatrix_3x4Supported(this) )
  {
    *((_DWORD *)this + 290) = 4096;
    *(_QWORD *)((char *)this + 1116) = 1LL;
    *(_OWORD *)((char *)this + 1124) = 0LL;
    *((_DWORD *)this + 291) = 1;
    *((_DWORD *)this + 292) = 1480;
    *((_DWORD *)this + 293) = -8388609;
    *((_DWORD *)this + 294) = 2139095039;
    *((_DWORD *)this + 285) = *((_DWORD *)this + 285) & 0xFFF00000 | 0xC03;
    *((_DWORD *)this + 286) = 1;
    *((_DWORD *)this + 287) = 1480;
    *((_DWORD *)this + 288) = -8388609;
    *((_DWORD *)this + 289) = 2139095039;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
