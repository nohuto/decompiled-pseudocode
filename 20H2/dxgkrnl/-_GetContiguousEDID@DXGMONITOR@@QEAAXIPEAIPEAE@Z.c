/*
 * XREFs of ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0165C9C
 * Callers:
 *     MonitorGetEdidFromMonitor @ 0x1C0165BD0 (MonitorGetEdidFromMonitor.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01877F4 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C018861C (-_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z.c)
 *     ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z @ 0x1C01887B0 (-_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z.c)
 * Callees:
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C0165D38 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

void __fastcall DXGMONITOR::_GetContiguousEDID(DXGMONITOR *this, __int64 a2, unsigned int *a3, unsigned __int8 *a4)
{
  unsigned int v4; // edx
  _OWORD *EdidBlockPtr; // rax
  __int64 v7; // r9
  _DWORD *v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // r8

  v4 = 0;
  do
  {
    EdidBlockPtr = DXGMONITOR::_GetEdidBlockPtr(this, v4);
    if ( !EdidBlockPtr )
      break;
    v10 = v4 << 7;
    if ( (int)v10 + 128 > v9 )
      break;
    ++v4;
    *(_OWORD *)(v10 + v7) = *EdidBlockPtr;
    *(_OWORD *)(v10 + v7 + 16) = EdidBlockPtr[1];
    *(_OWORD *)(v10 + v7 + 32) = EdidBlockPtr[2];
    *(_OWORD *)(v10 + v7 + 48) = EdidBlockPtr[3];
    *(_OWORD *)(v10 + v7 + 64) = EdidBlockPtr[4];
    *(_OWORD *)(v10 + v7 + 80) = EdidBlockPtr[5];
    *(_OWORD *)(v10 + v7 + 96) = EdidBlockPtr[6];
    *(_OWORD *)(v10 + v7 + 112) = EdidBlockPtr[7];
  }
  while ( v4 < 0x37 );
  *v8 = v4 << 7;
}
