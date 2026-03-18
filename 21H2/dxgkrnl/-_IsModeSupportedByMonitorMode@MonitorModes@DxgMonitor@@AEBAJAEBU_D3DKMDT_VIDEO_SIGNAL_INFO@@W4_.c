/*
 * XREFs of ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01D10F8
 * Callers:
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A9040 (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C0017CD4 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C006B964 (-GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        bool *a5,
        _DWORD *a6)
{
  __int64 v10; // r14
  __int64 i; // rax
  __int64 v12; // rbx
  bool HaveEquivalentMonitorFrequencyRequirements; // al
  char v15; // r9
  unsigned int TruncatedMonitorVSyncFreq; // eax
  unsigned int v17; // r10d
  bool v18; // cc
  char v19; // al
  int v20; // eax

  if ( (unsigned int)(a3 - 1) > 1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  v10 = a1 + 128;
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v12 + 96) )
  {
    if ( i == v10 )
      goto LABEL_17;
    v12 = i - 96;
    if ( !i )
      v12 = 0LL;
    if ( !v12 )
    {
LABEL_17:
      *a5 = 0;
      return 0LL;
    }
    if ( *(_DWORD *)(v12 + 84) != 5 )
    {
      if ( a3 == 2 )
      {
        HaveEquivalentMonitorFrequencyRequirements = DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                                                       (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a2,
                                                       (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 8),
                                                       a4);
      }
      else
      {
        if ( (unsigned int)DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq((const struct _D3DDDI_RATIONAL *)(a2 + 20))
           - 56 <= 5
          || (TruncatedMonitorVSyncFreq = DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq((const struct _D3DDDI_RATIONAL *)(v12 + 28)),
              v18 = v17 <= TruncatedMonitorVSyncFreq,
              v19 = 0,
              v18) )
        {
          v19 = 1;
        }
        if ( !v15
          || !v19
          || (HaveEquivalentMonitorFrequencyRequirements = 1, ((*(_BYTE *)(a2 + 48) ^ *(_BYTE *)(v12 + 56)) & 7) != 0) )
        {
          HaveEquivalentMonitorFrequencyRequirements = 0;
        }
      }
      *a5 = HaveEquivalentMonitorFrequencyRequirements;
      if ( HaveEquivalentMonitorFrequencyRequirements )
        break;
    }
  }
  v20 = *(_DWORD *)(v12 + 84);
  switch ( v20 )
  {
    case 2:
      *a6 = 2;
      return 0LL;
    case 3:
      *a6 = 4;
      return 0LL;
    case 1:
      *a6 = 6;
      return 0LL;
  }
  WdLogSingleEntry1(2LL, *(int *)(v12 + 84));
  return 3223192354LL;
}
