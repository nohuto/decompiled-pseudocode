/*
 * XREFs of SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C004FF90
 * Callers:
 *     Control_Transfer_Complete @ 0x1C00062CC (Control_Transfer_Complete.c)
 *     Isoch_Stage_CompleteTD @ 0x1C00070C0 (Isoch_Stage_CompleteTD.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C000F744 (Bulk_Stage_FreeScatterGatherList.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0042EC8 (Isoch_Stage_FreeScatterGatherList.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 */

void __fastcall SecureDmaEnabler_ReleaseResourcesAfterDma(__int64 a1, __int64 a2)
{
  char v2; // si
  int v5; // edx
  int v6; // ebp

  v2 = 0;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 8));
      v2 = 1;
    }
    v6 = VslDeleteSecureSection(*(_QWORD *)(a2 + 16));
    if ( v2 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v5,
        18,
        18,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        v6);
    }
  }
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
}
