/*
 * XREFs of ?NdisMSetTimer@@YAXPEAU_NDIS_MINIPORT_TIMER@@I@Z @ 0x1C00175C0
 * Callers:
 *     NdisSetTimer @ 0x1C0019EA0 (NdisSetTimer.c)
 *     NdisSetPeriodicTimer @ 0x1C00BD570 (NdisSetPeriodicTimer.c)
 *     NdisSetTimerEx @ 0x1C00BD5C0 (NdisSetTimerEx.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00BE270 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qql @ 0x1C0019740 (WPP_RECORDER_SF_qql_ea_1C0019740.c)
 */

void __fastcall NdisMSetTimer(struct _NDIS_MINIPORT_TIMER *a1, int a2)
{
  char v3; // si
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  __int64 v5; // rbx
  KIRQL v6; // al
  _NDIS_MINIPORT_BLOCK *v7; // rdx
  _NDIS_MINIPORT_TIMER *TimerQueue; // r8
  struct _NDIS_MINIPORT_TIMER *v9; // rcx

  v3 = a2;
  Miniport = a1->Miniport;
  v5 = -10000LL * a2;
  if ( (Miniport->DriverHandle->Flags & 2) != 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&Miniport->TimerQueueLock);
    v7 = a1->Miniport;
    TimerQueue = v7->TimerQueue;
    v9 = TimerQueue;
    if ( !TimerQueue )
      goto LABEL_9;
    do
    {
      if ( v9 == a1 )
        break;
      v9 = v9->NextTimer;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_9:
      a1->NextTimer = TimerQueue;
      v7->TimerQueue = a1;
    }
    KeReleaseSpinLock(&a1->Miniport->TimerQueueLock, v6);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      12,
      10,
      (struct _GUID *)&WPP_441f45cc6c5d3fbfa3640add00eb4c2b_Traceguids,
      (char)a1->Miniport,
      (char)a1,
      v3);
  KeSetTimer(&a1->Timer, (LARGE_INTEGER)v5, &a1->Dpc);
}
