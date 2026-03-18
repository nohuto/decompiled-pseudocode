/*
 * XREFs of rimSimulatedPointerDeviceScanTime @ 0x1C017B964
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C017BA50 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1C0176F14 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 */

void __fastcall rimSimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax

  v4 = *a3;
  v6 = a2 + 784;
  if ( ++*(_DWORD *)(a2 + 808) == 1 )
  {
    v7 = *a4;
    *(_DWORD *)v6 = *a4;
    *(_QWORD *)(v6 + 40) = v4;
  }
  else
  {
    v7 = (unsigned __int64)(1000 * (v4 - *(_QWORD *)(a2 + 824))) / *(_QWORD *)(a1 + 520) + *(_DWORD *)v6;
    *a4 = v7;
  }
  v8 = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 4) = v7;
  *(_QWORD *)(v6 + 32) = v4;
  *(_DWORD *)(v6 + 8) = v8;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v6);
}
