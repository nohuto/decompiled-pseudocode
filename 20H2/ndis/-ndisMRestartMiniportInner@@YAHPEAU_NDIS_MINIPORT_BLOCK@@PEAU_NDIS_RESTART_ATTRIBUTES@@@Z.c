/*
 * XREFs of ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01319B4
 * Callers:
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B928 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017940 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B714 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AD04 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003AAC8 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMRestartComplete @ 0x1C003AB70 (NdisMRestartComplete.c)
 *     ?ndisLWM5RestartMinport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x1C006DB80 (-ndisLWM5RestartMinport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C008C0FC (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A53C0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A72FC (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeRestart@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x1C010BA48 (-ndisMInvokeRestart@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C011DE30 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisMRestartMiniportInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RESTART_ATTRIBUTES *a2)
{
  KIRQL v4; // dl
  __int64 v5; // rdx
  bool v6; // zf
  struct _NDIS_MINIPORT_RESTART_PARAMETERS *v7; // rdx
  bool v8; // cf
  NDIS_STATUS restarted; // eax
  unsigned int AsyncOpCompletionStatus; // edi
  char v12[8]; // [rsp+30h] [rbp-40h]
  struct _NDIS_MINIPORT_RESTART_PARAMETERS v13; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  KIRQL NewIrql; // [rsp+A0h] [rbp+30h] BYREF

  memset(&v13, 0, sizeof(v13));
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_b1856828329f351dacd8075aad833f95_Traceguids,
      a1);
  if ( ndisReferenceMiniportByHandle(a1, 0, 0x1Bu) )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( a1->State == NdisMiniportPaused )
    {
      ndisSetupLwfMiniportHandlers(a1);
      v4 = NewIrql;
      a1->MiniportThread = 0LL;
      a1->State = NdisMiniportRestarting;
      KeReleaseSpinLock(&a1->Lock, v4);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v5,
          9u,
          0x10u,
          (struct _GUID *)&WPP_b1856828329f351dacd8075aad833f95_Traceguids,
          (char)a1,
          &a1->pAdapterInstanceName->Length);
      *((_DWORD *)&v13.Header + 1) = 0;
      *(_QWORD *)&v13.Flags = 0LL;
      v6 = a1->SelectiveSuspend == 0LL;
      v13.Header = (_NDIS_OBJECT_HEADER)1573248;
      v13.RestartAttributes = a2;
      if ( !v6 )
        ndisSetBusySync((__int64)a1, 35LL, 0LL);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v8 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v8 )
        restarted = ndisLWM5RestartMinport(a1, v7);
      else
        restarted = ndisMInvokeRestart(a1, &v13);
      AsyncOpCompletionStatus = restarted;
      if ( restarted == 259 )
      {
        ndisWaitForKernelObject(&Event);
        AsyncOpCompletionStatus = a1->AsyncOpCompletionStatus;
      }
      else
      {
        NdisMRestartComplete(a1, restarted);
      }
      if ( a1->SelectiveSuspend )
        ndisClearBusy((__int64)a1, 1, 35);
      if ( AsyncOpCompletionStatus )
      {
        a1->State = NdisMiniportPaused;
        ndisMiniportFatalError(a1, NdisMEventErr_FailedRestart);
        NdisTraceLoggingRareMiniportPath();
      }
      else
      {
        a1->State = NdisMiniportRunning;
        ndisLogMiniportEvent(a1, NdisMEvent_MiniportRestarted);
      }
      if ( !AsyncOpCompletionStatus )
        ndisUpdateOperationalStatus(a1);
    }
    else
    {
      a1->MiniportThread = 0LL;
      AsyncOpCompletionStatus = -1073741808;
      KeReleaseSpinLock(&a1->Lock, NewIrql);
    }
    ndisDereferenceMiniport(a1, 0x1Bu);
  }
  else
  {
    AsyncOpCompletionStatus = -1073676282;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = AsyncOpCompletionStatus;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_b1856828329f351dacd8075aad833f95_Traceguids,
      (char)a1,
      *(_QWORD *)v12);
  }
  return AsyncOpCompletionStatus;
}
