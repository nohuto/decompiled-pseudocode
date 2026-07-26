/*
 * XREFs of ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C005C3AC
 * Callers:
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0015B70 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0012CD8 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C005A3E4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C005A6D4 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005CE80 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C4F4 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6BD0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisNicActiveRequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v5; // al
  __int64 v6; // rdx
  struct _NDIS_MINIPORT_AOAC *v7; // rbx
  KIRQL v8; // bl

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_DWORD *)AoAc + 94) = a2 != 0 ? 4 : 0;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
  if ( a2 )
  {
    v7 = a1->AoAc;
    NdisTraceLoggingUnexpectedAoAcError(a1, 2u, a2);
    *((_WORD *)v7 + 241) = *((_WORD *)v7 + 240);
    *((_WORD *)v7 + 240) = 2;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x19u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        a2,
        a1);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    if ( (unsigned int)(*((_DWORD *)AoAc + 16) - 2) <= 1 )
    {
      *((_DWORD *)AoAc + 16) = 0;
      ndisAoAcActiveRefSubtract((__int64)AoAc, 0, 1);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        9u,
        0x18u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        (char)a1,
        &a1->pAdapterInstanceName->Length);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 7LL);
    ndisSetTempRefTimer(a1, ndisNicQuietWakeTimeout);
  }
  ndisAoAcCompleteQueuedIrps(a1, a2);
}
