/*
 * XREFs of ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02B6D90
 * Callers:
 *     ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B4FA0 (-AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C012AA90 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02D9850 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorGetCachedApiGammaRampForDiagnostics @ 0x1C02EF164 (MonitorGetCachedApiGammaRampForDiagnostics.c)
 */

__int64 __fastcall VIDPNTARGETINFO::Initialize(
        VIDPNTARGETINFO *this,
        struct DXGADAPTER *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int8 IsMonitorConnected; // al
  unsigned int v12; // edx
  unsigned int IsTargetInClientVidPnTopology; // ebx
  unsigned __int8 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v10 + 24) = 1468LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *(_DWORD *)this = *((_DWORD *)a3 + 6);
  IsMonitorConnected = DMMVIDEOPRESENTTARGET::IsMonitorConnected(a3, (VIDPNTARGETINFO *)((char *)this + 8), v8, v9);
  v12 = *(_DWORD *)this;
  v15 = 0;
  *((_BYTE *)this + 4) = IsMonitorConnected != 0;
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 22);
  IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(a2, v12, &v15);
  *((_BYTE *)this + 5) = v15 != 0;
  *((_BYTE *)this + 6) = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a3 + 20));
  MonitorGetCachedApiGammaRampForDiagnostics(*((_QWORD *)a3 + 14), (char *)this + 16);
  return IsTargetInClientVidPnTopology;
}
