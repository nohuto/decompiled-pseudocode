/*
 * XREFs of ?ndisLegacyProtocolPauseRestartHandler@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT@@@Z @ 0x1C0097164
 * Callers:
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012BB74 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     NdisWaitEvent @ 0x1C0039320 (NdisWaitEvent.c)
 */

void __fastcall ndisLegacyProtocolPauseRestartHandler(struct _NDIS_OPEN_BLOCK *a1, struct _NET_PNP_EVENT *a2)
{
  KIRQL v4; // al
  KIRQL v5; // al
  int OutstandingSends; // r14d
  __int64 v7; // [rsp+30h] [rbp-28h]
  char v8[4]; // [rsp+30h] [rbp-28h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = a2->NetEvent;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x4Du,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      *(_DWORD *)v8);
  }
  if ( a2->NetEvent == NetEventPause )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock);
    OutstandingSends = a1->OutstandingSends;
    a1->PnPStateLock.OldIrql = v5;
    a1->PnPState = Ndis5StatePaused;
    if ( OutstandingSends )
      KeClearEvent(&a1->PauseEvent.Event);
    KeReleaseSpinLock(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock, a1->PnPStateLock.OldIrql);
    if ( OutstandingSends )
      NdisWaitEvent(&a1->PauseEvent, 0);
  }
  else if ( a2->NetEvent == NetEventRestart )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock);
    a1->PnPState = Ndis5StateRunning;
    a1->PnPStateLock.OldIrql = v4;
    KeReleaseSpinLock(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock, v4);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = a2->NetEvent;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x4Eu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      v7);
  }
}
