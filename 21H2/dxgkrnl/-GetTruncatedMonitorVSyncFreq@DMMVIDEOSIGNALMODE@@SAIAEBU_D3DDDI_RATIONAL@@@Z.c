/*
 * XREFs of ?GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C006B964
 * Callers:
 *     ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01D10F8 (-_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq(const struct _D3DDDI_RATIONAL *a1)
{
  UINT Denominator; // r8d

  Denominator = a1->Denominator;
  if ( Denominator )
    return a1->Numerator / Denominator;
  else
    return 0xFFFFFFFFLL;
}
