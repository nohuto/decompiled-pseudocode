/*
 * XREFs of ?_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020DB90
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020DA90 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C001107C (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_InsertMonitorSourceMode(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  int v4; // eax
  __int64 v5; // r9
  char *v6; // rsi
  DxgMonitor::MonitorModes *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int128 v12; // xmm1
  char *v13; // rax
  char **v14; // rcx

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(&a2->VideoSignalInfo);
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v4);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    return 3223192330LL;
  }
  v6 = (char *)this + 128;
  v7 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 16);
  if ( v7 == (DxgMonitor::MonitorModes *)((char *)this + 128) )
    goto LABEL_14;
  v8 = (char *)v7 - 96;
  if ( !v7 )
    v8 = 0LL;
  if ( !v8 )
  {
LABEL_14:
    v10 = operator new[](0x78uLL, 0x4D677844u, 256LL, v5);
    v11 = v10;
    if ( !v10 )
    {
      WdLogSingleEntry0(2LL);
      return 3221225495LL;
    }
    *(_OWORD *)v10 = *(_OWORD *)&a2->Id;
    *(_OWORD *)(v10 + 16) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *(_OWORD *)(v10 + 32) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *(_OWORD *)(v10 + 48) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *(_OWORD *)(v10 + 64) = *(_OWORD *)&a2->ColorBasis;
    v12 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *(_DWORD *)(v10 + 112) = 6;
    *(_OWORD *)(v10 + 80) = v12;
    *(_DWORD *)(v10 + 84) = 5;
    v13 = (char *)(v10 + 96);
    ++*((_DWORD *)this + 30);
    v14 = (char **)*((_QWORD *)this + 17);
    if ( *v14 != v6 )
      __fastfail(3u);
    *(_QWORD *)v13 = v6;
    *((_QWORD *)v13 + 1) = v14;
    *v14 = v13;
    *((_QWORD *)this + 17) = v13;
    if ( *(_DWORD *)(v11 + 88) == 1 )
    {
      WdLogSingleEntry1(7LL, v11);
      *((_QWORD *)this + 18) = v11;
    }
    return 0LL;
  }
  while ( a2->Id != *(_DWORD *)v8 )
  {
    v9 = (char *)*((_QWORD *)v8 + 12);
    if ( v9 != v6 )
    {
      v8 = v9 - 96;
      if ( !v9 )
        v8 = 0LL;
      if ( v8 )
        continue;
    }
    goto LABEL_14;
  }
  WdLogSingleEntry2(2LL, a2, a2->Id);
  return 3223192340LL;
}
