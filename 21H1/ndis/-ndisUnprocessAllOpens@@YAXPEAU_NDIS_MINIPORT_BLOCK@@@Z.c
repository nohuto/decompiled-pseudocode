/*
 * XREFs of ?ndisUnprocessAllOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015F20
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012B8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisUnprocessAllOpens(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // rsi
  volatile unsigned int OpenFlags; // eax
  struct _KEVENT *WaitNetPnpEvent; // rcx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x16u,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  OpenQueue = a1->OpenQueue;
  if ( OpenQueue )
  {
    do
    {
      MiniportNextOpen = OpenQueue->MiniportNextOpen;
      KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
      OpenFlags = OpenQueue->OpenFlags;
      if ( (OpenFlags & 0x80010) == 0x80010 )
      {
        WaitNetPnpEvent = OpenQueue->WaitNetPnpEvent;
        OpenQueue->OpenFlags = OpenFlags & 0xFFF7FFEF;
        if ( WaitNetPnpEvent )
        {
          KeSetEvent(WaitNetPnpEvent, 0, 0);
          OpenQueue->WaitNetPnpEvent = 0LL;
        }
      }
      else if ( (OpenFlags & 0x80000) != 0 )
      {
        OpenQueue->OpenFlags &= ~0x80000u;
      }
      KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
      OpenQueue = MiniportNextOpen;
    }
    while ( MiniportNextOpen );
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x17u,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      a1);
}
