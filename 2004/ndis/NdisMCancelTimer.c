/*
 * XREFs of NdisMCancelTimer @ 0x1C0017670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 */

void __stdcall NdisMCancelTimer(PNDIS_MINIPORT_TIMER Timer, PBOOLEAN TimerCancelled)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  BOOLEAN v5; // al
  _NDIS_MINIPORT_BLOCK *v6; // r8
  KIRQL v7; // r8
  $D73D6969079A092B7078AF02E356504F *i; // rcx
  struct _NDIS_MINIPORT_TIMER *TimerQueue; // rdx

  Miniport = Timer->Miniport;
  if ( (Miniport->DriverVerifyFlags & 8) != 0 )
  {
    *TimerCancelled = 0;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xCu,
        0xBu,
        (struct _GUID *)&WPP_441f45cc6c5d3fbfa3640add00eb4c2b_Traceguids,
        (char)Miniport,
        Timer);
    v5 = KeCancelTimer(&Timer->Timer);
    *TimerCancelled = v5;
    v6 = Timer->Miniport;
    if ( (v6->DriverHandle->Flags & 2) != 0 && v5 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&v6->TimerQueueLock);
      for ( i = &Timer->Miniport->560; ; i = ($D73D6969079A092B7078AF02E356504F *)&TimerQueue->NextTimer )
      {
        TimerQueue = i->TimerQueue;
        if ( !i->TimerQueue )
          break;
        if ( TimerQueue == Timer )
        {
          i->TimerQueue = Timer->NextTimer;
          break;
        }
      }
      KeReleaseSpinLock(&Timer->Miniport->TimerQueueLock, v7);
    }
  }
}
