/*
 * XREFs of ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02EF694
 * Callers:
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ED538 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C039C424 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C039FFB4 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     MonitorGetCachedApiGammaRampForDiagnostics @ 0x1C03B0530 (MonitorGetCachedApiGammaRampForDiagnostics.c)
 *     MonitorGetLidStateFromMonitor @ 0x1C03B05C4 (MonitorGetLidStateFromMonitor.c)
 */

__int64 __fastcall VIDPNTARGETINFO::Initialize(
        VIDPNTARGETINFO *this,
        struct DXGADAPTER *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  unsigned __int8 IsMonitorConnected; // al
  unsigned int v7; // edx
  bool v8; // al
  __int64 v9; // rcx
  unsigned __int8 v11; // [rsp+68h] [rbp+10h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry1(1LL, 1605LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1605LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_DWORD *)this = *((_DWORD *)a3 + 6);
  IsMonitorConnected = DMMVIDEOPRESENTTARGET::IsMonitorConnected(a3, (VIDPNTARGETINFO *)((char *)this + 8));
  v7 = *(_DWORD *)this;
  v11 = 0;
  *((_BYTE *)this + 4) = IsMonitorConnected != 0;
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 23);
  DmmIsTargetInClientVidPnTopology(a2, v7, &v11);
  *((_BYTE *)this + 5) = v11 != 0;
  v8 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a3 + 20));
  *((_BYTE *)this + 6) = v8;
  if ( v8 )
  {
    v9 = *((_QWORD *)a3 + 14);
    v12 = 0;
    if ( (int)MonitorGetLidStateFromMonitor(v9, &v12) >= 0 )
      *((_BYTE *)this + 7) = v12;
  }
  MonitorGetCachedApiGammaRampForDiagnostics(*((_QWORD *)a3 + 14), (char *)this + 16);
  return 0LL;
}
